// OBOPA_HW1_SchoolSysteem.cpp

#include "pch.h"
#include <iostream>
#include <vector>
#include <iostream>

#include "Module.h"


void PrintList(std::vector<Module*> modules);

int main()
{
	Module* mod;
	std::vector<Module*> modules;
	{
		mod = new Module("Multiplatform Development", 10);
		modules.push_back(mod);
		mod = new Module("Object Oriented Programming Advanced", 10);
		modules.push_back(mod);
		mod = new Module("Procedural Art", 20);
		modules.push_back(mod);
	}

	std::vector<Docent*> docenten;
	std::vector<Module*>::iterator i = modules.begin();
	int f = 0;
	while (i != modules.end()) {
		Docent *doc = new Docent("Docent");
		modules.at(f)->newDocent(doc);
		docenten.push_back(doc);

		f++;
		i++;
	}

	std::vector<Student*> studenten;
	for (int i = 0; i < 10; i++) {
		Student* stud = new Student("Timmy");
		for (int j = 0; j < ((rand() % modules.size()) + 1); j++) {
			modules.at(j)->newStudent(stud);
		}
		studenten.push_back(stud);
	}

	std::cout << "---Initial---" << std::endl;
	PrintList(modules);
	//-----------------
	
	//wijzig EC
	modules.at((rand() % modules.size()))->setEC((rand() % 10 + 10));

	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		(*it)->updateEC(&modules);
		it++;
	}
	
	std::cout << "---Change module ec's---" << std::endl;
	PrintList(modules);

	//------------------
	int a = rand() % modules.size();
	modules.at(a)->deleteStudent(studenten.at(rand() % (modules.at(a)->studentenLijst().size())));

	std::cout << "---Destroy a student in a game of death chess---" << std::endl;
	PrintList(modules);

	return 0;
}

void PrintList(std::vector<Module*> modules) {
	for (auto &modul : modules) {
		std::cout << "Module: " << modul->getName() << std::endl;
		std::cout << "    Assigned Teacher: " << modul->currentDocent()->getName() << std::endl;
		std::cout << "        Total Students: " << modul->studentenLijst().size() << std::endl;
		for (auto &studen : modul->studentenLijst()) {
			std::cout << "            " << studen->getName() << " --- " << modul->getEC() << " points of his/her total of: " << studen->getTotalEC() << std::endl;
		}
	}
	std::cout << std::endl;

	return;
}
