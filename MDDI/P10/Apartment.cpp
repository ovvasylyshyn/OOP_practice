#include "Apartment.h"
#include "House.h"
Apartment::Apartment() {
//    id = 0;
//    number = 0;
//    floor = 0;
//    numOfRoom = 0;
    area = 0;
   // street = "";
    cornerApar ="";
    sunSide ="" ;
}
Apartment::Apartment(const string& id,int number,int floor,int numOfRoom, int area, string street,string sunSide, string cornerApar):
    House(id,number,floor,numOfRoom,street),area(area),sunSide(sunSide),cornerApar(cornerApar)
{

}

Apartment::Apartment(const Apartment& other) : House(other), area(other.area),cornerApar(other.cornerApar),sunSide(other.sunSide) {}

//Apartment::Apartment(const Apartment& other) {
//    this->id = other.id;
//	this->number = other.number;
//	this->floor = other.floor;
//    this->numOfRoom = other.numOfRoom;
//	this->area = other.area;
//    this->street = other.street;
//	this->cornerApar = other.cornerApar;
//	this->sunSide = other.sunSide;
//}
Apartment::~Apartment() {}
//std::istream& operator>>(std::istream& input, Apartment& obj) {
////	House& housePart = obj;
////	input >> housePart;
//	cout << "Enter area: ";
//	input >> obj.area;
//	cout << "Enter sunny side (Yes or No)";
//	string sunSideS;
//	input >> sunSideS;
//	obj.sunSide = (sunSideS == "Yes");
//	cout << "Enter corner apartment (Yes or No)";
//	string cornerAparS;
//	input >> cornerAparS;
//	obj.cornerApar = (cornerAparS == "Yes");
//	return input;
//}
//std::ostream& operator<<(std::ostream& output, Apartment& obj) {
//	House& house = obj;
//	output<<house;
//	output << "area: " << obj.area    << endl;
//	output << "Sunny Side: " << (obj.sunSide ? "Yes" : "No") << endl;
//	output << "Corner Apartment: " << (obj.cornerApar ? "Yes" : "No") << endl;
//	return output;
//}
//bool Apartment::operator==(const Apartment& apartment) const {
//	return area == apartment.area && sunSide == apartment.sunSide && cornerApar == apartment.cornerApar;
//}
string Apartment::getId(){return House::getId();}
int Apartment::getNumber() { return House::getNumber(); }
int Apartment::getFloor() { return House:: getFloor(); }
int Apartment::getNumOfRoom() { return House:: getNumOfRoom(); }
string Apartment::getStreet() { return House:: getStreet(); }
string Apartment::getCornerApar() { return cornerApar; }
string Apartment::getSunSide(){return sunSide; }
int Apartment::getArea() { return area; }
void Apartment::input() {
    House::input();
    cout << "Enter area: ";
    cin >> area;
    cout << "Enter sunny side (Yes or No)";
    cin>> sunSide;
   cout << "Enter corner apartment (Yes or No)";
    cin >> cornerApar;
}
void Apartment::output() {
    House::output();
    cout << "area: " << area << endl;
    cout << "Sunny Side: " << sunSide << endl;
    cout << "Corner Apartment: " << cornerApar << endl;
}
string Apartment::toString() {
    return
        sunSide;
}
//int Apartment::getId() { return House::getId(); }
