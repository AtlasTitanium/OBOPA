#include "pch.h"
#include "Student.h"


Student::Student(std::string naam)
{
	name = naam;
}

std::string Student::getName() {
	return name;
}

int Student::getTotalEC() {
	return totalEC;
}

void Student::updateEC(std::vector<Module*> *modules) {
	totalEC = 0;
	std::vector<Module*>::iterator it = modules->begin();
}


Student::~Student()
{
}
