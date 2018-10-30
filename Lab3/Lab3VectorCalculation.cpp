#include "Lab3VectorCalculation.h"
#include <math.h>
#include <iostream>
using namespace std;
 
//Class Definition for VectorCalculation methods

//Default Constructor
VectorCalculation::VectorCalculation() {
	float x_component = 0.0;
	float y_component = 0.0;
	double magnitude = 0.0;
	float angle = 0.0;
}

//Constructor for inputted vector values from user
VectorCalculation::VectorCalculation(float x, float y) {
	
	x_component = x;
	y_component = y;
}

//Constructor for angle and magnitude set by user
VectorCalculation::VectorCalculation(double magnitude, float theta) {

	r = magnitude;
	angle = theta;
}

void VectorCalculation::SetXComponent(float x) {

	x_component = x;

}

void VectorCalculation::SetYComponent(float y) {

	y_component = y;
}

void VectorCalculation::SetMagnitude(double magnitude) {
	r = magnitude;
}

void VectorCalculation::SetAngle(float theta) {
	angle = theta;
}

float VectorCalculation::GetXComponent() {
	return x_component;
}

float VectorCalculation::GetYComponent() {
	return y_component;
}

//Function to get magnitude of a vector
double VectorCalculation::Getmagnitude() {
	return r;
}

//Function called to get angle (radians) of a vector
float VectorCalculation::Getangle() {
	return angle;
}

double VectorCalculation::CalculateMagnitude() {
	return sqrt((pow(x_component, 2)) + (pow(y_component, 2)));
}

float VectorCalculation::CalculateAngle() {
	return atan2(y_component, x_component);
}
//overloaded operator for addition, called when addition involves an object of class type
void VectorCalculation::operator+(VectorCalculation& other) {
	x_component = x_component + other.GetXComponent();
	y_component = y_component + other.GetYComponent();
}

//overloaded operator for subtraction, called when subtraction involves an object of class type
void VectorCalculation::operator-(VectorCalculation& other) {
	x_component = x_component - other.GetXComponent();
	y_component = y_component - other.GetYComponent();
}

//overloaded operator for multiplication, called when multiplication involves at least one object of class type 
void VectorCalculation::operator*(float scalar) {
    x_component = x_component * scalar;
	y_component = y_component * scalar;
}

//overloaded operator for division, called when division involves at least one object of class type
void VectorCalculation::operator/(const float divisor) {
	if (divisor != 0) {
		x_component = x_component * (1 / divisor);
		y_component = y_component * (1 / divisor);
	}
}

//overloaded operator for comparison, called when a comparison is used and involves at least one object of class type
bool VectorCalculation::operator==(const VectorCalculation& other) {
	if ((x_component == other.x_component) && (y_component == other.y_component)) {
		return true;
	}else{
		return false;
	}
}

void VectorCalculation::PrintValues(VectorCalculation& Vector) {
	cout << "New x-coordinate of vector: " << Vector.GetXComponent() << endl;
	cout << "New y-coordinate of vector: " << Vector.GetYComponent() << endl;
	cout << "Magnitude of the resultant vector: " << Vector.CalculateMagnitude() << endl;
	cout << "Angle (Radians) of the resultant vector: " << Vector.CalculateAngle() << endl;
}

VectorCalculation::~VectorCalculation() {

}
