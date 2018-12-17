// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include<vector>
#include<string>
#include <fstream>


struct Pacijent {
	std::string MBO;
	std::string ime;
	std::string prezime;
	std::vector <std::string> popis_ljekova;
};

void ucitaj_sve(std::vector<Pacijent> &pacijent1);
void unos_pacijenta(std::vector<Pacijent> &pacijent1);


int main()
{
	std::vector<Pacijent> pacijent1;
	int input = 1;
	while (input != 0) {
		system("cls");
		ucitaj_sve(pacijent1);
		std::cout << "\n\nMenu..\n1. Unos novih pacijenata\n2. ispis svih pacijenata";
		std::cout << "\n3. Pretraga pacijenata po MBO\n4. Sustav cekaonice\n";
		std::cout << "5. Dodavanje recepata za ljekove na korisnicki racun pacijenata\n0. Izlaz\n\n: ";
		std::cin >> input;
		switch (input) {
		case 0:
			break;
		case 1:
			unos_pacijenta(pacijent1);
			break;
		case 2:
			//ispis_pacijenata();
			break;
		case 3:
			//pretrazi_po_MBO();
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

void ucitaj_sve(std::vector <Pacijent> &pacijent1) {
	std::ifstream input("pacijenti.txt");
	
	std::string lijek;
	std::string temp = "";
	int counter = 0;
	Pacijent pacijent;

	while (input) {
		if (counter == 0) {
			std::getline(input, pacijent.MBO);
			counter++;
		}
		else if (counter == 1) {
			std::getline(input, pacijent.ime);
			counter++;
		}
		else if (counter == 2) {
			std::getline(input, pacijent.prezime);
			counter++;
		}
		else if (counter == 3) {
			//odvoji ljekove na zasebne stringove
			std::getline(input, lijek);
			for (int i = 0; i < lijek.size(); i++)
				if (lijek[i] != ' ')					//odredi separator, u ovom slucaju je razmak!
					temp += lijek[i];				//tu spremaj cijelu rijec od razmaka do razmaka
				else if (lijek[i] == ' ') {
					pacijent.popis_ljekova.push_back(temp);	//kada nades razmak to je kraj naziva lijeka, pushaj tu rijec
					temp = "";
				}
			temp = "";
			counter = 0;
			pacijent1.push_back(pacijent);
			pacijent.popis_ljekova.clear();
		}
	}

	input.close();

	for (int i = 0; i < pacijent1.size(); i++) {
		std::cout << "\nPacijent " << i + 1 << "\n" << pacijent1[i].MBO;
		std::cout << " - " << pacijent1[i].ime << " " << pacijent1[i].prezime;
		std::cout << ", ljekovi : ";
		for(int j = 0; j < pacijent1[i].popis_ljekova.size(); j++)
			std::cout << pacijent1[i].popis_ljekova[j] << " ";
	}

	std::cout << "\nVelicina vektora pacijent1 = " << pacijent1.size() << std::endl;
}


void unos_pacijenta(std::vector<Pacijent> &pacijent1) {
	system("CLS");
	Pacijent pacijent;
	std::string ljekovi = "";
	std::cout << "Unesite MBO : ";
	std::cin >> pacijent.MBO;
	std::cout << "\nUnesite ime : ";
	std::cin >> pacijent.ime;
	std::cout << "\nUnesite prezime : ";
	std::cin >> pacijent.prezime;
	std::cout << "\nUnesite ljekove (\"stop~\" za izlaz) : ";
	while (ljekovi != "stop")
		std::cin >> ljekovi;
		if (ljekovi != "stop")
			pacijent.popis_ljekova.push_back(ljekovi);

	pacijent1.push_back(pacijent);


	//jel treba open pa close svaki put? kako radi output stream?
	std::ofstream output;
	output.open("pacijenti.txt");
	for (int i = 0; i < pacijent1.size(); i++) {
		output << pacijent1[i].MBO + "\n" << pacijent1[i].ime + "\n" << pacijent1[i].prezime + "\n";
		for (int j = 0; j < pacijent1[i].popis_ljekova.size(); j++)
			ljekovi += pacijent1[i].popis_ljekova[j] + " ";
		output << ljekovi;
	}

	output.close();
}











