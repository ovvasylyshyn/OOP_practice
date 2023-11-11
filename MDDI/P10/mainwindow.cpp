#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>
#include"createapartment.h"
#include "outputapartment.h"
#include"createhotelroom.h"
#include "outputhotelroom.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->outputApartment = new OutputApartment;
    this->outputApartment->setWindowTitle("Output apartment");
    this->outputHotelRoom = new OutputHotelRoom;
    this->outputHotelRoom->setWindowTitle("Output Hotel room");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CreateAPb_clicked()
{
    CreateApartment createApartment;
    createApartment.setWindowTitle("create apartment");
    createApartment.setModal(true);
    connect(&createApartment, &CreateApartment::created, this, &MainWindow::addApartment);
    connect(this,&MainWindow::addedApartment, this->outputApartment, &OutputApartment::updateList);
    createApartment.exec();
}

void MainWindow::on_OutputAPb_clicked()
{
     this->outputApartment->show();
}

void MainWindow::addApartment(Apartment *apartment)
{
     apartments.append(apartment);
     emit addedApartment(this->apartments);
}

void MainWindow::on_ExitPb_clicked()
{
     QApplication::exit();
}


void MainWindow::on_CreateHPb_clicked()
{
    CreateHotelRoom  createHotelRoom;
     createHotelRoom.setWindowTitle("create hoel room");
     createHotelRoom.setModal(true);
     connect(&createHotelRoom, &CreateHotelRoom::created, this, &MainWindow::addHotelRoom);
     connect(this,&MainWindow::addedHotelRoom, this->outputHotelRoom, &OutputHotelRoom::updateList);
     createHotelRoom.exec();
}

void MainWindow::addHotelRoom(HotelRoom *hotelRoom)
{
     hotelRooms.append(hotelRoom);
     emit addedHotelRoom(this->hotelRooms);
}


void MainWindow::on_OutputHPb_clicked()
{
  this->outputHotelRoom->show();
}

