#pragma once
#include <string>
using namespace std;

//Declaration of Animal base class
class Animal{
private:
	double weight;
	string color;

public: 
	Animal();
	Animal(double, string);
	virtual string move() = 0;
	string eat();
	double GetWeight();
	void SetWeight(double);
	string GetColor();
	void SetColor(string);
};