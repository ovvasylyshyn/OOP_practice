#include "createapartment.h"
#include "ui_createapartment.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDateTime>

CreateApartment::CreateApartment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateApartment)
{
    ui->setupUi(this);
}

CreateApartment::~CreateApartment()
{
    delete ui;
}

void CreateApartment::on_pushButton_clicked()
{
    if(ui->IdLE->text().isEmpty()||ui->NumberLE->text().isEmpty()
        ||ui->NumOfRoomLE->text().isEmpty()||ui->AreaLE->text().isEmpty()
        ||ui->StreetLE->text().isEmpty()||ui->FloorLE->text().isEmpty()
        ||ui->CornerLE->text().isEmpty()||ui->SunLE->text().isEmpty())
    {
        QFile file("logfile.txt");
            if (file.open(QIODevice::Append)) {
                QTextStream stream(&file);
                stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " + "Can`t write data.";
            }
            file.close();qWarning() << "You`ve not fill all fiels";
               QMessageBox::critical(this, "Warning!", "You have a free fields!");
        }
    else{
         Apartment *apartment=new Apartment(ui->IdLE->text().toStdString(),ui->NumberLE->text().toInt(),
        ui->FloorLE->text().toInt(),ui->NumOfRoomLE->text().toInt(),
        ui->AreaLE->text().toInt(),ui->StreetLE->text().toStdString(),
        ui->SunLE->text().toStdString(),ui->CornerLE->text().toStdString());
         emit created (apartment);
         this->hide();
         QMessageBox::about(this, "created", "created");
    }
}



