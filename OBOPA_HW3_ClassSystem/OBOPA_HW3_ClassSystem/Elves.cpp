#include "pch.h"
#include "Elves.h"


Elves::Elves(std::string name) {
	naam = name;
}

void Elves::render() {
	std::cout << "This Elve is called: " << naam << std::endl;
}

