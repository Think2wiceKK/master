#include "mainwindow.h"
#include "logmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    logmanager* logManager = logManager->GetInstance() ;
    logManager->WriteLog(__FUNCTION__,"First logs");



    return a.exec();
}
