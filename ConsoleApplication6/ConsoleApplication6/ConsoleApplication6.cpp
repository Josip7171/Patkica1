// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


class Singleton {
	static bool instance_flag;
	static Singleton *instance;
	Singleton() {

	}
public:
	static Singleton *get_instance();
	void my_method();
	~Singleton() {
		instance_flag = false;
	}
};


bool Singleton::instance_flag = false;
Singleton *Singleton::instance = nullptr;

Singleton *Singleton::get_instance() {
	if (!instance_flag) {
		instance = new Singleton();
		instance_flag = true;
	}

	return instance;
}

void Singleton::my_method() {
	std::cout << "Samo sam jedan na svijetu i to na adresi: " << this << std::endl;
}

int main()
{
	Singleton* one_and_only = Singleton::get_instance();
	one_and_only->my_method();

	Singleton* one_and_only2 = Singleton::get_instance();
	one_and_only2->my_method();
}





