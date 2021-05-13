#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
	std::cout << "hello" << std::endl;
    w.show();
    return a.exec();
}
