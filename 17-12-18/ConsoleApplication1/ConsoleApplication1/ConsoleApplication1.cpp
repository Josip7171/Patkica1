// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


struct Pacijent {
	std::string MBO;
	std::string ime;
	std::string prezime;
	std::string popis_ljekova;
};


void unos_pacijenata();
void create_new_pacient(Pacijent &pacijent1);
int check_MBO(Pacijent &pacijent1);
void ispis_pacijenata();
void pretrazi_po_MBO();
void ucitaj_sve(std::vector<Pacijent> &pacijent1);


int main()
{
	std::vector<Pacijent> pacijent1;
	ucitaj_sve(pacijent1);
	int input = 1;
	while (input != 0) {
		system("cls");
		std::cout << "Menu..\n1. Unos novih pacijenata\n2. ispis svih pacijenata";
		std::cout << "\n3. Pretraga pacijenata po MBO\n4. Sustav cekaonice\n";
		std::cout << "5. Dodavanje recepata za ljekove na korisnicki racun pacijenata\n0. Izlaz\n\n: ";
		std::cin >> input;
		switch (input) {
		case 0:
			break;
		case 1:
			unos_pacijenata();
			break;
		case 2:
			ispis_pacijenata();
			break;
		case 3:
			pretrazi_po_MBO();
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
		}
	}
}



void unos_pacijenata() {
	system("cls");
	Pacijent pacijent1;
	std::string ljekovi;
	std::string input = "1";
	std::cout << "Unesite MBO (11-znamenkasti broj) : ";
	std::cin >> pacijent1.MBO;
	std::cout << "\nUnesite ime : ";
	std::cin >> pacijent1.ime;
	std::cout << "\nUnesite prezime : ";
	std::cin >> pacijent1.prezime;
	std::cout << "\nUnesite potrebne ljekove (\"stop\" za izlaz) : ";
	while (ljekovi != "stop") {
		std::cin >> ljekovi;
		//if (ljekovi != "stop")
			//pacijent1.popis_ljekova.push_back(ljekovi);
	}

	//provjeri jedinstvenost MBO-a
	int permission = check_MBO(pacijent1);

	//ako je jedinstven, unesi podatke u "bazu podataka"
	if (permission == 1) {
		create_new_pacient(pacijent1);
		std::cout << "\nPacijent spremljen!\n\n";
		system("PAUSE");
	}
	else if (permission == 0)
		std::cout << "\nMBO vec postoji!\n\n ";
	system("PAUSE");
}

void create_new_pacient(Pacijent &pacijent1) {
	std::cin.ignore();
	std::string za_spremanje = "\n\n";

	za_spremanje += pacijent1.MBO + "\n" + pacijent1.ime + " " + pacijent1.prezime + " - ";
	for (int i = 0; i < pacijent1.popis_ljekova.size(); i++) {
		za_spremanje += pacijent1.popis_ljekova[i] + ", ";
	}
	std::ofstream output;
	output.open("pacijenti.txt", std::ios::out | std::ios::app);
	output << za_spremanje;
	output.close();
}


int check_MBO(Pacijent &pacijent1) {

	std::cout << "\nChecking MBO... ";
	std::vector<std::string> data;
	std::ifstream input("pacijenti.txt");
	std::string line;
	while (input) {
		std::getline(input, line);
		data.push_back(line);
	}

	input.close();

	for (int i = 0; i < data.size(); i++) {
		//std::cout << data[i] << ", ";
		if (data[i] == pacijent1.MBO)
			return 0;						//MBO postoji u sustavu
		system("PAUSE");
	}
	return 1;								//MBO ne postoji u sustavu
}


void ispis_pacijenata() {
	std::vector<std::string> data;
	std::ifstream input("pacijenti.txt");
	std::string line;
	while (input) {
		std::getline(input, line);
		data.push_back(line);
	}

	input.close();

	for (int i = 0; i < data.size(); i++) {
		std::cout << data[i] << "\n";
	}
	system("PAUSE");
}

void pretrazi_po_MBO() {
	std::string MBO;
	std::cout << "\nUnesite trazeni MBO : ";
	std::cin >> MBO;
	system("cls");
	std::cout << "\Searching for MBO... ";
	std::vector<std::string> data;
	std::ifstream input("pacijenti.txt");
	std::string line;
	while (input) {
		std::getline(input, line);
		data.push_back(line);
	}

	input.close();

	for (int i = 0; i < data.size(); i++) {
		//std::cout << data[i] << ", ";
		if (data[i] == MBO) {						//ako pacijent posotoji u bazi
			std::cout << "\nPacijent : \n";
			std::cout << data[i + 1] << std::endl << std::endl;
			system("PAUSE");
			return;
		}
	}
	std::cout << "\nPacijent ne postoji u bazi.\n\n";		//MBO ne postoji u sustavu
	system("PAUSE");
}


void ucitaj_sve(std::vector <Pacijent> &pacijent1) {
	Pacijent pacijent;
	std::ifstream input("pacijenti.txt");
	std::string line;
	int counter = 0;
	while (input) {
		std::getline(input, line);
		if (counter == 0) {
			pacijent.MBO = line;
			counter++;
		}
		else if (counter == 1) {
			pacijent.ime = line;
			counter++;
		}
		else if (counter == 2) {
			pacijent.prezime = line;
			counter++;
		}
		else if (counter == 3) {
			pacijent.prezime = line;
			counter++;
		}
		else if (counter == 4) {
			pacijent.prezime = line;
			counter = 0;
			pacijent1.push_back(pacijent);
		}

	}
	for (int i = 0; i < pacijent1.size(); i++) {
		std::cout << "\nPacijent " << i + 1 << "\n" << pacijent1[i].MBO;
		std::cout << " - " << pacijent1[i].ime << " " << pacijent1[i].prezime;
		std::cout << ", ljekovi : " << pacijent1[i].popis_ljekova;
	}

	input.close();

	for (int i = 0; i < pacijent1.size(); i++) {
		//std::cout << data[i] << "\n";
	}
	system("PAUSE");
}










