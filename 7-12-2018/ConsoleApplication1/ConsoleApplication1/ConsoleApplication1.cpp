// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>


struct Student {
	int id;
	std::string ime;
	std::string prezime;
	char spol;
	int rez_1_kol;
	int rez_2_kol;
	int rez_zavr;
	int ukupni_usp;
};

std::vector <Student> v_stud;
int lokator = 0;

int main()
{
	
}

void unosPodataka() {
	Student s;
	std::cout << "\nUnesite ID - IME - PREZIME - SPOL - REZULTAT 1. KOLOKVIJA - REZULTAT 2. KOLOKVIJA - REZULTAT ZAVRSNOG ISPITA - UKUPNI USPIJEH\n: ";
	std::cin >> s.id >> s.ime >> s.prezime >> s.spol >> s.rez_1_kol;
	std::cin >> s.rez_2_kol >> s.rez_zavr >> s.ukupni_usp;
	v_stud.push_back(s);
	
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
