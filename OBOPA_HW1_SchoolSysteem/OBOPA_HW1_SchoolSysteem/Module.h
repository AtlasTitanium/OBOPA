#pragma once
#include <string>
#include <vector>

#include "Student.h"
#include "Docent.h"

class Module
{
private:
	std::string name;
	int ec;
	Docent* deDocent;
	std::vector<Student*> studenten;
public:
	Module(std::string , int aantalEC);
	void newStudent(Student* newStudent);
	void newDocent(Docent* docent);

	std::string getName();
	void deleteStudent(Student* student);

	Docent* currentDocent();
	std::vector<Student*> studentenLijst();

	int getEC();
	void setEC(int input);
};

