#include "HotelRoom.h"
void HotelRoom::input() {
	cout << "Enter id: ";
	cin >> id;
	cout << "Enter room number: ";
	cin >> roomNumber;
	cout << "Enter floor: ";
	cin >> floor; 
	cout << "Enter number of rooms: ";
	cin >> numOfRooms;
	cout << "Enter street: ";
	cin >> street; 
	cout << "Enter additional service: ";
	cin >> listOfAd;
	cout << "Enter price per day: ";
	cin >> price; 
}
void HotelRoom::output() {
	cout << "id: " << id << endl << "room number: " << roomNumber << endl << "floor: " << floor << endl << "number of rooms: " << numOfRooms << endl << "Street: " << street << endl << "Additional services: " << listOfAd << endl << "price per day: " << price << endl;
}