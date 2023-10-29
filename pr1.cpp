#include <iostream>
#include "Apartment.h"
#include "HotelRoom.h"
using namespace std;
int main() {
    Apartment object1, object2;
    cin >> object1 >> object2;
    cout << "------------" << endl;
    cout << "Apartment 1: "<<endl<< object1 << endl << "Apartment 2: "<<endl<< object2 << endl;
    HotelRoom hotelRoom, hotelRoom2;
    cin >> hotelRoom >> hotelRoom2;
    cout << "----------" << endl;
    cout << "hotel room 1: "<<endl<< hotelRoom << endl << "Hotel room 2: "<<endl<< hotelRoom2 << endl;
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
    return 0;
}