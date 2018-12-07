// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>

void unos();
void ispis();
void search();
void prosjek();


int main()
{
	int x = 1;
	do {
		std::cout << std::endl;
		std::cout << "1. za unos\n2. za ispis\n3. za pretrazivanje\n4. za izracun prosjeka\n0. za izlaz\n: ";
		std::cin >> x;
		switch (x) {
		case 1:
			unos();
			break;
		case 2:
			ispis();
			break;
		case 3:
			search();
		case 4:
			prosjek();
		case 0:
			break;
		}
	} while (x != 0);
}

void unos() {
	system("cls");
	int rbr = 0, prosjecna_ocjena = 0, polozeni_ects = 0;
	std::string ime, prezime, za_spremanje;
	std::cin.ignore();
	std::cout << "\nUnesite redni broj : ";
	std::cin >> rbr;
	std::cin.ignore();
	std::cout << "\nUnesite ime : ";
	std::getline(std::cin, ime);
	std::cout << "\nUnesite prezime : ";
	std::getline(std::cin, prezime);
	std::cout << "\nUnesite prosjecnu ocjenu : ";
	std::cin >> prosjecna_ocjena;
	std::cin.ignore();
	std::cout << "\nUnesite polozene ECTS bodove : ";
	std::cin >> polozeni_ects;
	std::cin.ignore();
	za_spremanje = "\n" + std::to_string(rbr) + ". " + ime + " " + prezime + " - " + std::to_string(prosjecna_ocjena) + " - " + std::to_string(polozeni_ects) ;
	std::ofstream output;
	output.open("zadatak3.txt", std::ios::out | std::ios::app );
	output << za_spremanje;
	output.close();
}

void ispis() {
	system("cls");
	std::vector<std::string> podaci;
	std::ifstream input("zadatak3.txt");
	std::string line;
	while (input) {
		std::getline(input, line);
		podaci.push_back(line);
	}
	input.close();
	
	for (int i = 0; i < podaci.size() - 1; i++) {
		std::cout << podaci[i] << std::endl;
	}
}


void search() {
	system("cls");
	std::cout << "Unesite redni broj : ";
	char redni_broj = 0;
	std::cin >> redni_broj;
	std::vector <std::string> podatak; 
	std::ifstream input("zadatak3.txt");
	std::string line;
	while (input) {
		std::getline(input, line);
		if (line[0] == redni_broj) {
			podatak.push_back(line);
		}
	}
	input.close();

	std::cout << podatak[0] << std::endl;
}

void prosjek() {
	//izracunaj prosjek
}








