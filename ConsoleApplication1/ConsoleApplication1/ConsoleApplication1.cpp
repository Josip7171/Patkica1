// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

float PI = 3.14;

int main()
{
	/*
    std::cout << "Hello World!\n"; 
	{
		int a = 10;
		{
			int b = 5, a = 3;
			std::cout << a << std::endl;
			std::cout << b << std::endl;
		}
		std::cout << a << std::endl;
		//std::cout << b << std::endl;
	}
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	*/

	int some_int = 10;
	char some_char = 'c';
	bool some_bool = true;
	float some_float = 0.11;
	double some_double = 2;

	std::cout << "Zadane vrijednosti su : " << some_int << ", " << some_char << ", " << some_bool << ", " << some_float << ", " << some_double << ".\n";

	std::cout << "Upisite cijeli broj : ";
	std::cin >> some_int;
	std::cout << "Upisite znak : ";
	std::cin >> some_char;
	std::cout << "Upisite boolean : ";
	std::cin >> some_bool;
	std::cout << "Upisite decimalni broj : ";
	std::cin >> some_float;
	std::cout << "Upisite double : ";
	std::cin >> some_double;

	std::cout << some_int << ", " << some_char << ", " << some_bool << ", " << some_float << ", " << some_double << ".\n";

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
