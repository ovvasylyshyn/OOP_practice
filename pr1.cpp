#include <iostream>
#include "Apartment.h"
#include "HotelRoom.h"
#include "Vector.h"
#include"Vector.cpp"
#include<vector>
#include <ctime>
#include <algorithm>
#include <list>
#include <map>
using namespace std;
void inputMap(map<int, House*>& houseMap, House& house) {
	house.input();
	houseMap[house.getId()] = &house;
	cout << endl;
}
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
	//Vector<int> intVector;
	//for (int i = 0; i < 20; i++) {
	//	intVector.push_back(i);
	//}
	//cout << "Int Vector: " << endl;
	//for (int i = 0; i < intVector.getSize(); i++) {
	//	cout << intVector[i] << " ";
	//}
	//cout << endl;
	//cout << "Pop back: " << endl;
	//intVector.pop_back();
	//for (int i = 0; i < intVector.getSize(); i++) {
	//	cout << intVector[i] << " ";
	//}
	//cout << endl;
	//Vector<double> doubleVector;
	//for (int i = 0; i < 10; i++) {
	//	doubleVector.push_back(i*0.1);
	//}
	//cout << "Double Vector: " << endl;
	//for (int i = 0; i < doubleVector.getSize(); i++) {
	//	cout << doubleVector[i] << " ";
	//}
	//cout << endl;
	//cout << "Double pop back: " << endl;
	//doubleVector.pop_back();
	//for (int i = 0; i < doubleVector.getSize(); i++) {
	//	cout << doubleVector[i] << " ";
	//}
	//cout << endl;
	//Vector<string> stringVector;
	//stringVector.push_back("Practical");
	//stringVector.push_back("work");
	//stringVector.push_back("#6");
	//cout << "String Vector: " << endl;
	//for (int i = 0; i < stringVector.getSize(); i++) {
	//	cout << stringVector[i] << " ";
	//}
	//cout << endl;
	//cout << "String pop back: " << endl;
	//stringVector.pop_back();
	//for (int i = 0; i < stringVector.getSize(); i++) {
	//	cout << stringVector[i] << " ";
	//}
	//cout << endl << endl;
	//cout << "Class Vector: " << endl;
	//Apartment apartment1;
	//apartment1.input();
	//HotelRoom hotelRoom1;
	//hotelRoom1.input();
	//cout << endl;
	//Vector<Apartment*> doctorVector;
	//doctorVector.push_back(&apartment1);
	//for (int i = 0; i < doctorVector.getSize(); i++) {
	//	Apartment* apartment = doctorVector[i];
	//	apartment->output();
	//}
	//cout << endl;
	//Vector<HotelRoom*> patientVector;
	//patientVector.push_back(&hotelRoom1);
	//for (int i = 0; i < patientVector.getSize(); i++) {
	//	HotelRoom* hotelRoom = patientVector[i];
	//	hotelRoom->output();
	//}

	//srand(time(nullptr));
	//vector<int>vector1(10);
	//for (int i = 0; i < 10; i++) {
	//	vector1[i] = 2 * (rand() / 1000) + 1;

	//}
	//cout << "Fill with index: ";
	//for (int i = 0; i < 10; i++) {
	//	cout << vector1[i] << " ";
	//}
	//cout << endl;
	//vector<int>vector2;
	//for (int i = 0; i < 10; i++) {
	//	int randomNumber = (rand() % 50) * 2;
	//	vector2.push_back(randomNumber);
	//}
	//cout << "Fill with iterator: ";
	//for (vector<int>::iterator item = vector2.begin(); item != vector2.end(); ++item) {
	//	cout << *item << " ";
	//}
	//cout << endl;
	//vector<int>vector3;

	//cout << "Sorted vector 1: ";
	//sort(vector1.begin(), vector1.end(), less<int>());
	//for (const auto& i : vector1) {
	//	cout << i << ' ';
	//}
	//cout << endl;
	//cout << "Sorted vector 2: ";
	//sort(vector2.begin(), vector2.end(), less<int>());
	//for (const auto& i : vector2) {
	//	cout << i << ' ';
	//}
	//cout << endl;
	//merge(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), inserter(vector3, vector3.end()));
	//cout << "Vector3: ";
	//for (const auto& i : vector3) {
	//	cout << i << ' ';
	//}
	//vector<House*> houseVector;
	//int choice;
	//do {
	//	cout << endl;
	//	cout << "\t1) Enter 1 to enter data`s to Apartment: " << endl;
	//	cout << "\t2) Enter 2 to enter data`s to Hotel room: " << endl;
	//	cout << "\t3) Enter 3 to display data about apartment and hotel room " << endl;
	//	cout << "\t4) Exit " << endl;
	//	cout << "\tYour choice: " << endl;
	//	cin >> choice;
	//	Apartment* apartment = 0;
	//	HotelRoom* hotelRoom = 0;
	//	switch (choice) {
	//	case 1: apartment = new Apartment;
	//		apartment->input();
	//		houseVector.push_back(apartment);
	//		cout << endl;
	//		break;
	//	case 2: hotelRoom = new HotelRoom;
	//		hotelRoom->input();
	//		houseVector.push_back(hotelRoom);
	//		cout << endl;
	//		break;
	//	case 3:for (House* house : houseVector)
	//		house->output();
	//		break;
	//	case 4:break;
	//	}
	//} while (choice != 4);
	//vector<House*> newHouseVector;
	//for (auto it = houseVector.begin(); it != houseVector.end();) {
	//	if (dynamic_cast<Apartment*>(*it) != nullptr) {
	//		delete* it;
	//		it = houseVector.erase(it);
	//	}
	//	else {
	//		++it;
	//	}
	//}
	//cout << "Start vector: " << endl;
	//for (House* house : houseVector) {
	//	house->output();
	//}
	//for (auto it = newHouseVector.begin(); it != newHouseVector.end();) {
	//	if (dynamic_cast<HotelRoom*>(*it) != nullptr) {
	//		delete* it;
	//		it = newHouseVector.erase(it);
	//	}
	//	else {
	//		++it;
	//	}
	//}
	//cout << "New vector: " << endl;
	//for (House* house : newHouseVector) {
	//	house->output();
	//}

srand(time(nullptr));
list<int>list1;
for (int i = 0; i < 10; i++) {
	int randomNumber = (rand() % 50) * 2+1;
	list1.push_back(randomNumber);
}
cout << "List 1: ";
for (auto item = list1.begin(); item != list1.end(); ++item) {
	cout << *item << " ";
}
	cout << endl;
	list<int>list2;
	for (int i = 0; i < 10; i++) {
			int randomNumber = (rand() % 50) * 2;
			list2.push_back(randomNumber);
		}
		cout << "List 2: ";
		for (auto item = list2.begin(); item != list2.end(); ++item) {
			cout << *item << " ";
		}
		cout << endl;
		list<int>list3;
		list1.sort();
		list2.sort();
		merge(list1.begin(), list1.end(), list2.begin(), list2.end(), inserter(list3, list3.end()));
		cout << "merged list3: " << endl;
		for (const int& item : list3) {
			cout << item << " ";
		}
		map<int, House*> house;
		Apartment apartment,apartment1;
		HotelRoom hotelRoom,hotelRoom1;
		int choice;
		do {
			cout << endl;
			cout << "Enter 1 to insert data`s;\nEnter 2 to print data`s\nExit\n\tYour choice:";
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1:  
				inputMap(house, apartment);
				inputMap(house, apartment1);
				inputMap(house, hotelRoom);
				inputMap(house, hotelRoom1);
				break;
			case 2:
				int id;
				cout << "Enter object`s id: ";
				cin >> id;
				if (house.find(id) != house.end()) {
					house[id]->output();
				}
				else {
					cout << "There`s no object with id " << id << endl;
				}
					break;
			case 3: break;
			}

		} while (choice != 3);
		
		return 0;
}
