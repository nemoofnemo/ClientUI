#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qmessagebox.h>
#include "ui_clientmain.h"
#include <WinSock2.h>
#pragma comment(lib, "ws2_32.lib") 

class ClientMain : public QMainWindow{
Q_OBJECT
private:
	Ui::ClientMainClass ui;
	SOCKET sockClient;
	SOCKADDR_IN addrSrv;
signals:

private slots :
	void doActionAuthor(void);
	void doConnect(void);
	void doSend(void);
	void doDisconnect(void);
public:
	ClientMain(QWidget *parent = 0);
	~ClientMain();
};

#endif // CLIENTMAIN_H
