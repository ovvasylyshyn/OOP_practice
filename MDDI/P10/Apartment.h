#pragma once
#include <iostream>
#include "House.h"
using namespace std;
class Apartment: public House {
    int area;
    string sunSide, cornerApar;
   //int id,number, floor, numOfRoom;
public:
    Apartment();
    Apartment(const string& id,int number,int floor,int numOfRoom, int area, string street,string sunSide, string cornerApar);
    Apartment(const Apartment& other);
    ~Apartment();
    friend istream& operator>>(std::istream& input, Apartment& obj);
    friend ostream& operator<<(std::ostream& output, Apartment& obj);
    bool operator==(const Apartment& apartment) const;
    void input() override ;
    void output() override;
    string getId()override ;
    int getNumber()override ;
    int getNumOfRoom()override ;
    int getFloor()override ;
    int getArea() ;
    string getStreet()override ;
    string getSunSide();
    string getCornerApar() ;
    string toString() override;
};
