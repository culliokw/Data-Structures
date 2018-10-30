#include "Animal.h"

//Animal class implementation
Animal::Animal() {

	weight = 0.0;
	color = "";

}

Animal::Animal(double x, string y) {

	weight = x;

	color = y;
}

string Animal::eat() {

	return  "Yummy!";
}



double Animal::GetWeight() {

	return weight;

}

void Animal::SetWeight(double x) {

	weight = x;

}

string Animal::GetColor() {

	return color;

}

void Animal::SetColor(string y) {

	color = y;

}


