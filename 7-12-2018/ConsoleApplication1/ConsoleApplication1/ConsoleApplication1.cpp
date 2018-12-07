// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


void promjeni_lokaciju();
void clean_kord();
void print_map();

struct Kordinate {
	char kordinate_broda[20][20];
};

Kordinate kor1;


int main()
{
	int x = 1;
	std::cout << "Unesite kordinate broda : ";
	clean_kord();
	int kord_x = 0, kord_y = 0;
	std::cin >> kord_x >> kord_y;
	kor1.kordinate_broda[kord_x][kord_y] = 'B';
	print_map();
	do {
		std::cout << "\nPromjeniti lokaciju broda?\n1.DA\n0.NE\n\n: ";
		std::cin >> x;
		if (x == 1) {
			promjeni_lokaciju();
			print_map();
		}
		else {
			x = 0;
		}
	} while (x != 0);
}

void promjeni_lokaciju() {
	std::srand(time(NULL));
	int nove_kord_x = rand() % 20;
	int nove_kord_y = rand() % 20;
	clean_kord();
	kor1.kordinate_broda[nove_kord_x][nove_kord_y] = 'B';
}

void clean_kord() {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			kor1.kordinate_broda[i][j] = '.';		//inicijaliziraj sve na 0 - lokacija broda se oznaci sa 1
		}
	}
}

void print_map() {
	system("cls");
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			std::cout << kor1.kordinate_broda[i][j] << " ";
		}
		std::cout << std::endl;
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
