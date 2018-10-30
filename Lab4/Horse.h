#pragma once
#include "Animal.h"

//Declaring Horse Derived Class
class Horse:public Animal {
public:
	string eat();
	string move() override;
	bool GetShowHorseStatus();
	void SetShowHorseStatus(bool);
	Horse();
	Horse(bool);
	virtual ~Horse();
private:
	bool Show_Horse;
};
