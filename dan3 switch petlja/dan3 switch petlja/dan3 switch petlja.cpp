// dan3 switch petlja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
	std::cout << "Unesite prvi broj : ";
	int broj1 = 0, broj2 = 0;
	char operator1 = ' ';
	std::cin >> broj1; 
	std::cout << "\nUnesite drugi broj : ";
	std::cin >> broj2;
	std::cout << "\nUnesite operator (+, -, *, /) : ";
	std::cin >> operator1;
	switch (operator1) {
	case '+':
		std::cout << "\n\nRezultat je : " << broj1 + broj2 << ".\n";
		break;
	case '-':
		std::cout << "\n\nRezultat je : " << broj1 - broj2 << ".\n";
		break;
	case '*':
		std::cout << "\n\nRezultat je : " << broj1 * broj2 << ".\n";
		break;
	case '/':
		std::cout << "\n\nRezultat je : " << broj1 / broj2 << ".\n";
		break;
	default:
		std::cout << "\nUnijeli ste krivi operater.\n";
		break;
	}

	std::cout << "\n\nOdaberite jednu od opcija :\n1.Unos i ispis broja\n2Ispis \"Dobar dan \"\n3.Izlaz\n:  ";
	int izbor1 = 0;
	std::cin >> izbor1;
	switch (izbor1) {
	case 1:
		std::cout << "\nUnesite broj : ";
		std::cin >> broj1;
		std::cout << "\nUnijeli ste broj " << broj1 << ".\n";
		break;
	case 2:
		std::cout << "\nDobar dan!\n\n";
		break;
	default:
		break;
	}

	std::cout << "\n\nJer moj je zivot igra bez granica ...\nIzaberi od koje rijeci da stih krene (brojcano) : ";
	std::cin >> broj1;
	std::cout << "\n";
	switch (broj1) {
	case 1:
		std::cout << "Jer ";
	case 2:
		std::cout << "moj ";
	case 3:
		std::cout << "je ";
	case 4:
		std::cout << "zivot ";
	case 5:
		std::cout << "igra ";
	case 6:
		std::cout << "bez ";
	case 7 :
		std::cout << "granica ... \n";
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
