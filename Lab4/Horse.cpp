#include "Horse.h"

//Horse Derived class implementation
Horse::Horse() {
	SetShowHorseStatus(0);
}

Horse::Horse(bool g) {
	SetShowHorseStatus(g);
}

string Horse::eat() {

	return "Yummy grass.";

}

string Horse::move() {

	return "Walk, Trot, Canter, Gallop.";

}

bool Horse::GetShowHorseStatus() {

	return Show_Horse;

}

void Horse::SetShowHorseStatus(bool x) {

	Show_Horse = x;

}

Horse::~Horse() {
	
}
