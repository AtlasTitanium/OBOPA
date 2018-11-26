#pragma once
#include <string>
class Docent
{
private:
	std::string name;
public:
	Docent(std::string naam);
	std::string getName();
	~Docent();
};

