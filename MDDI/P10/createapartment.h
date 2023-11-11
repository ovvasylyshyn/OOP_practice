#ifndef CREATEAPARTMENT_H
#define CREATEAPARTMENT_H

#include <QDialog>
#include "Apartment.h"

namespace Ui {
class CreateApartment;
}

class CreateApartment : public QDialog
{
    Q_OBJECT
signals:
    void created(Apartment* apartment);

public:
    explicit CreateApartment(QWidget *parent = nullptr);
    ~CreateApartment();

private slots:
    void on_pushButton_clicked();


private:
    Ui::CreateApartment *ui;
};

#endif // CREATEAPARTMENT_H
