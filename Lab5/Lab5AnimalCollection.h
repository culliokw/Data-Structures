#pragma once
#include <string>
using namespace std;
//Max number of animals allowed in collection
const int Collection_Size = 10;
//Animal class declaration
class Animal {
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

//Fish class declaration
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

//Template class Animal Collection declaration
template<class T>
class AnimalCollection{

private:
	int Current_Collection_Occupancy;
	T Animals_in_Collection[Collection_Size];

public:
	void AddAnimal(T);
	T RemoveAnimal();
	int GetNumberAnimals();
	class FullCollection{};
	class EmptyCollection{};
	AnimalCollection();
	~AnimalCollection();
};

//Constructor for AnimalCollection class
template <class T>
AnimalCollection<T>::AnimalCollection() {
	Current_Collection_Occupancy = 0;
	T Animals_in_Collection[Collection_Size];
}

//Returns numbetr of animals in the collection
template <class T>
int AnimalCollection<T>::GetNumberAnimals() {

	return Current_Collection_Occupancy;
}


//Adds animal to the collection
template <class T>
void AnimalCollection<T>::AddAnimal(T x) {
	if (Current_Collection_Occupancy == Collection_Size) { throw FullCollection{}; }
	Animals_in_Collection[Current_Collection_Occupancy] = x;
	Current_Collection_Occupancy++;

}

//Removes animal from the collection
template <class T>
T AnimalCollection<T>::RemoveAnimal() {
	if (Current_Collection_Occupancy == 0) { throw EmptyCollection{}; }
	Current_Collection_Occupancy--;
	return Animals_in_Collection[Current_Collection_Occupancy];
}


//Destructor
template <class T>
AnimalCollection<T>::~AnimalCollection() {

}


