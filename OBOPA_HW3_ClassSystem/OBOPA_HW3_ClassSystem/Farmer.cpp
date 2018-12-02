#include "pch.h"
#include "Farmer.h"


Farmer::Farmer(Race* r) : Class(r)
{
}


void Farmer::render()
{
	Class::render();
	std::cout << "  They have chosen to be a Farmer" << std::endl;
}
