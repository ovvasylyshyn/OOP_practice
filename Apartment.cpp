#include "Apartment.h"
Apartment::Apartment() {
	/*id = 0;
	number = 0;
	floor = 0;
	numOfRooms = 0;*/
	area = 0.0;
	//street = "";
	cornerApar = false;
	sunSide = false;
}
Apartment::Apartment(int id,int number,int floor,int numOfRoom, float area, string street,bool sunSide, bool cornerApar) {
	/*this->id = id;
	this->number = number;
	this->floor = floor;
	this->numOfRooms = numOfRooms;*/
	this->area = area;
	//this->street = street;
	this->cornerApar = cornerApar;
	this->sunSide = sunSide;
}
Apartment::Apartment(const Apartment& other) {
	/*this->id = other.id;
	this->number = other.number;
	this->floor = other.floor;
	this->numOfRooms = other.numOfRooms;*/
	this->area = other.area;
	//this->street = other.street;
	this->cornerApar = other.cornerApar;
	this->sunSide = other.sunSide;
}
Apartment::~Apartment() {}
std::istream& operator>>(std::istream& input, Apartment& obj) {
	House& housePart = obj; 
	input >> housePart; 
	cout << "Enter area: ";
	input >> obj.area;
	cout << "Enter sunny side (Yes or No)";
	string sunSideS;
	input >> sunSideS;
	obj.sunSide = (sunSideS == "Yes");
	cout << "Enter corner apartment (Yes or No)";
	string cornerAparS;
	input >> cornerAparS;
	obj.cornerApar = (cornerAparS == "Yes");
	return input;
}
std::ostream& operator<<(std::ostream& output, Apartment& obj) {
	House& house = obj;
	output<<house;
	output << "area: " << obj.area    << endl;
	output << "Sunny Side: " << (obj.sunSide ? "Yes" : "No") << endl;
	output << "Corner Apartment: " << (obj.cornerApar ? "Yes" : "No") << endl;
	return output;
}
bool Apartment::operator==(const Apartment& apartment) const {
	return area == apartment.area && sunSide == apartment.sunSide && cornerApar == apartment.cornerApar;
}
void Apartment::input() {
	House::input();
	cout << "Enter area: ";
	cin >> area;
	cout << "Enter sunny side (Yes or No)";
	string sunSideS;
	cin>> sunSideS;
	sunSide = (sunSideS == "Yes");
	cout << "Enter corner apartment (Yes or No)";
	string cornerAparS;
	cin >> cornerAparS;
	cornerApar = (cornerAparS == "Yes");
}
void Apartment::output() {
	House::output();
	cout << "area: " << area << endl;
	cout << "Sunny Side: " << (sunSide ? "Yes" : "No") << endl;
	cout << "Corner Apartment: " << (cornerApar ? "Yes" : "No") << endl;
}