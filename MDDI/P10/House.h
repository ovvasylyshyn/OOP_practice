#pragma once
#include <iostream>
using namespace std;
class House
{	int number, floor, numOfRoom;
    string street,id;
public:
    House();
    House(const string& id,int number, int floor, int  numOfRoom,  string street);
    House(const House& other);
    virtual ~House();
    virtual string getStreet ()const;
    virtual int getNumber ()const;
    virtual int getFloor ()const;
    virtual int getNumOfRoom ()const;
    virtual string getId ()const;
//	friend istream& operator>>(std::istream& input, House& obj);
//	friend ostream& operator<<(std::ostream& output, House& obj);
	virtual void input();
	virtual void output();
 virtual string toString() = 0;
    //int getId() const;
};

