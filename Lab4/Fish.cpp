#include "Fish.h"

//Fish Derived class Implementation
Fish::Fish() {
	SetFishType("");
}

Fish::Fish(string g) {
	SetFishType(g);
}

void Fish::SetFishType(string x) {

	Fish_Type = x;

}

string Fish::GetFishType() {

	return Fish_Type;

}

string Fish::eat() {

	return "Yummy Fish Food";

}

string Fish::move() {

	return "Just Keep Swimming.";

}

Fish::~Fish(){
	
}