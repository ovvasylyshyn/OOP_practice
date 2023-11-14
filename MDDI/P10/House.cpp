
#include "House.h"
//istream& operator>>(std::istream& input, House& obj) {
//	cout << "Enter id: ";
//	input >> obj.id;
//	cout << "Enter number: ";
//	input >> obj.number;
//	cout << "Enter number of rooms: ";
//	input >> obj.numOfRoom;
//	cout << "Enter floor: ";
//	input >> obj.floor;
//	cout << "Enter street: ";
//	input >> obj.street;
//	return input;
//}
//ostream& operator<<(std::ostream& output, House& obj) {
//	output << "id: " << obj.id << endl;
//	output << "number: " << obj.number << endl;
//	output << "Number of rooms: " << obj.numOfRoom << endl;
//	output << "floor: " << obj.floor << endl;
//	output << "Street: " << obj.street << endl;
//	return output;
//}
House::House() : id(0), number(0), floor(0), numOfRoom(0), street(0) {}

House::House(const string& id,int number, int floor, int  numOfRoom,  string street) {
    this->id = id;
    this->number = number;
    this->floor = floor;
    this->numOfRoom = numOfRoom;
    this->street = street;
}

House::House(const House& other)
    : id(other.id), number(other.number), floor(other.floor), numOfRoom(other.numOfRoom), street(other.street) {}

House::~House() {

}

string House::getId()const { return id; }
int House::getNumber()const { return number; }
int House::getFloor()const { return floor; }
int House::getNumOfRoom()const { return numOfRoom; }
string House::getStreet()const { return street; }
void House::input() {
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
}
void House::output() {
	cout << "id: " <<id << endl;
	cout << "number: " << number << endl;
	cout << "Number of rooms: " <<numOfRoom << endl;
	cout << "floor: " << floor << endl;
	cout << "Street: " <<street << endl;
}

