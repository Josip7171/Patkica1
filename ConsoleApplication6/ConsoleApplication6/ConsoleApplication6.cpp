// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n"; 
	std::string s1 = "welcome";
	std::string s2 = "w3resource";

	std::cout << "velicina stringa s1 je " << s1.size() << ".\n\n";
	for (unsigned i = 2; i < 3; ++i)
	{
		std::cout << "Treci znak je " << s1.at(i);
	}

	std::cout << "\n\nlength: " << s1.length() << "\n";

	std::cout << "The text you introduced was: " << s1 << "\n\n";

	//std::cout << "4 znaka od 3. indeksa su : " << s1.at(3) << s1.at(4) << s1.at(5) << s1.at(6) << " . \n\n";
	std::cout << "\n4 znaka od 3. indeksa su : " << s1.substr(3, 7) << ".\n";

	std::string s3 = "went";
	std::string s4 = s1;
	s4.replace(3, 7, s3);
	std::cout << "\nPrepravljeni string je : " << s4 << ".\n\n";

	s3 = s1;
	s4 = s2;


	std::cout << "\n\n\n";
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
