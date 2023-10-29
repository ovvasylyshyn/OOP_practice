#pragma once
#include <iostream>
#include "Apartment.h"
#include"House.h"
using namespace std;
class Apartment : public House{
	float area;
	bool sunSide, cornerApar;
public:
	Apartment();
	Apartment(int id, int number, int floor, int numOfRooms, float area, string street, bool sunSide, bool cornerApar);
	Apartment(const Apartment&);
	~Apartment();
	friend istream& operator>>(std::istream& input, Apartment& obj);
	friend ostream& operator<<(std::ostream& output, Apartment& obj);
	bool operator==(const Apartment& apartment) const;
};
