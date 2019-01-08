// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


//KLASE
class Node {
	int value;
	Node *next;
	static int node_count;
	Node *head = nullptr;
	Node *tail = nullptr;

public:
	static void number_of_nodes();
	Node();
	Node get();
	void set(int value);
};


class PovezanaLista {
	Node *temp;
	Node node1;
	Node *n;

public:
	PovezanaLista();
	void insertElementEnd(int value);
	void insertElementFront(int value);
	void deleteTail();
	void deleteHead();
	void displayList();
};


//DEFINICIJE FUNKCIJA IZ KLASE
Node Node::get() {
	return *next;
}

void Node::set(int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void Node::number_of_nodes() {
	std::cout << "\n\nBroj nodova je " << node_count << ".\n";
}

Node::Node() {
	std::cout << "\nJa sam konstruktor.\n";
	node_count++;
}


/*
void PovezanaLista::insertElementFront(int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void PovezanaLista::insertElementEnd(int value) {
	n = new Node;
	this->value = value;
	n->next = nullptr;
	
	temp = head;

	if (temp == nullptr) {
		temp = n;
		head = temp;
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = n;
	}
}
*/
void PovezanaLista::displayList() {
	temp = node1.next;
	if (temp == NULL)
		std::cout << "\nLista je prazna!\n";
	else {
		while (temp != nullptr) {
			std::cout << temp->value << "\t";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
}

PovezanaLista::PovezanaLista() {
	node1 = node1.get();
}
/*
void PovezanaLista::deleteHead() {
	Node *temp = head;

	if (temp != 0) {
		head = temp->next;
		delete temp;
	}
}

void PovezanaLista::deleteTail() {
	Node *temp = head;
	if (head->next == nullptr) {
		head = nullptr;
		delete temp;
	}
	else {
		Node *prev = nullptr;
		while (temp->next != nullptr) {
			prev = temp;
			temp = temp->next;
		}
		prev->next = nullptr;
		delete temp;
	}
}

void Node::number_of_nodes() {
	std::cout << "\n\nBroj nodova je " << node_count << std::endl;
}

Node::Node() {
	node_count++;
	head = nullptr;
	tail = nullptr;
}

void get() {

}

void set() {

}

int Node::node_count = 0;



*/
//INT MAIN

int Node::node_count = 0;


int main()
{

	Node node1;
	Node node2;
	node1.number_of_nodes();

	node1.set(1);
	node1.set(2);
	node1.set(3);
	
	//node1.insertElementEnd(1);
	//node1.insertElementEnd(2);
	//node1.insertElementEnd(3);
	
	//node1.displayList(node1.head);

	//Node::number_of_nodes();
}






