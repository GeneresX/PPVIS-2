#include <iostream>
#include"Header.h"

using namespace std;

using namespace zoo;

const char* Animal::show_organism_category()
{
	return "It's an animal";
}

const char* Carnivores::show_food_type()
{
	return "It's carnivores animal, it eat meat";
}

void Carnivores::show_organism_name()
{
	cout << show_organism_category();
}

const char* Predator::show_predator_type()
{
	return "Predator can be land and pinniped";
}

void Predator::show_food()
{
	cout << show_food_type();
}

void Predator::show_organism()
{
	show_organism_name();
}

const char* Lion::show_predator_type()
{
	return "It's lion, it's land predator";
}

const char* Tiger::show_predator_type()
{
	return "It's tiger, it's land predator";
}

const char* Liger::show_predator_type()
{
	return "It's liger, it's land predator";
}
