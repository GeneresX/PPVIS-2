#include <iostream>
#include "Header.h"

using namespace std;
using namespace zoo;

int main() 
{
	Animal animal;
	Carnivores carnivores;
	Predator predator;

	Tiger tiger;
	Lion lion;
	Liger liger;

	cout << "Object of Animal class: " << endl;
	cout << "	" << animal.show_organism_category() << endl << endl;

	cout << "Object of Carnivores class: " << endl;
	cout << "	";   carnivores.show_organism_name(); cout << endl;
	cout << "	" << carnivores.show_food_type() << endl << endl;

	cout << "Object of Predator class: " << endl;
	cout << "	";  predator.show_organism(); cout << endl;
	cout << "	";  predator.show_food(); cout << endl;
	cout << "	" << predator.show_predator_type() << endl << endl;

	cout << "Onject of Tiger class: " << endl;
	cout << "	";  tiger.show_organism(); cout << endl;
	cout << "	";  tiger.show_food(); cout << endl;
	cout << "	";  tiger.show_organism(); cout << endl;
	cout << "	" << tiger.show_predator_type() << endl << endl;

	
	cout << "Object of Lion class: " << endl;
	cout << "	";  lion.show_organism(); cout << endl;
	cout << "	";  lion.show_food(); cout << endl;
	cout << "	";  lion.show_organism(); cout << endl;
	cout << "	" << lion.show_predator_type() << endl << endl;

	cout << "Object of Liger class: " << endl;
	cout << "	";  liger.show_organism(); cout << endl;
	cout << "	";  liger.show_food(); cout << endl;
	cout << "	";  liger.show_organism(); cout << endl;
	cout << "	" << liger.show_predator_type() << endl << endl;
}