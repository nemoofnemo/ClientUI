#include "clientmain.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ClientMain w;
	w.show();
	return a.exec();
}
