#include "Lab5AnimalCollection.h"
#include <iostream>
#include <string>

void CreateOptions() {
	cout << "Press 1 to add an animal to the collection" << endl;
	cout << "Press 2 to remove an animal from the collection" << endl;
	cout << "Press 3 to see how many animals are in the collection" << endl;
	cout << "Press 4 to quit" << endl;
}

int main() {
	int option = 0;
	string FishType = "";
	int weight = 0;
	bool RepeatProcess = 1;
	string color = "";
	AnimalCollection<Fish> NewCollection;
	//Calls function to create options to display to user
	CreateOptions();
	//Loop to continue presenting user with options until they select to quit
	while (RepeatProcess == 1) {
		cout << "What would you like to do? (Enter one of the above options)?: ";
		cin >> option;
		if (option == 1) {
			//Creating new instance of fish
			Fish *Added_Fish = new Fish;
			//Set attributes
			cout << "How much does your fish weigh?: ";
			cin >> weight;
			Added_Fish->SetWeight(weight);
			cout << "What color is your fish?: ";
			cin >> color;
			Added_Fish->SetColor(color);
			cout << "What species is your fish?: ";
			cin >> FishType;
			Added_Fish->SetFishType(FishType);
			//Add fish to animal collection
			//Try-catch block for adding to a full collection
			try {
				NewCollection.AddAnimal(*Added_Fish);
			}
			catch (AnimalCollection<Fish>::FullCollection) {
				cout << "You tried to add an animal to a full collection!" << endl;
			};
			delete Added_Fish;
		}
		else if (option == 2) {
			Fish Removed_Fish;
			//Remove fish
			//Try-catch block for removing from empty collection
			try {
				Removed_Fish = NewCollection.RemoveAnimal();
				cout << "Your Horse's attributes: " << endl;
				cout << "Horse's weight is: " << Removed_Fish.GetWeight() << " lbs." << endl;
				cout << "Horse's color is: " << Removed_Fish.GetColor() << endl;
				cout << "Fish's type: " << Removed_Fish.GetFishType() << endl;
			}
			catch (AnimalCollection<Fish>::EmptyCollection) {
				cout << "Error: You tried to remove an animal from an empty collection" << endl;
			}
		}
		else if (option == 3) {
			//Gives current status of number of animals in the collection
			cout << "You have " << NewCollection.GetNumberAnimals() << " animals in your collection" << endl;
		}
		else if (option == 4) {
			//Quit program
			return 0;
		}
		cout << endl;
		CreateOptions();
	}
}