// joker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#define start_pelud 50
int main() {
	int pelud_inputs[8], counter_peludi = start_pelud, i = 0;
	for (; i < 8; i++) {
		std::cin >> pelud_inputs[i];
		counter_peludi += (pelud_inputs[i]);
		if (counter_peludi < 0) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		std::cout << i << " ";
	}
	std::cout << std::endl << counter_peludi;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
