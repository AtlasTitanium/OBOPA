#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Race.h"

class NPC_Creator
{
private: 
	std::vector<Race*> npcs;
public:
	NPC_Creator();
	void addNPC(std::string name, std::string race, bool farmer, bool soldier, bool shaman);
	void drawList();
	~NPC_Creator();
};

