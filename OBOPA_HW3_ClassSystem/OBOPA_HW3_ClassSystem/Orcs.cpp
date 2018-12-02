#include "pch.h"
#include "Orcs.h"


Orcs::Orcs(std::string name) {
	naam = name;
}

void Orcs::render() {
	std::cout << "This Orc is called: " << naam << std::endl;
}
