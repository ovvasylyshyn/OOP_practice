#include <iostream>
#include "Apartment.h"
#include "HotelRoom.h"
using namespace std;

int main() {
	int choice1;
	cout << "Choose: 1)Enter 1 to do practical work #4\n2)Enter 2 to do practical work #5\n3)exit " << endl;
	cin >> choice1;
	if (choice1 == 1) {
		Apartment object1, object2;
		cin >> object1 >> object2;
		cout << "------------" << endl;
		cout << "Apartment 1: " << endl << object1 << endl << "Apartment 2: " << endl << object2 << endl;
		HotelRoom hotelRoom, hotelRoom2;
		cin >> hotelRoom >> hotelRoom2;
		cout << "----------" << endl;
		cout << "hotel room 1: " << endl << hotelRoom << endl << "Hotel room 2: " << endl << hotelRoom2 << endl;
		cout << "----------" << endl;
		if (object1 == object2) {
			cout << "object1 and object2 equal " << endl;
		}
		else {
			cout << "object1 and object2 aren`t equal." << endl;
		}
		if (hotelRoom == hotelRoom2) {
			cout << "hotel room1 = hotel room2" << endl;
		}
		else cout << "hotel room1 != hotel room2" << endl;
	}
	else if (choice1 == 2) {
		House* house[2];
		int choice;
		for (int i = 0; i < 2; i++) {
			cout << "Create:\n 1)Apartment \n 2)Hotel room\n Your choice: " << endl;
			cin >> choice;
			if (choice == 1) {
				house[i] = new Apartment();
			}
			else if (choice == 2) {
				house[i] = new HotelRoom();
			}
			else {
				cout << "Wrong number. Try again!" << endl;
				i--;
			}
			house[i]->input();
		}
		for (int i = 0; i < 5; i++) {
			cout << "--------------------------------------------" << endl;
			house[i]->output();
		}
	}
	else if (choice1 == 3)exit(0);
	else cout << "Wrong number! " << endl;
	return 0;
}
