#pragma once
#include <iostream>
using namespace std;
class House
{
	int id,number, floor, numOfRoom;
	string street;
public: 
	virtual string toString()=0;
	friend istream& operator>>(std::istream& input, House& obj);
	friend ostream& operator<<(std::ostream& output, House& obj);
};

