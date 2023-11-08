#include "Apartment.h"
int Apartment::getId()const {
    return id;
}
int Apartment:: getNumber()const {
    return number;
}
int Apartment:: getNumOfRoom()const {
    return numOfRoom;
}
int Apartment::getFloor()const {
    return floor;
}
int Apartment:: getArea()const {
    return area;
}
string Apartment::getStreet()const {
    return street;
}
string Apartment::getSunSide()const {
    return sunSide;
}
string Apartment::getCornerApar()const {
    return cornerApar;
}
Apartment::Apartment() {
    id = 0;
    number = 0;
    floor = 0;
    numOfRoom = 0;
	area = 0.0;
    street = "";
    cornerApar ="";
    sunSide ="" ;
}
Apartment::Apartment(int id,int number,int floor,int numOfRoom, int area, string street,string sunSide, string cornerApar):
    id(id),number(number),floor(floor),numOfRoom(numOfRoom),area(area),street(street),sunSide(sunSide),cornerApar(cornerApar)
{

}
Apartment::Apartment(const Apartment& other) {
    this->id = other.id;
	this->number = other.number;
	this->floor = other.floor;
    this->numOfRoom = other.numOfRoom;
	this->area = other.area;
    this->street = other.street;
	this->cornerApar = other.cornerApar;
	this->sunSide = other.sunSide;
}
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
void Apartment::input() {
//	House::input();
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter number: ";
    cin >>number;
    cout << "Enter number of rooms: ";
    cin>>numOfRoom;
    cout << "Enter floor: ";
    cin >>floor;
    cout << "Enter street: ";
    cin >>street;
	cout << "Enter area: ";
	cin >> area;
	cout << "Enter sunny side (Yes or No)";
    cin>> sunSide;
    cout << "Enter corner apartment (Yes or No)";
    cin >> cornerApar;
}
void Apartment::output() {
    //House::output();
    cout << "id: " <<id << endl;
    cout << "number: " << number << endl;
    cout << "Number of rooms: " <<numOfRoom << endl;
    cout << "floor: " << floor << endl;
    cout << "Street: " <<street << endl;
	cout << "area: " << area << endl;
    cout << "Sunny Side: " << sunSide<< endl;
    cout << "Corner Apartment: " << cornerApar  << endl;
}
//int Apartment::getId() { return House::getId(); }
