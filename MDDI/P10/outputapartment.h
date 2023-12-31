#ifndef OUTPUTAPARTMENT_H
#define OUTPUTAPARTMENT_H

#include <QDialog>
#include "Apartment.h"
#include "House.h"
#include "sqlitedbmanager.h"

namespace Ui {
class OutputApartment;
}

class OutputApartment : public QDialog
{
    Q_OBJECT
public slots:
    void updateList(SqliteDBManager* sqliteDBManager);
public:
    explicit OutputApartment(QWidget *parent = nullptr);
    ~OutputApartment();

private:
    Ui::OutputApartment *ui;

};

#endif // OUTPUTAPARTMENT_H
