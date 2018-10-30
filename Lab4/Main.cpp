#include <iostream>
#include <iomanip>
#include "Animal.h"
#include "Fish.h"
#include "Horse.h"
using namespace std;


//Function that points to an Animal class type, and therefore calls Animal class eat method and derived move method
void MoveandEat(Animal *x) {
	cout << x->eat() << endl;
	cout << x->move() << endl;
}

//Function to present options for user at beginning of program execution
void CreateOptions() {
	cout << "Press 1 for an instance of animal" << endl;
	cout << "Press 2 for an instance of fish" << endl;
	cout << "Press 3 for an instance of horse" << endl;
	cout << "Press 4 for an instance of a fish declared as an animal" << endl;
	cout << "Press 5 for an instance of a horse declared as an animal" << endl;
}

int main(){
	
	//decalre variables
	int instance = 0;
	double weight = 0;
	string color = "";
	string FishType = "";
	bool Show_Horse = 0;
	bool Input = 1;
	bool repeat_process = 1;


	while (repeat_process == 1) {
		//Call function to print the options for user
		CreateOptions();
		cout << endl << endl << "Please enter a number for one of the above options: ";
		cin >> instance;

		//Determining which option was selected, and executing code for specific option chosen
		if (instance == 1) {
			cout << "You cannot instantiate a base class object with a pure virtual function." << endl;
		}
		else if (instance == 2) {

			//while loop to loop back for user to enter attribute values for object constructor
			while (Input == 1) {
				cout << "What type of fish is your fish?(Enter a type of fish): ";
				cin >> FishType;
				if (isdigit(FishType[1])) {
					cout << "Please Enter a correct type." << endl;
					Input = 1;
				}
				else {
					Input = 0;
				}
			}

			//instantiation of derived class object
			Fish *NewFish = new Fish(FishType);
			cout << NewFish->eat() << endl;
			cout << NewFish->move() << endl;

			//Sending to function
			MoveandEat(NewFish);
			delete NewFish;
		}
		else if (instance == 3) {
			while (Input == 1) {
				cout << "Is your horse a show horse?(Enter 1 or 0): ";
				cin >> Show_Horse;
				if (Show_Horse != 1 && Show_Horse != 0) {
					cout << "Please Enter either 1 for your horse being a show horse or 0 for if its not" << endl;
					Input = 1;
				}
				else {
					Input = 0;
				}
			}
			Horse *NewHorse = new Horse(Show_Horse);
			cout << NewHorse->eat() << endl;
			cout << NewHorse->move() << endl;
			MoveandEat(NewHorse);
			delete NewHorse;
		}
		else if (instance == 4) {
			while (Input == 1) {
				cout << "What type of fish is your fish?(Enter a type of fish): ";
				cin >> FishType;
				if (isdigit(FishType[1])) {
					cout << "Please Enter a correct type." << endl;
					Input = 1;
				}
				else {
					Input = 0;
				}
			}
			//Instantiation of a derived class declared as a base class type 
			Animal *parent = new Fish(FishType);
			cout << parent->eat() << endl;
			cout << parent->move() << endl;
			MoveandEat(parent);
			delete parent;
		}
		else if (instance == 5) {
			while (Input == 1) {
				cout << "Is your horse a show horse?(Enter 1 or 0): ";
				cin >> Show_Horse;
				if (Show_Horse != 1 && Show_Horse != 0) {
					cout << "Please Enter either 1 for your horse being a show horse or 0 for if its not" << endl;
					Input = 1;
				}
				else {
					Input = 0;
				}
			}
			Animal *parent = new Horse(Show_Horse);
			cout << parent->eat() << endl;
			cout << parent->move() << endl;
			MoveandEat(parent);
			delete parent;
		}
		//Ask user if they would like to repeat the process
		cout << "Would you like to choose another option? (Enter 1 for yes, 0 for no): ";
		cin >> repeat_process;
		cout << endl;
	}
	return 0;


};