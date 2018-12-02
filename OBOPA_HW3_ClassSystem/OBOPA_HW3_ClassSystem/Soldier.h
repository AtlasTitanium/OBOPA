#pragma once
#include "Class.h"

class Soldier : public Class
{
public:
	Soldier(Race* r);
	void render();
};

