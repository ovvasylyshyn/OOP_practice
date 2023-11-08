#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Apartment.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createPushButton_2_clicked();

    void on_actionShow_triggered();

    void on_actionExit_triggered();

    void on_actionCreate_triggered();

private:
    Ui::MainWindow *ui;
    Apartment* apartment;
};
#endif // MAINWINDOW_H
