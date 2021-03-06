// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//stack, queue, map, set

#include "pch.h"
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <queue>

void palindrom();
void cekaonica();
void unos_pacijenata(std::queue <std::string> &pacijenti);
void pregled_pacijenata(std::queue <std::string> &pacijenti);

int main()
{
	//palindrom();
	cekaonica();

}

void palindrom() {
	std::vector<std::string> inputs_v;
	std::stack <std::string> inputs;
	int counter = 0;

	std::string i = "";
	while (i != "STOP") {
		std::cout << "\nUnesite broj ( 0 za izlaz ) : ";
		std::cin >> i;
		if (i != "STOP") {
			inputs.push(i);
			inputs_v.push_back(i);
		}
	}

	std::cout << "\n\nDali je uneseni niz palindrom? \n\n";

	for (int j = 0; j < inputs_v.size(); j++, inputs.pop()) {
		if (inputs.top() == inputs_v[j])
			counter++;
	}
	if (counter == inputs_v.size())
		std::cout << "\nDA\n";
	else
		std::cout << "\nNE\n";
	system("PAUSE");
}


void cekaonica() {
	std::queue <std::string> pacijenti;

	int input = 0;
	while (true) {
		std::cout << "1. Unos novih pacijenata\n2. Trenutni red pacijenata\n\n: ";
		std::cin >> input;
		switch (input) {
		case 1:
			unos_pacijenata(pacijenti);
			break;
		case 2:
			pregled_pacijenata(pacijenti);
			break;
		default:
			break;
		}
	}
}

void unos_pacijenata(std::queue <std::string> &pacijenti) {
	std::string ime = "";
	while (ime != "STOP") {
		std::cout << "\nUnesite ime pacijenta (\"STOP\" za prekid) : ";
		std::cin >> ime;
		if (ime != "STOP")
			pacijenti.push(ime);
	}
	system("PAUSE");
}

void pregled_pacijenata(std::queue <std::string> &pacijenti) {
	int input = 1;

	std::cout << "\nTrenutno na pregledu : " << pacijenti.front();
	while (input == 1) {
		std::cout << "\nPrimiti sljedeceg pacijenta?\n1. DA\n2. NE\n\n: ";
		std::cin >> input;
		if (input == 1 && pacijenti.size() > 0) {
			std::cout << "\n" << pacijenti.front() << " je bio na pregledu..";
			pacijenti.pop();
			std::cout << "\nA sada je " << pacijenti.front();
		}
		else if(pacijenti.size() == 0)
			std::cout << " \nNema vise pacijenata u cekaonici.\n";
	}
	system("PAUSE");
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
