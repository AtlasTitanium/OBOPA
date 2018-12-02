#pragma once
#include "Race.h"

class Class : public Race
{
private:
	Race* race;
public:
	Class(Race* r);
	~Class();
	virtual void render();
};

