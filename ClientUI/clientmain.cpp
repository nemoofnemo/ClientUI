#include "clientmain.h"

ClientMain::ClientMain(QWidget *parent)
	: QMainWindow(parent)
{
	WORD wVersionRequested;
	WSADATA wsaData;	// ��ṹ�����ڽ���Wjndows Socket�Ľṹ��Ϣ��
	int err;

	wVersionRequested = MAKEWORD(2, 2);	// ����1.1�汾��WinSock��
	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0) {
		// ����ֵΪ���ʱ���Ǳ�ʾ�ɹ�����WSAStartup
		QMessageBox::information(NULL, "start up error", "program exit");
	}

	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2) {
		// ���������ֽ��ǲ���1�����ֽ��ǲ���1��ȷ���Ƿ������������1.1�汾
		// ����Ļ�������WSACleanup()�����Ϣ����������
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
		char * data = new char[4096];
		int ret = recv(sockClient, data, 4096, 0);
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