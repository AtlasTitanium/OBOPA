#pragma once
#include <iostream>
#include <string>
#include "Race.h"

class Orcs : public Race
{
private:
	std::string naam;
public:
	Orcs(std::string name);
	void render();
};

