// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Kutija {
public:
	int x;

	Kutija();
	~Kutija();
};

Kutija::Kutija() {
	std::cout << "\nStvoren objekt kutija.\n";
}

Kutija::~Kutija() {
	std::cout << "\nUnisten je objekt kutija.\n";
}

int main()
{
	Kutija k;

}







