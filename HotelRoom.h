#pragma once
#include <iostream>
using namespace std;
class HotelRoom
{
	int id, roomNumber, floor, numOfRooms;
	string street, listOfAd;
	float price;
public: 
	void input();
	void output();
};

