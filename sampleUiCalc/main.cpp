#include "mainwindow.h"

#include <QApplication>
#include <QWidget>

//#include "operations.h"

//operations obj;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
