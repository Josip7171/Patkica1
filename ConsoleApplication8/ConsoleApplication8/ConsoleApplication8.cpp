// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Hello World!\n"; 
	int broj1 = 2, broj2 = 3;
	std::cout << "\nKonverzija iz inta u float : " << std::fixed << std::setprecision(2) << float(broj1) << ",\n";
	float broj3 = float(broj2);
	std::cout << "\n\nHard koncerzija varijable iz inta u float : " << broj3 << "\n";
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
