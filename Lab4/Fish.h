#pragma once
#include "Animal.h"

//Declaring Derived Class Fish
class Fish :public Animal {
public:
	string move() override;
	string eat();
	string GetFishType();
	void SetFishType(string);
	Fish();
	Fish(string);
	virtual ~Fish();

private:
	string Fish_Type;
};
