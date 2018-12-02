#include "pch.h"
#include "Class.h"


Class::Class(Race* r)
{
	race = r;
}

void Class::render() {
	race->render();
}


Class::~Class()
{
	if (race) delete race;
}
