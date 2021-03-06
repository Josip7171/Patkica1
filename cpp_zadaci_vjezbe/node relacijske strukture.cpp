// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>



struct Node {
	int value;		//vrijednost
	Node *next;		//pokazivac na sljedeci Node
};


void addElementEnd(Node *&head, int value);
void addElementFront(Node *&head, int value);
void displayList(Node *head);
void deleteHead(Node *&head);
void deleteTail(Node *&head);

int countElements(Node *head);					//zadatak1
void search_and_find(Node *head, int locator);	//zadatak2
void delete_this(Node *& head, int locator);	//zadatak3


int main()
{
	Node *head = nullptr;		//novi Node pokazivac koji pokazuje u nullptr
								//sve sto pokazuje u nullptr je zadnji clan niza
	Node *tail = nullptr;		//novi Node pokazivac koji pokazuje u nullptr
								//sve sto pokazuje u nullptr je zadnji clan niza
	addElementEnd(head, 5);		//dodajmo element u niz (na kraj!)
	addElementEnd(head, 2);		//dodajmo element u niz (na kraj!)
	addElementEnd(head, 7);		//dodajmo element u niz (na kraj!)
	displayList(head);


	//zadatak1
	std::cout << std::endl << countElements(head) << std::endl;

	//zadatak2
	int input = 0;
	std::cout << "\n koji element od njih " <<countElements(head) << " zelite pronaci? : ";
	std::cin >> input;
	search_and_find(head, input);

	//zadatak3
	std::cout << "\n koji element od njih " << countElements(head) << " zelite izbrisati? : ";
	std::cin >> input;
	delete_this(head, input);

	displayList(head);

	system("PAUSE");
	return 0;
}

void addElementEnd(Node *& head, int value) {
	Node *n = new Node;		//stvorimo novi pokazivac tipa Node
	n->value = value;		//njegov value pokazuje na value iz argumenta funkcije
	n->next = nullptr;		//njegov next pokazuje na nista (ponasa se kao zadnji clan)

	Node *temp = head;		//stvorimo novi pokazivac tipa Node koji je isto kao i head

	if (temp == nullptr) {	//ako je temp odnosno head zadnji clan (pokazuje na nullptr)
		temp = n;			//temp postaje n odnosno zadnji clan niza
		head = temp;		//head pokazuje na isto na sto i temp odnosno zadnji clan niza
	}
	else {					//ako temp nije zadnji clan odnosno postoje jos neki clanovi 
							// u nizu
		temp = head;		//temp pokazuje na isto na sto i head
		while (temp->next != NULL)	//dok tempov next ne pokazuje na nullptr odnosno dok
									// temp nije nasao zadnji clan
			temp = temp->next;	//temp pokazuje na sljedeci clan preko svog clana strukture
								// "next" koji pokazuje na sljedeci clan
		temp->next = n;		//temp postaje zadnji clan odnosno Node n kojeg smo stvorili na 
							//pocetku i kojeg smo postavili da je zadnji clan sa novom
							//vrijednoscu i pokazuje na nullptr (sto zadnji clan i treba ciniti)
	}
}

void displayList(Node *temp) {		//prosljedi temp? temp je head?????????????????
	if (temp == NULL)		//ako je temp NULL ili prazan, ispisi to!
		std::cout << "Lista je prazna!" << std::endl;
	else {
		while (temp != nullptr) {		// sve dok temp ne pokazuje prema nullptr odnosno
										//nije dosao do zadnje clana, printaj vrijednosti 
										//prema kojima pokazuje i i prebaci na sljedeci
			std::cout << temp->value << "\t";		//printaj
			temp = temp->next;					//prebaci na sljedeci. Ovo se koristi jer 
												//svaki clan Node strukture ima value i next
												//gdje next pokazuje na sljedeci clan ili 
												//nullptr ako je zadnji
		}
		std::cout << std::endl;
	}
}

void deleteHead(Node *&head) {	
	Node *temp = head;				//stvorimo novi Node tipa Node koji postaje kao i head

	if (temp != 0) {			//ako temp (koji je postao kao i head odnosno pokazuje na 
								//prvog clana
		head = temp->next;		//head postaje sljedeci clan od samog sebe pa dalje
		delete temp;			//izbrisi temp, head pokazuje na sljedeci clan i sve stima
	}
}

void addElementFront(Node *&head, int value) {	//posalji head, value za dodati
	Node *temp = new Node;				//stvori novi pokazivac tipa Node
	temp->value = value;				//tempov value postaje value iz parametra f
	temp->next = head;					//tempov next postaje headov next (nullptr)
	head = temp;						//head pokazuje gdje pokazuje temp - u novi clan
}


void deleteTail(Node *&head) {
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

//zadaci
//1. Napisite funkciju koja vraca broj elemenata u listi
int countElements(Node *head) {	
	Node *temp = head;
	int counter = 0;
	while (temp != nullptr) {
		temp = temp->next;
		counter++;
	}
	return counter;
}

//zadatak 2. Napisite funkciju za pretrazivanje povezane liste(element na poziciji
// i koliko elemenata ima
void search_and_find(Node *head, int locator) {
	Node *temp = head;
	int counter = 0;
	while (temp != nullptr) {
		temp = temp->next;
		counter++;
		if (counter == locator - 1)
			std::cout << "\n" << locator + 1 << " element je " << temp->value << ".\n";
	}
}


//zadatak 3 Napisi funkciju za brisanje n-tog elementa u listi
void delete_this(Node *& head, int locator) {
	Node *temp = head;
	int counter = 0;
	while (temp != nullptr && counter != locator-1) {
		temp = temp->next;
		counter++;
	}
	head = temp->next;		//head postaje sljedeci clan od samog sebe pa dalje
	delete temp;
}







