#include "pch.h"
#include "Docent.h"


Docent::Docent(std::string naam)
{
	name = naam;
}

std::string Docent::getName() {
	return name;
}


Docent::~Docent()
{
}
