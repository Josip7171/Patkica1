// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>

int main()
{
    std::cout << "Hello World!\n"; 
	int godine1 = 0, godine2 = 0;
	std::cout << "\nUpisite godine prve osobe : ";
	std::cin >> godine1;
	std::cout << "\nUpisite godine druge osobe : ";
	std::cin >> godine2;
	if (godine1 < godine2) {
		std::cout << "\n\nOsoba 1 je mlada od osobe2.\n";
	}
	else if (godine2 < godine1) {
		std::cout << "\nOsoba2 je mlada od osobe 1. \n";
	}
	else {
		std::cout << "\nOsobe imaju jednako godina. \n";
	}

	std::cout << "\n\nUpisite neki broj : ";
	int broj1 = 0;
	std::cin >> broj1;
	if (broj1 % 2 == 0) {
		std::cout << "\nBroj je paran.\n";
	}
	else if (broj1 % 2 != 0) {
		std::cout << "\nBroj je neparan.\n";
	}
	else {
		std::cout << "\nBroj je nula!\n";
	}

	std::cout << "\nUpisite lozinku : ";
	std::string lozinka = "lozinka1", unos1 = "";
	std::cin >> unos1;
	if (unos1 == lozinka) {
		std::cout << "\nLozinka je tocna!\n";
	}
	else {
		std::cout << "\nLozinka je netocna!";
	}

	std::cout << "\n\nUnesite prvi broj : ";
	std::cin >> broj1;
	std::cout << "\n\nUnesite drugi broj : ";
	int broj2 = 0;
	std::cin >> broj2;
	std::cout << "\nUnesite operaciju (+, - , *, / ) : ";
	char operator1 = ' ';
	std::cin >> operator1;
	if (operator1 == '+') {
		std::cout << "Rezultat je " << broj1 + broj2 << ".\n";
	}
	else if (operator1 == '-') {
		std::cout << "Rezultat je " << broj1 - broj2 << ".\n";
	}
	else if (operator1 == '*') {
		std::cout << "Rezultat je " << broj1 * broj2 << ".\n";
	}
	else if (operator1 == '/') {
		std::cout << "Rezultat je " << broj1 / broj2 << ".\n";
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
