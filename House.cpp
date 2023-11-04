
#include "House.h"
istream& operator>>(std::istream& input, House& obj) {
	cout << "Enter id: ";
	input >> obj.id;
	cout << "Enter number: ";
	input >> obj.number;
	cout << "Enter number of rooms: ";
	input >> obj.numOfRoom;
	cout << "Enter floor: ";
	input >> obj.floor;
	cout << "Enter street: ";
	input >> obj.street;
	return input;
}
ostream& operator<<(std::ostream& output, House& obj) {
	output << "id: " << obj.id << endl;
	output << "number: " << obj.number << endl;
	output << "Number of rooms: " << obj.numOfRoom << endl;
	output << "floor: " << obj.floor << endl;
	output << "Street: " << obj.street << endl;
	return output;
}
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
int House::getId()const
{
	return id;
}