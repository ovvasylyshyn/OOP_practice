/********************************************************************************
** Form generated from reading UI file 'outputapartment.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTAPARTMENT_H
#define UI_OUTPUTAPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputApartment
{
public:
    QGridLayout *gridLayout;
    QListWidget *ApartmentLW;

    void setupUi(QDialog *OutputApartment)
    {
        if (OutputApartment->objectName().isEmpty())
            OutputApartment->setObjectName("OutputApartment");
        OutputApartment->resize(414, 322);
        gridLayout = new QGridLayout(OutputApartment);
        gridLayout->setObjectName("gridLayout");
        ApartmentLW = new QListWidget(OutputApartment);
        ApartmentLW->setObjectName("ApartmentLW");

        gridLayout->addWidget(ApartmentLW, 0, 0, 1, 1);


        retranslateUi(OutputApartment);

        QMetaObject::connectSlotsByName(OutputApartment);
    } // setupUi

    void retranslateUi(QDialog *OutputApartment)
    {
        OutputApartment->setWindowTitle(QCoreApplication::translate("OutputApartment", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutputApartment: public Ui_OutputApartment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTAPARTMENT_H
