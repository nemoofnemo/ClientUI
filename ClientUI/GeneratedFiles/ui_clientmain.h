/********************************************************************************
** Form generated from reading UI file 'clientmain110024.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CLIENTMAIN110024_H
#define CLIENTMAIN110024_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientMainClass
{
public:
	QAction *actionAuthor;
	QWidget *centralWidget;
	QGridLayout *gridLayout;
	QHBoxLayout *horizontalLayout;
	QLabel *label_3;
	QLineEdit *host;
	QLabel *label_4;
	QLineEdit *port;
	QCheckBox *recvCheckBox;
	QVBoxLayout *verticalLayout;
	QLabel *label;
	QHBoxLayout *horizontalLayout_2;
	QPlainTextEdit *plainTextEdit;
	QVBoxLayout *verticalLayout_3;
	QPushButton *connectButton;
	QPushButton *sendButton;
	QPushButton *disconnectButton;
	QSpacerItem *verticalSpacer;
	QHBoxLayout *horizontalLayout_3;
	QVBoxLayout *verticalLayout_4;
	QLabel *label_2;
	QPlainTextEdit *plainTextEdit_2;
	QVBoxLayout *verticalLayout_2;
	QSpacerItem *verticalSpacer_2;
	QPushButton *clearButton;
	QPushButton *quitButton;
	QMenuBar *menuBar;
	QMenu *menuAbout;
	QToolBar *mainToolBar;
	QStatusBar *statusBar;

	void setupUi(QMainWindow *ClientMainClass)
	{
		if (ClientMainClass->objectName().isEmpty())
			ClientMainClass->setObjectName(QStringLiteral("ClientMainClass"));
		ClientMainClass->resize(789, 529);
		actionAuthor = new QAction(ClientMainClass);
		actionAuthor->setObjectName(QStringLiteral("actionAuthor"));
		centralWidget = new QWidget(ClientMainClass);
		centralWidget->setObjectName(QStringLiteral("centralWidget"));
		gridLayout = new QGridLayout(centralWidget);
		gridLayout->setSpacing(6);
		gridLayout->setContentsMargins(11, 11, 11, 11);
		gridLayout->setObjectName(QStringLiteral("gridLayout"));
		horizontalLayout = new QHBoxLayout();
		horizontalLayout->setSpacing(6);
		horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
		label_3 = new QLabel(centralWidget);
		label_3->setObjectName(QStringLiteral("label_3"));

		horizontalLayout->addWidget(label_3);

		host = new QLineEdit(centralWidget);
		host->setObjectName(QStringLiteral("host"));

		horizontalLayout->addWidget(host);

		label_4 = new QLabel(centralWidget);
		label_4->setObjectName(QStringLiteral("label_4"));

		horizontalLayout->addWidget(label_4);

		port = new QLineEdit(centralWidget);
		port->setObjectName(QStringLiteral("port"));

		horizontalLayout->addWidget(port);

		recvCheckBox = new QCheckBox(centralWidget);
		recvCheckBox->setObjectName(QStringLiteral("recvCheckBox"));

		horizontalLayout->addWidget(recvCheckBox);


		gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

		verticalLayout = new QVBoxLayout();
		verticalLayout->setSpacing(6);
		verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
		label = new QLabel(centralWidget);
		label->setObjectName(QStringLiteral("label"));

		verticalLayout->addWidget(label);

		horizontalLayout_2 = new QHBoxLayout();
		horizontalLayout_2->setSpacing(6);
		horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
		plainTextEdit = new QPlainTextEdit(centralWidget);
		plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

		horizontalLayout_2->addWidget(plainTextEdit);

		verticalLayout_3 = new QVBoxLayout();
		verticalLayout_3->setSpacing(6);
		verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
		connectButton = new QPushButton(centralWidget);
		connectButton->setObjectName(QStringLiteral("connectButton"));

		verticalLayout_3->addWidget(connectButton);

		sendButton = new QPushButton(centralWidget);
		sendButton->setObjectName(QStringLiteral("sendButton"));

		verticalLayout_3->addWidget(sendButton);

		disconnectButton = new QPushButton(centralWidget);
		disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

		verticalLayout_3->addWidget(disconnectButton);

		verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

		verticalLayout_3->addItem(verticalSpacer);


		horizontalLayout_2->addLayout(verticalLayout_3);


		verticalLayout->addLayout(horizontalLayout_2);


		gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

		horizontalLayout_3 = new QHBoxLayout();
		horizontalLayout_3->setSpacing(6);
		horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
		verticalLayout_4 = new QVBoxLayout();
		verticalLayout_4->setSpacing(6);
		verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
		label_2 = new QLabel(centralWidget);
		label_2->setObjectName(QStringLiteral("label_2"));

		verticalLayout_4->addWidget(label_2);

		plainTextEdit_2 = new QPlainTextEdit(centralWidget);
		plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));

		verticalLayout_4->addWidget(plainTextEdit_2);


		horizontalLayout_3->addLayout(verticalLayout_4);

		verticalLayout_2 = new QVBoxLayout();
		verticalLayout_2->setSpacing(6);
		verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
		verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

		verticalLayout_2->addItem(verticalSpacer_2);

		clearButton = new QPushButton(centralWidget);
		clearButton->setObjectName(QStringLiteral("clearButton"));

		verticalLayout_2->addWidget(clearButton);

		quitButton = new QPushButton(centralWidget);
		quitButton->setObjectName(QStringLiteral("quitButton"));

		verticalLayout_2->addWidget(quitButton);


		horizontalLayout_3->addLayout(verticalLayout_2);


		gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

		ClientMainClass->setCentralWidget(centralWidget);
		menuBar = new QMenuBar(ClientMainClass);
		menuBar->setObjectName(QStringLiteral("menuBar"));
		menuBar->setGeometry(QRect(0, 0, 789, 23));
		menuAbout = new QMenu(menuBar);
		menuAbout->setObjectName(QStringLiteral("menuAbout"));
		ClientMainClass->setMenuBar(menuBar);
		mainToolBar = new QToolBar(ClientMainClass);
		mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
		ClientMainClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
		statusBar = new QStatusBar(ClientMainClass);
		statusBar->setObjectName(QStringLiteral("statusBar"));
		ClientMainClass->setStatusBar(statusBar);

		menuBar->addAction(menuAbout->menuAction());
		menuAbout->addAction(actionAuthor);

		retranslateUi(ClientMainClass);
		QObject::connect(quitButton, SIGNAL(clicked()), ClientMainClass, SLOT(close()));
		QObject::connect(clearButton, SIGNAL(clicked()), plainTextEdit_2, SLOT(clear()));

		QMetaObject::connectSlotsByName(ClientMainClass);
	} // setupUi

	void retranslateUi(QMainWindow *ClientMainClass)
	{
		ClientMainClass->setWindowTitle(QApplication::translate("ClientMainClass", "ClientMain", 0));
		actionAuthor->setText(QApplication::translate("ClientMainClass", "Author", 0));
		label_3->setText(QApplication::translate("ClientMainClass", "Host:", 0));
		host->setText(QApplication::translate("ClientMainClass", "127.0.0.1", 0));
		label_4->setText(QApplication::translate("ClientMainClass", "Port:", 0));
		port->setText(QApplication::translate("ClientMainClass", "6001", 0));
		recvCheckBox->setText(QApplication::translate("ClientMainClass", "receive response", 0));
		label->setText(QApplication::translate("ClientMainClass", "Request:", 0));
		connectButton->setText(QApplication::translate("ClientMainClass", "&Connect", 0));
		sendButton->setText(QApplication::translate("ClientMainClass", "&Send", 0));
		disconnectButton->setText(QApplication::translate("ClientMainClass", "&Disconnect", 0));
		label_2->setText(QApplication::translate("ClientMainClass", "Output:", 0));
		clearButton->setText(QApplication::translate("ClientMainClass", "Clear", 0));
		quitButton->setText(QApplication::translate("ClientMainClass", "&Quit", 0));
		menuAbout->setTitle(QApplication::translate("ClientMainClass", "About", 0));
	} // retranslateUi

};

namespace Ui {
	class ClientMainClass : public Ui_ClientMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CLIENTMAIN110024_H
