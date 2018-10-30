#include <iostream>
#include "Lab3VectorCalculation.h"

using namespace std;


int main() {
	//Initialize inputted variables to assign to class members
	float coordinate1;
	float coordinate2;
	char operation;
	float scalar_value;
	bool Equal_Vectors;
	bool Execute = 1;
	
	//Declare object and receive x & y components of vector
	VectorCalculation UserVector;
	cout << "Enter the x-coordinate of your vector: ";
	cin >> coordinate1;
	cout << "Enter the y-coordinate of your vector: ";
	cin >> coordinate2;
	UserVector.SetXComponent(coordinate1);
	UserVector.SetYComponent(coordinate2);
	//Begin loop to ask user what operation is intended
	while (Execute)
	{
		cout << "What operation do you want to perform (Choose an operation  +, -, *, /, =): ";
		cin >> operation;
		//if-elseif statements to determine what operation needs to be done based on user's input
		if (operation == '+') {
			cout << "What would you like to add to the x-coordinate: ";
			cin >> coordinate1;
			cout << "What would you like to add to the y-coordinate: ";
			cin >> coordinate2;
			VectorCalculation NewVector;
			NewVector.SetXComponent(coordinate1);
			NewVector.SetYComponent(coordinate2);
			//Calls overloaded operator+ to add the x & y components of each vector
			UserVector + NewVector;
			//Calls member function to return x, y coordinates of resulting vector, magnitude of resulting vector, and angle of resulting vector
			UserVector.PrintValues(UserVector);
		}
		else if (operation == '-') {
			cout << "What number would you like to subtract from the x-coordinate of your vector: ";
			cin >> coordinate1;
			cout << "What number would you like to subtract from the x-coordinate of your vector: ";
			cin >> coordinate2;
			VectorCalculation NewVector;
			NewVector.SetXComponent(coordinate1);
			NewVector.SetYComponent(coordinate2);
			//Calls overloaded operator- to subtract the inputted x & y components of new vector from originally set vector
			UserVector - NewVector;
			//Calls member function to return x, y coordinates of resulting vector, magnitude of resulting vector, and angle of resulting vector
			UserVector.PrintValues(UserVector);
		}
		else if (operation == '*') {
			cout << "What scalar would you like to multiply your vector by: ";
			cin >> scalar_value;
			//Calls overloaded operator* to multiply x & y components of original vector from originally set vector
			UserVector * scalar_value;
			//Calls member function to return x, y coordinates of resulting vector, magnitude of resulting vector, and angle of resulting vector
			UserVector.PrintValues(UserVector);
		}
		else if (operation == '/') {
			cout << "What scalar would you like to divide your components by: ";
			cin >> scalar_value;
			//Calls overloaded operator/ to multiply x & y components of original vector from originally set vector by 1/scalar
			UserVector / scalar_value;
			//Calls member function to return x, y coordinates of resulting vector, magnitude of resulting vector, and angle of resulting vector
			UserVector.PrintValues(UserVector);
		}else if (operation == '=') {
			cout << "Enter an x-coordinate to compare to your vectors x-coordinate: ";
			cin >> coordinate1;
			cout << "Enter a y-coordinate to compare to your vector's y-coordinate: ";
			cin >> coordinate2;
			VectorCalculation NewVector;
			NewVector.SetXComponent(coordinate1);
			NewVector.SetYComponent(coordinate2);
			//Calls overloaded operator== to compare x & y components of new vector to components of original vector
			Equal_Vectors = ((UserVector == NewVector) && (UserVector == NewVector));
			if (Equal_Vectors == 1) {
				// Print out they are equal if x and y components of both vectors are equal to each other
				cout << "These are equal vectors" << endl;
				UserVector.PrintValues(UserVector);
			}
			else {
				// Print out they are not equal if x and y components of both vectors are not equal to each other
				cout << "These are not equal vectors" << endl;
				UserVector.PrintValues(UserVector);
			}
		}
		//Ask user if they want to perform another operation on their resultant vector.  If yes, loop back to operation question.  No leads to loop break.
		cout << "Would you like to perform more operations (enter 1 for yes or 0 for no): ";
		cin >> Execute;
	}
	return 0;
};
