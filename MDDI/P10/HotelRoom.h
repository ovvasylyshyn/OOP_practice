#pragma once
#include <iostream>
#include "HotelRoom.h"
#include "House.h"
using namespace std;
class HotelRoom : public House
{	string listOfAd;
    int price;
public:
    HotelRoom();
    HotelRoom(const string& id,int number,int floor,int numOfRoom, string street,int price, string listOfAd);
    HotelRoom(const HotelRoom& other);
    ~HotelRoom();
	friend istream& operator>>(std::istream& input, HotelRoom& obj);
	friend ostream& operator<<(std::ostream& output, HotelRoom& obj);
	bool operator==(const HotelRoom& hotelRoom) const;
     void input() override ;
     void output() override;
     string getId()override ;
     int getNumber()override ;
     int getNumOfRoom()override ;
     int getFloor()override ;
     int getPrice() ;
     string getStreet()override ;
     string getAdd();
     string toString() override;
};

