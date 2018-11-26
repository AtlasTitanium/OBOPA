#include "pch.h"
#include "MatrixDrawer.h"

#include <iostream>
#include <time.h>

int timer = 0;

int** MatrixDrawer::drawMatrix(GameRules *rulesChecker, int **point)
{
	timer++;

	int** newGrid = new int*[25];
	for (int g = 0; g < 25; ++g)
		newGrid[g] = new int[25];

	for (int y = 0; y < dimensions[1]; y++) {
		for (int x = 0; x < dimensions[0]; x++) {

			int neighbours = 0;

			
			for (int yNeighbour = y - 1; yNeighbour <= y + 1; yNeighbour++) {
				for (int xNeighbour = x - 1; xNeighbour <= x + 1; xNeighbour++) {
					if (xNeighbour == x && yNeighbour == y) { 
						continue;
					}
					else if (((xNeighbour >= 0 && xNeighbour < dimensions[0]) && (yNeighbour >= 0 && yNeighbour < dimensions[1])) && point[xNeighbour][yNeighbour] == 1) { 
						neighbours++;
					}
				}
			}

			newGrid[x][y] = rulesChecker->RulesCheck(neighbours, point[x][y]);

			if (newGrid[x][y] == 1) {
				std::cout << "X ";
			}
			else {
				std::cout << ". ";
			}

		}
		std::cout << "\n";
	}

	std::cout << std::flush;

	if (timer % 5 == 0) {
		timer = 0;
		return newGrid;
	}
	else {
		return point;
	}
}

void MatrixDrawer::SetDimensions(int x, int y)
{
	dimensions[0] = x;
	dimensions[1] = y;
}

int* MatrixDrawer::GetDimensions()
{
	return dimensions;
}