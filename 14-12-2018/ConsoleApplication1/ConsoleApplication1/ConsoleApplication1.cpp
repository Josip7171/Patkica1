// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


void menu();
void menu2();

int main()
{
	menu();
}


void menu() {
	int input = 0;
	std::cout << "IZBORNIK\n1. Unos Studenata\n2, Ispis Studenata\n3. Sortiranje\n4. \n\n: ";
	std::cin >> input;
	switch (input) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		menu2();
		break;
	case 4:
		break;
	default:
		break;
	}
}



void menu2() {
	int input = 0;
	std::cout << "SORTIRANJE PO\n1. Imenu\n2. Prezimenu\n3. Prosjeku\n\n: ";
	std::cin >> input;
	switch (input) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
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
