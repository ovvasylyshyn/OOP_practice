#include "outputhotelroom.h"
#include "ui_outputhotelroom.h"

OutputHotelRoom::OutputHotelRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputHotelRoom)
{
    ui->setupUi(this);
}

OutputHotelRoom::~OutputHotelRoom()
{
    delete ui;
}

void OutputHotelRoom::updateList(QList<HotelRoom*> hotelRooms){
    ui->HotelRoomLW->clear();
    for (int i = 0; i < hotelRooms.size(); i++) {
        ui->HotelRoomLW->addItem("Hotel Room: " + QString::number(i + 1));
        ui->HotelRoomLW->addItem("Id: "+QString::fromStdString(hotelRooms[i]->getId()));
        ui->HotelRoomLW->addItem("Number: "+QString::number(hotelRooms[i]->getNumber()));
        ui->HotelRoomLW->addItem("Number of room: "+QString::number(hotelRooms[i]->getNumOfRoom()));
        ui->HotelRoomLW->addItem("Price: "+QString::number(hotelRooms[i]->getPrice()));
        ui->HotelRoomLW->addItem("Street: "+QString::fromStdString(hotelRooms[i]->getStreet()));
        ui->HotelRoomLW->addItem("Floor: "+QString::number(hotelRooms[i]->getFloor()));
        ui->HotelRoomLW->addItem("Additional service: "+QString::fromStdString(hotelRooms[i]->getAdd()));
        ui->HotelRoomLW->addItem("");
    }
}
