// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
	std::vector<int> vector1;
	int counter = 0;
	int unos = 0;
	for(int i = 0; i < 2;){
		std::cout << "Unesi element u vector ( \"0\" za izlaz) : ";
		std::cin >> unos;
		if (unos != 0 && i == 1) {
			vector1.push_back(unos + vector1[counter-1]);
		}
		else if (i == 0) {
			vector1.push_back(unos);
			i++;
		}
		else {
			i++;
		}
		counter++;
	}


	std::cout << "\n";
	for (int i = 0; i < vector1.size(); i++) {
		std::cout << vector1[i] << ", ";
	}

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
