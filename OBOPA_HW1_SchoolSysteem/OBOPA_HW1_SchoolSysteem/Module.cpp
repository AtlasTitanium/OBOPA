#include "pch.h"
#include "Module.h"


#include <iostream>

Module::Module(std::string newName, int amountEC)
{
	name = newName;
	ec = amountEC;
}

void Module::newStudent(Student* newStudent)
{
	if (studenten.size() == NULL) {
		std::vector<Student*> studentList;
	}
	studenten.push_back(newStudent);
}

void Module::newDocent(Docent* doc)
{
	deDocent = doc;
}

std::string Module::getName() {
	return name;
}

void Module::deleteStudent(Student* stud) {
	std::vector<Student*>::iterator it = studenten.begin();

	while (it != studenten.end()) {
		if ((*it) == stud) {
			studenten.erase(it);
			break;
		}
		it++;
	}
}

Docent* Module::currentDocent() {
	return deDocent;
}

std::vector<Student*> Module::studentenLijst() {
	return studenten;
}

int Module::getEC() {
	return ec;
}

void Module::setEC(int input) {
	ec = input;
}
