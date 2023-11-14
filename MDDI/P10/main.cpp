#include "mainwindow.h"
#include "sqlitedbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     MainWindow window;
     window.setWindowTitle("Practical work 11");
    window.show();
    return a.exec();
}

