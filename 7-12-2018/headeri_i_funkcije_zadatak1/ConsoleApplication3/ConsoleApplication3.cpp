#include "pch.h"
#include <iostream>
#include "mat.h"

void test_f();

int main(){
	test_f();
}

void test_f() {
	std::cout << "Unesite 2 broja : ";
	int a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << "\n" << zbroji(a, b);
}

