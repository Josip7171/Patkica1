// apsolutna devijacija.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <math.h>       /* sqrt */
int main() {
	float a = 0, b = 0, c = 0, d = 0, e = 0, val1 = 0, val2 = 0;
	std::cin >> a >> b >> c >> d >> e;
	val1 = (a + b + c + d + e) / 5;
	a = pow((a - val1), 2);
	b = pow((b - val1), 2);
	c = pow((c - val1), 2);
	d = pow((d - val1), 2);
	e = pow((e - val1), 2);
	val2 = sqrt((a + b + c + d + e) / 5);
	std::cout << std::fixed << std::setprecision(2) << val1<< std::endl;
	std::cout << std::fixed << std::setprecision(2) << val2;


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
