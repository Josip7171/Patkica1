// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Hello World!\n"; 

	std::cout << "Upisi 2 broja : ";
	double broj1 = 1, broj2 = 2;
	std::cin >> broj1 >> broj2;
	std::cout << "Upisani su <" << broj1 << "> i <" << broj2 << ">. Zbroj je " << broj1 + broj2;
	std::cout << ", razlika je : " << broj1 - broj2 << ", produkt je " << broj1 * broj2;
	std::cout << ", kvocijent je : " << std::fixed << std::setprecision(2) << broj1 / broj2 << "  . \n";

	std::cout << "\n\nUpisi cetveroznamenkasti broj : ";
	int broj3 = 1;
	std::cin >> broj3;
	int x1 = broj3 / 1000;
	std::cout << "\nIspis u tisucicama je : " << x1;
	int x2 = (broj3 - (x1 * 1000))/100;
	std::cout << "\nIspis u stoticama je : " << x2;
	int x3 = (broj3 - (x1 * 1000) - (x2 * 100)) / 10;
	std::cout << "\nIspis u deseticama je : " << std::setprecision(0) << x3;
	int x4 = (broj3 - (x1 * 1000) - (x2 * 100) - (x3 * 10))/1;
	std::cout << "\nIspis u jedinicama je : " << x4;
	std::cout << "\nIspis i desitcima tisuca je : " << std::setprecision(0) << std::fixed << broj3;


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
