// casio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
int main() {
	int N = 0;
	std::cin >> N;
	int x1 = N / 1000;
	int x2 = (N - (x1 * 1000)) / 100;
	int x3 = (N - (x1 * 1000) - (x2 * 100)) / 10;
	int x4 = (N - (x1 * 1000) - (x2 * 100) - (x3 * 10)) / 1;
	if (x1 != 9) {
		x1++;
	}
	else if (x1 == 9) {
		if (x2 != 9) {
			x2++;
		}
		else if (x2 == 9) {
			if (x3 != 9) {
				x3++;
			}
			else if (x3 == 9) {
				if (x4 != 9) {
					x4++;
				}
				if (x4 == 9) {
				}
			}
		}
	}
	N = x1 * 1000 + x2 * 100 + x3 * 10 + x4;
	std::cout << "\n" << N;
	return 0;
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
