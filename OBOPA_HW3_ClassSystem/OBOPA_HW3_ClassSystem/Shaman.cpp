#include "pch.h"
#include "Shaman.h"


Shaman::Shaman(Race* r) : Class(r)
{
}


void Shaman::render()
{
	Class::render();
	std::cout << "  They have chosen to be a Shaman" << std::endl;
}
