// OBOPA_HW4_Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>

template<typename U>
void print(U arr, size_t size);

template<typename T>
bool sort(T* ar, size_t size);

int main() {
	float* pa;
	float floatArray[4] = { 21,44.4f,56.23f,13.3f };

	pa = floatArray;

	print(floatArray, 4);

	sort(pa, 4);

	print(floatArray, 4);
}

template<typename U>
void print(U arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "END" << std::endl << std::endl;
}

template<typename T>
bool sort(T* ar, size_t size)
{
	for (size_t j = 1; j < size; j++) {
		if (ar[j] < ar[j - 1]) {
			T temp = ar[j - 1];
			ar[j - 1] = ar[j];
			ar[j] = temp;
			if ((j - 1) > 0) {
				j = j - 2;
			}
		}

	}

	return true;
}