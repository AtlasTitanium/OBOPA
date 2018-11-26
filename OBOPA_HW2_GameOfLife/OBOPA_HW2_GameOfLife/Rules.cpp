#include "pch.h"
#include "Rules.h"


int Rules::RulesCheck(int neighbours, int points) {
	int nextState = points;
	if (nextState == 0) {
		if (neighbours == 3) {
			nextState = 1;
		}
	}
	else {
		if (neighbours > 3 || neighbours < 2) {
			nextState = 0;
		}
	}
	return nextState;
}

