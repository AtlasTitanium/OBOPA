#pragma once
#include <iostream>
#include <string>
#include "Race.h"

class Elves : public Race
{
private:
	std::string naam;
public:
	Elves(std::string name);
	void render();
};

