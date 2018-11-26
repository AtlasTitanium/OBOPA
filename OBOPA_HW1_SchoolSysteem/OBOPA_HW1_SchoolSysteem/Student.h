#pragma once
#include <string>
#include <vector>

class Module;

class Student
{
private:
	std::string name;
	int totalEC = 0;
public:
	Student(std::string naam);
	std::string getName();
	void updateEC(std::vector<Module*> *modules);
	int getTotalEC();
	~Student();
};

