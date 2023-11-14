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
//    string getId() const override ;
//    int getNumber()const override ;
//    int getNumOfRoom()const override ;
//    int getFloor() const override ;
    int getArea() const ;
   // string getStreet()const override ;
    string getSunSide() const;
    string getCornerApar() const;
    string toString()  override;
};
