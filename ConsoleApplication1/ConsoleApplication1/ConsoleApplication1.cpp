// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"


//KLASE
class Kutija {
public:
	int x;
	void ispis();
};

void Kutija::ispis() {
	std::cout << x << std::endl;
}

class Covijek {
public:
	void hodaj_naprijed() {
		std::cout << "\nHodam naprijed 5 sekundi.";
	}
	void okret_ljevo_90();
	void okret_desno_90();
private:	//testno
	int a;
	void nova();
};


void Covijek::okret_ljevo_90() {
	std::cout << "\nOkrecem se u ljevo za 90 stupnjeva.\n\n";
}

void Covijek::okret_desno_90() {
	std::cout << "\nOkrecem se desno za 90 stupnjeva.\n\n";
}

void Covijek::nova() {

}

//FUNKCIJE
void zadatak_covijek();


//MAIN
int main()
{
	//zadatak_zivotinja();			//zadatak2
	//zadatak_covijek();			//ZADATAK1
}

//ZADATAK 1
void zadatak_covijek() {
	int input = 0;
	Covijek covijek1;
	do {
		std::cout << "\nIzaberite radnju\n1. Naprijed 5 sekundi\n2. Okret u lijevo\n3. Okret u desno\n0. Izlaz\n\n: ";
		std::cin >> input;
		switch (input) {
		case 1:
			covijek1.hodaj_naprijed();
			break;
		case 2:
			covijek1.okret_ljevo_90();
			break;
		case 3:
			covijek1.okret_desno_90();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input != 0);
}


//ZADATAK 2
void zadatak_zivotinja() {
	Zivotinja z;
	z.broj_koraka = 10;
	z.stupnjeva = 90;
	z.okret_desno();
}





