#include <iostream>
#include "Apartment.h"
using namespace std;
int main() {
	Apartment object1, object2, object3;
	cout << "Enter Apartment`s data: " << endl;
	cin >> object1 >> object2 >> object3;
	cout << "------------" << endl;
	cout << object1 << endl << object2 << endl << object3 << endl;
    if (object1 == object2) {
        cout << "object1 and object2 equal " << endl;
    }
    else {
        cout << "object1 and object2 aren`t equal." << endl;
    }
    if (object2 == object3) {
        cout << "object2 and object3 equal." << endl;
    }
    else {
        cout << "object2 and object3 aren`t equal." << endl;
    }
    if (object1 == object3) {
        cout << "object1 and object3 equal." << endl;
    }
    else {
        cout << "object1 and object3 aren`t equal." << endl;
    }
}