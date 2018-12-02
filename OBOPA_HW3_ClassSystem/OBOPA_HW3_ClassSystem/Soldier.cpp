#include "pch.h"
#include "Soldier.h"


Soldier::Soldier(Race* r) : Class(r)
{
}


void Soldier::render()
{
	Class::render();
	std::cout << "  They have chosen to be a Soldier" << std::endl;
}
