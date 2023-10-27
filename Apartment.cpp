#include "Apartment.h"
Apartment::Apartment() {
	id = 0;
	number = 0;
	floor = 0;
	numOfRooms = 0;
	area = 0.0;
	street = "";
	cornerApar = false;
	sunSide = false;
}
Apartment::Apartment(int id, int number, int floor, int numOfRooms, float area, string street, bool sunSide, bool cornerApar) {
	this->id = id;
	this->number = number;
	this->floor = floor;
	this->numOfRooms = numOfRooms;
	this->area = area;
	this->street = street;
	this->cornerApar = cornerApar;
	this->sunSide = sunSide;
}
Apartment::Apartment(const Apartment& other) {
	this->id = other.id;
	this->number = other.number;
	this->floor = other.floor;
	this->numOfRooms = other.numOfRooms;
	this->area = other.area;
	this->street = other.street;
	this->cornerApar = other.cornerApar;
	this->sunSide = other.sunSide;
}