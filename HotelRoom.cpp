#include "HotelRoom.h"
#include "House.h"
istream& operator>>(std::istream& input, HotelRoom& obj) {
	House& housePart = obj;
	input >> housePart;
	cout << "Enter price per day: ";
	input >> obj.price;
	cout << "Enter additional service: ";
	cin >> obj.listOfAd;
	return input;
}
ostream& operator<<(std::ostream& output, HotelRoom& obj) {
	House& house = obj;
	output << house;
	output << "Price per day: " << obj.price <<" grn." << endl;
	output << "Additional service: " << obj.listOfAd<< endl;
	return output;
}
bool HotelRoom::operator==(const HotelRoom& hotelRoom) const {
	return listOfAd == hotelRoom.listOfAd && price == hotelRoom.price;
}
string HotelRoom::toString() {
	return "ToString method ";
}
