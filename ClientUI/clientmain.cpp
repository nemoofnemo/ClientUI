#include "clientmain.h"

ClientMain::ClientMain(QWidget *parent)
	: QMainWindow(parent)
{
	WORD wVersionRequested;
	WSADATA wsaData;	// 这结构是用于接收Wjndows Socket的结构信息的
	int err;

	wVersionRequested = MAKEWORD(2, 2);	// 请求1.1版本的WinSock库
	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0) {
		// 返回值为零的时候是表示成功申请WSAStartup
		QMessageBox::information(NULL, "start up error", "program exit");
	}

	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2) {
		// 检查这个低字节是不是1，高字节是不是1以确定是否我们所请求的1.1版本
		// 否则的话，调用WSACleanup()清除信息，结束函数
		WSACleanup();
		QMessageBox::information(NULL, "start up error", "program exit");
	}

	//member
	sockClient = INVALID_SOCKET;

	//ui
	ui.setupUi(this);

	//connect
	connect(ui.actionAuthor, SIGNAL(triggered()), this, SLOT(doActionAuthor()));
	connect(ui.connectButton, SIGNAL(clicked()), this, SLOT(doConnect()));
	connect(ui.sendButton, SIGNAL(clicked()), this, SLOT(doSend()));
	connect(ui.disconnectButton, SIGNAL(clicked()), this, SLOT(doDisconnect()));
}

ClientMain::~ClientMain(){
	if (sockClient != INVALID_SOCKET) {
		closesocket(sockClient);
	}
}

void ClientMain::doActionAuthor(void) {
	QMessageBox::information(NULL, "author", "nemo");
}

void ClientMain::doConnect(void){
	addrSrv.sin_addr.s_addr = inet_addr(ui.host->text().toStdString().c_str());
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(ui.port->text().toInt());
	ui.plainTextEdit_2->clear();
	QString str;

	if (sockClient == INVALID_SOCKET) {
		sockClient = socket(AF_INET, SOCK_STREAM, 0);
		int ret = ::connect(sockClient, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
		if (ret != 0) {
			//error
			if (sockClient != INVALID_SOCKET)
				closesocket(sockClient);

			sockClient = INVALID_SOCKET;
			str = QString("[Connect]:falied.");
		}
		else {
			//success
			str = QString("[Connect]:success.");
		}
	}
	else {
		//error
		str = QString("[Connect]:you should close connection first.");
	}

	ui.plainTextEdit_2->appendPlainText(str);
}

void ClientMain::doSend(void){
	QString output;
	if (sockClient != INVALID_SOCKET) {
		std::string str = ui.plainTextEdit->toPlainText().toStdString();
		int length = str.length();
		int ret = send(sockClient, str.c_str(), length, 0);

		if (ret != length) {
			//error
			output = QString("[Send]:error.");
		}
		else {
			//send success
			output = QString("[Send]:success.");
		}
	}
	else {
		//error
		output = QString("[Send]:invalid socket.");
	}
	ui.plainTextEdit_2->appendPlainText(output);

	if (ui.recvCheckBox->isChecked()) {
		char * data = new char[0x100000];
		int ret = recv(sockClient, data, 0x100000, 0);
		if (ret > 0) {
			ui.plainTextEdit_2->appendPlainText("[Recv]:content:");
			ui.plainTextEdit_2->appendPlainText(QString(data));
		}
		else {
			ui.plainTextEdit_2->appendPlainText("[Recv]:recv 0 bytes or error.");
		}
		delete[] data;
	}
}

void ClientMain::doDisconnect(void){
	if (sockClient != INVALID_SOCKET) {
		closesocket(sockClient);
		sockClient = INVALID_SOCKET;
	}
	ui.plainTextEdit_2->appendPlainText("[Disconnect]:success.");
}