#include <iostream>
#include "Apartment.h"
#include "HotelRoom.h"
#include "Vector.h"
#include"Vector.cpp"
using namespace std;
int main() {
	//int choice1;
	//cout << "Choose: 1)Enter 1 to do practical work #4\n2)Enter 2 to do practical work #5\n3)exit " << endl;
	//cin >> choice1;
	//if (choice1 == 1) {
	//	Apartment object1, object2;
	//	cin >> object1 >> object2;
	//	cout << "------------" << endl;
	//	cout << "Apartment 1: " << endl << object1 << endl << "Apartment 2: " << endl << object2 << endl;
	//	HotelRoom hotelRoom, hotelRoom2;
	//	cin >> hotelRoom >> hotelRoom2;
	//	cout << "----------" << endl;
	//	cout << "hotel room 1: " << endl << hotelRoom << endl << "Hotel room 2: " << endl << hotelRoom2 << endl;
	//	cout << "----------" << endl;
	//	if (object1 == object2) {
	//		cout << "object1 and object2 equal " << endl;
	//	}
	//	else {
	//		cout << "object1 and object2 aren`t equal." << endl;
	//	}
	//	if (hotelRoom == hotelRoom2) {
	//		cout << "hotel room1 = hotel room2" << endl;
	//	}
	//	else cout << "hotel room1 != hotel room2" << endl;
	//}
	//else if (choice1 == 2) {
	//	House* house[2];
	//	int choice;
	//	for (int i = 0; i < 2; i++) {
	//		cout << "Create:\n 1)Apartment \n 2)Hotel room\n Your choice: " << endl;
	//		cin >> choice;
	//		if (choice == 1) {
	//			house[i] = new Apartment();
	//		}
	//		else if (choice == 2) {
	//			house[i] = new HotelRoom();
	//		}
	//		else {
	//			cout << "Wrong number. Try again!" << endl;
	//			i--;
	//		}
	//		house[i]->input();
	//	}
	//	for (int i = 0; i < 5; i++) {
	//		cout << "--------------------------------------------" << endl;
	//		house[i]->output();
	//	}
	//}
	//else if (choice1 == 3)exit(0);
	//else cout << "Wrong number! " << endl;
	Vector<int> intVector;
	for (int i = 0; i < 20; i++) {
		intVector.push_back(i);
	}
	cout << "Int Vector: " << endl;
	for (int i = 0; i < intVector.getSize(); i++) {
		cout << intVector[i] << " ";
	}
	cout << endl;
	cout << "Pop back: " << endl;
	intVector.pop_back();
	for (int i = 0; i < intVector.getSize(); i++) {
		cout << intVector[i] << " ";
	}
	cout << endl;
	Vector<double> doubleVector;
	for (int i = 0; i < 10; i++) {
		doubleVector.push_back(i*0.1);
	}
	cout << "Double Vector: " << endl;
	for (int i = 0; i < doubleVector.getSize(); i++) {
		cout << doubleVector[i] << " ";
	}
	cout << endl;
	cout << "Double pop back: " << endl;
	doubleVector.pop_back();
	for (int i = 0; i < doubleVector.getSize(); i++) {
		cout << doubleVector[i] << " ";
	}
	cout << endl;
	Vector<string> stringVector;
	stringVector.push_back("Practical");
	stringVector.push_back("work");
	stringVector.push_back("#6");
	cout << "String Vector: " << endl;
	for (int i = 0; i < stringVector.getSize(); i++) {
		cout << stringVector[i] << " ";
	}
	cout << endl;
	cout << "String pop back: " << endl;
	stringVector.pop_back();
	for (int i = 0; i < stringVector.getSize(); i++) {
		cout << stringVector[i] << " ";
	}
	cout << endl << endl;
	cout << "Class Vector: " << endl;
	Apartment apartment1;
	apartment1.input();
	HotelRoom hotelRoom1;
	hotelRoom1.input();
	cout << endl;
	Vector<Apartment*> doctorVector;
	doctorVector.push_back(&apartment1);
	for (int i = 0; i < doctorVector.getSize(); i++) {
		Apartment* apartment = doctorVector[i];
		apartment->output();
	}
	cout << endl;
	Vector<HotelRoom*> patientVector;
	patientVector.push_back(&hotelRoom1);
	for (int i = 0; i < patientVector.getSize(); i++) {
		HotelRoom* hotelRoom = patientVector[i];
		hotelRoom->output();
	}
	return 0;
}
