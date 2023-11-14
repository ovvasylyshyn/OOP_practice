#ifndef OUTPUTHOTELROOM_H
#define OUTPUTHOTELROOM_H

#include <QDialog>
#include "HotelRoom.h"
#include "sqlitedbmanager.h"
namespace Ui {
class OutputHotelRoom;
}

class OutputHotelRoom : public QDialog
{
    Q_OBJECT

public slots:
    void updateList(SqliteDBManager* sqliteDBManager);
public:
    explicit OutputHotelRoom(QWidget *parent = nullptr);
    ~OutputHotelRoom();

private:
    Ui::OutputHotelRoom *ui;
};

#endif // OUTPUTHOTELROOM_H
