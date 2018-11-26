#pragma once
#include "GameRules.h"

class Rules : public GameRules {
public:
	int RulesCheck(int, int);

private:
	int minNum = 2;
	int maxNum = 3;
};

