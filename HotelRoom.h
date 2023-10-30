#pragma once
#include <iostream>
#include "HotelRoom.h"
#include "House.h"
using namespace std;
class HotelRoom : public House
{	string listOfAd;
	float price;
public: 
	friend istream& operator>>(std::istream& input, HotelRoom& obj);
	friend ostream& operator<<(std::ostream& output, HotelRoom& obj);
	bool operator==(const HotelRoom& hotelRoom) const;
	string toString()override;
};

