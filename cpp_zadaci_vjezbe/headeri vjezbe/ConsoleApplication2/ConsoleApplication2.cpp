// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header1.h"
#include <string>

void zadatak_jedan() {
	Kocka kocka1;
	Kocka kocka2;
	Kocka kocka3;

	kocka1.otvori();
	kocka2.otvori();
	kocka1.zatvori();
	kocka2.zatvori();
}

void zadatak_dva() {
	Automobil auto1;
	auto1.set();

	Automobil auto2;
	auto2.set();

	std::cout << "\n" << auto1.get() << std::endl;
	system("PAUSE");
	system("cls");
	std::cout << "\n" << auto2.get() << std::endl;
}

int main()
{
	zadatak_dva();
}








