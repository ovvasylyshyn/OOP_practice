#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
       w.setWindowTitle("Practical work 10");
    w.show();
    return a.exec();
}
