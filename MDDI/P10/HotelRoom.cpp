#include "HotelRoom.h"
#include "House.h"
//istream& operator>>(std::istream& input, HotelRoom& obj) {
//	House& housePart = obj;
//	input >> housePart;
//	cout << "Enter price per day: ";
//	input >> obj.price;
//	cout << "Enter additional service: ";
//	cin >> obj.listOfAd;
//	return input;
//}
//ostream& operator<<(std::ostream& output, HotelRoom& obj) {
//	House& house = obj;
//	output << house;
//	output << "Price per day: " << obj.price <<" grn." << endl;
//	output << "Additional service: " << obj.listOfAd<< endl;
//	return output;
//}
//bool HotelRoom::operator==(const HotelRoom& hotelRoom) const {
//	return listOfAd == hotelRoom.listOfAd && price == hotelRoom.price;
//}
string HotelRoom::getId() { return House::getId(); }
int HotelRoom::getNumber() { return House::getNumber(); }
int HotelRoom::getFloor() { return House:: getFloor(); }
int HotelRoom::getNumOfRoom() { return House:: getNumOfRoom(); }
string HotelRoom::getStreet() { return House:: getStreet(); }
string HotelRoom::getAdd(){return listOfAd; }
int HotelRoom::getPrice() { return price; }
HotelRoom::HotelRoom() {
    //    id = 0;
    //    number = 0;
    //    floor = 0;
    //    numOfRoom = 0;
    price = 0;
    // street = "";
    listOfAd ="";
   // sunSide ="" ;
}
HotelRoom::HotelRoom(const string& id,int number,int floor,int numOfRoom,  string street,int price, string listOfAd):
    House(id,number,floor,numOfRoom,street),price(price),listOfAd(listOfAd)
{

}

HotelRoom::HotelRoom(const HotelRoom& other) : House(other), price(other.price),listOfAd(other.listOfAd) {}
HotelRoom::~HotelRoom(){}
void HotelRoom::input() {
	House::input();
	cout << "Enter price per day: ";
	cin>>price;
	cout << "Enter additional service: ";
	cin >> listOfAd;
}
void HotelRoom::output() {
	House::output();
	cout<< "Price per day: " <<price << " hrn." << endl;
	cout << "Additional service: " <<listOfAd << endl;
}
string HotelRoom::toString() {
    return listOfAd;
}
