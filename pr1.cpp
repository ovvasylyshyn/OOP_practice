﻿#include <iostream>
#include "Apartment.h"
using namespace std;
int main() {
	Apartment object1, object2, object3;
	cout << "Enter Apartment`s data: " << endl;
	cin >> object1 >> object2 >> object3;
	cout << "------------" << endl;
	cout << object1 << endl << object2 << endl << object3 << endl;
}