/********************************************************************************
** Form generated from reading UI file 'outputhotelroom.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTHOTELROOM_H
#define UI_OUTPUTHOTELROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputHotelRoom
{
public:
    QGridLayout *gridLayout;
    QListWidget *HotelRoomLW;

    void setupUi(QDialog *OutputHotelRoom)
    {
        if (OutputHotelRoom->objectName().isEmpty())
            OutputHotelRoom->setObjectName("OutputHotelRoom");
        OutputHotelRoom->resize(420, 285);
        gridLayout = new QGridLayout(OutputHotelRoom);
        gridLayout->setObjectName("gridLayout");
        HotelRoomLW = new QListWidget(OutputHotelRoom);
        HotelRoomLW->setObjectName("HotelRoomLW");

        gridLayout->addWidget(HotelRoomLW, 0, 0, 1, 1);


        retranslateUi(OutputHotelRoom);

        QMetaObject::connectSlotsByName(OutputHotelRoom);
    } // setupUi

    void retranslateUi(QDialog *OutputHotelRoom)
    {
        OutputHotelRoom->setWindowTitle(QCoreApplication::translate("OutputHotelRoom", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutputHotelRoom: public Ui_OutputHotelRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTHOTELROOM_H
