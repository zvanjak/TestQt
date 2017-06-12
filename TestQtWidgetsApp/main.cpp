#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //QObject::connect(lineEdit, SIGNAL(textChanged(const QString&)), bridge, SLOT(setText(const QString&)) );
    //QObject::connect(bridge, SIGNAL(textChanged(const QString&)), label, SLOT(setText(const QString&)) );

    return a.exec();
}
