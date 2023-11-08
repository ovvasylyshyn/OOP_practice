#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createPushButton_2_clicked()
{
    QString id = ui->idLine_2->text();
    QString number = ui->numberLine_2->text();
    QString area = ui->areaLine_2->text();
    QString numOfRoom = ui->numOfRoomsLine_2->text();
    QString floor = ui->floorLine_2->text();
    QString street = ui->streetLine_2->text();
    QString sunSide = ui->sunSideLine_2->text();
    QString cornerApar = ui->cornerAparLine_2->text();

    if (id.isEmpty() || number.isEmpty()|| area.isEmpty()||numOfRoom.isEmpty()||floor.isEmpty()||street.isEmpty()||sunSide.isEmpty()||cornerApar.isEmpty()){
        QMessageBox::warning(this, "Eror!", "Theres` empty line/s");
        return;
    }
    this->apartment = new Apartment( id.toInt(), number.toInt(), floor.toInt(), numOfRoom.toInt(),  area.toInt(), street.toStdString(), sunSide.toStdString(), cornerApar.toStdString());
}


void MainWindow::on_actionShow_triggered()
{
    QMessageBox::information(this, "Show", "Object`s datas:\n"
    "id: " + QString::number(this->apartment->getId()) + "\n"
    "apartment`s number: " + QString::number(this->apartment->getNumber()) + "\n"
    "apartment`s number of rooms: " + QString::number(this->apartment->getNumOfRoom()) + "\n"
    "apartment`s area: " + QString::number(this->apartment->getArea()) + "\n"
    "apartment`s sunny side: " + QString::fromStdString(this->apartment->getSunSide()) + "\n"
    "Corner apart: " + QString::fromStdString(this->apartment->getCornerApar()) + "\n"
    "apartment`s street: " + QString::fromStdString(this->apartment->getStreet()) + "\n"
    "apartment`s floor: " + QString::number(this->apartment->getFloor()));
}


void MainWindow::on_actionExit_triggered()
{
     QCoreApplication::quit();
}


void MainWindow::on_actionCreate_triggered()
{
     QString id = ui->idLine_2->text();
     QString number = ui->numberLine_2->text();
     QString area = ui->areaLine_2->text();
     QString numOfRoom = ui->numOfRoomsLine_2->text();
     QString floor = ui->floorLine_2->text();
     QString street = ui->streetLine_2->text();
     QString sunSide = ui->sunSideLine_2->text();
     QString cornerApar = ui->cornerAparLine_2->text();

     if (id.isEmpty() || number.isEmpty()|| area.isEmpty()||numOfRoom.isEmpty()||floor.isEmpty()||street.isEmpty()||sunSide.isEmpty()||cornerApar.isEmpty()){
        QMessageBox::warning(this, "Eror!", "Theres` empty line/s");
        return;
     }
     this->apartment = new Apartment( id.toInt(), number.toInt(), floor.toInt(), numOfRoom.toInt(),  area.toInt(), street.toStdString(), sunSide.toStdString(), cornerApar.toStdString());
}

