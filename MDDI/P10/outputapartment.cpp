#include "outputapartment.h"
#include "ui_outputapartment.h"
#include"Apartment.h"

OutputApartment::OutputApartment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputApartment)
{
    ui->setupUi(this);
}

OutputApartment::~OutputApartment()
{
    delete ui;
}

void OutputApartment::updateList(QList<Apartment*> apartments)
{
    ui->ApartmentLW->clear();
    for (int x = 0; x < apartments.size(); x++) {
        ui->ApartmentLW->addItem("Apartment: " + QString::number(x + 1));
        ui->ApartmentLW->addItem("Id: "+QString::fromStdString(apartments[x]->getId()));
        ui->ApartmentLW->addItem("Number: "+QString::number(apartments[x]->getNumber()));
        ui->ApartmentLW->addItem("Number of room: "+QString::number(apartments[x]->getNumOfRoom()));
        ui->ApartmentLW->addItem("Area: "+QString::number(apartments[x]->getArea()));
        ui->ApartmentLW->addItem("Street: "+QString::fromStdString(apartments[x]->getStreet()));
        ui->ApartmentLW->addItem("Floor: "+QString::number(apartments[x]->getFloor()));
        ui->ApartmentLW->addItem("Corner apartment: "+QString::fromStdString(apartments[x]->getCornerApar()));
        ui->ApartmentLW->addItem("Sun side: "+QString::fromStdString(apartments[x]->getSunSide()));
        ui->ApartmentLW->addItem("");
    }
}
