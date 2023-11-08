#pragma once
#include <iostream>
using namespace std;
class Apartment {
    int area;
    string sunSide, cornerApar, street;
    int id,number, floor, numOfRoom;
public:
	Apartment();
    Apartment(int id,int number,int floor,int numOfRoom, int area, string street,string sunSide, string cornerApar);
	Apartment(const Apartment&);
	~Apartment();
	friend istream& operator>>(std::istream& input, Apartment& obj);
	friend ostream& operator<<(std::ostream& output, Apartment& obj);
	bool operator==(const Apartment& apartment) const;
    void input() ;
    void output();
    int getId()const ;
    int getNumber()const ;
    int getNumOfRoom()const ;
    int getFloor()const ;
    int getArea()const ;
    string getStreet()const ;
    string getSunSide()const ;
    string getCornerApar()const ;
};
