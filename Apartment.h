
#pragma once
#include <iostream>
using namespace std;
class Apartment {
	int id, number, floor, numOfRooms;
	float area;
	string street;
	bool sunSide, cornerApar;
public:
	Apartment();
	Apartment(int id, int number, int floor, int numOfRooms, float area, string street, bool sunSide, bool cornerApar);
	Apartment(const Apartment&);
	~Apartment();
	friend istream& operator>>(std::istream& input, Apartment& obj);


};