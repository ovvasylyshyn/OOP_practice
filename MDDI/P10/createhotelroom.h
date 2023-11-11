#ifndef CREATEHOTELROOM_H
#define CREATEHOTELROOM_H

#include <QDialog>
#include "HotelRoom.h"

namespace Ui {
class CreateHotelRoom;
}

class CreateHotelRoom : public QDialog
{
    Q_OBJECT
signals:
    void created(HotelRoom* hotelRoom);
public:
    explicit CreateHotelRoom(QWidget *parent = nullptr);
    ~CreateHotelRoom();

private slots:
    void on_CreateHotelRoomPB_clicked();

private:
    Ui::CreateHotelRoom *ui;
};

#endif // CREATEHOTELROOM_H
