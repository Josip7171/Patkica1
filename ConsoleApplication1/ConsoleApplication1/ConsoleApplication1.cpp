// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>



int give_random(int reminder, int corrector);
void game_one();
void game_two();
void game_three();
void game_four();
void call_it_quits();
void gui();
void show_highscore();
char randoms_to_chars(int value);
void double_or_nothing_calc(int &price);
char number_to_kind(int number);
void deck_converter(int &value, char &kind);


struct User {
	int credit = 5000;
	std::string ime;
	std::string prezime;
	int id;
};
User user_info;


int main() {
	std::srand(time(NULL));
	int select = 0;
	std::cout << "Unesite id, vase ime i prezime: ";
	std::cin >> user_info.id >> user_info.ime >> user_info.prezime;
	do {
		gui();
		std::cout << "\n1. Game one\n2. Game two\n3. Game three\n4. Game four\n5. Show Highscore\n0. Cash Out\n\n: ";
		std::cin >> select;
		switch (select) {
		case 0:
			select = 0;
			break;
		case 1:
			game_one();
			break;
		case 2:
			game_two();
			break;
		case 3:
			game_three();
			break;
		case 4:
			game_four();
			break;
		case 5:
			show_highscore();
		default:
			std::cout << "\n\nPogresan unos!";
			break;
		}
	} while (select != 0);

	std::cout << std::endl;
	call_it_quits();
}




void game_one() {
	//std::srand(time(NULL));
	gui();
	int input, number1, number2, number3, number4;
	std::cout << "\nWelcome to Game One!";
	std::cout << "\nFour 1's = 2000 credit\nFour 2's = 4000 credit";
	std::cout << "\nFour 3's = 6000 credit\nFour 4's = 20000 redits!";
	std::cout << "\n1. Spin The Wheel\n2.Leave\n\n: ";
	std::cin >> input;
	while (input == 1 && user_info.credit > 49) {
		for (int i = 0; i < 20; i++) {
			number1 = give_random(4, 1);
			number2 = give_random(4, 1);
			number3 = give_random(4, 1);
			number4 = give_random(4, 1);
		}
		system("cls");
		std::cout << "//\t" << randoms_to_chars(number1) << "\t//\t" << randoms_to_chars(number2) << "\t//\t" << randoms_to_chars(number3) << "\t//\t" << randoms_to_chars(number4) << "\t//";

		if (number1 == number2 && number1 == number3 && number1 == number4 && number1 != 4) {
			std::cout << "\a\n\nWIN!\nYou got " << number1 * 2000 << " credits!";
			user_info.credit += (number1 * 2000);
		}
		else if (number1 == number2 && number1 == number3 && number1 == number4 && number1 == 4) {
			std::cout << "\a\n\nWIN!\nYou got " << number1 * 5000 << " credits!";
			user_info.credit += (number1 * 5000);
		}
		else {
			std::cout << "\n\nLose.\nYou lost 50 credits!";
			user_info.credit -= 50;
			std::cout << "\nTotal credit = " << user_info.credit << ".";
		}
		std::cout << "\n\nRepeat?\n1. Yes\n2. No\n\n: ";
		std::cin >> input;
	}

	std::cout << "\n\nYou dont have enough credits! (" << user_info.credit << ")";
	if (user_info.credit == 0) {
		call_it_quits();
	}
}

void game_two() {
	int input = 0, wage = 0, winning_number = 0;
	std::vector<int> inputs, wages;
	gui();
	std::cout << "\nWelcome to Game Two!";
	std::cout << "\nThis is Roulette!\n";
	do {
		std::cout << "\nYour wages : \n";
		for (int i = 0; i < inputs.size(); i++) {
			std::cout << "Number " << inputs[i] << " = " << wages[i] << " credits. \n";
		}
		std::cout << "\nPut wages on numbers from 0 to 36! ( enter 37 to start the game ) : ";
		std::cin >> input;
		if (input <= 36 && input >= 0) {
			inputs.push_back(input);
			std::cout << "\nInput your wage on number " << input << " (you have " << user_info.credit << " credits) : ";
			std::cin >> wage;
			if (wage < 0) {
				std::cout << "\n\n You do not have enough credits!";
				main();
			}
			else {
				user_info.credit -= wage;
				wages.push_back(wage);
			}
		}
		else {
			std::cout << "\n\nInvalid input. Try Again";
		}
		
		gui();
	} while (input != 37 && input <= 36 && input >= 0);


	int counter = 0;
	if (input == 37) {
		winning_number = give_random(36, 0);
		for (int i = 0; i < inputs.size(); i++) {
			if (inputs[i] == winning_number) {
				std::cout << "\nYour wages : \n";
				for (int i = 0; i < inputs.size(); i++)
					std::cout << "Number " << inputs[i] << " = " << wages[i] << " credits. \n";
				std::cout << "\n\n\aYou Won!\nWinning number is " << winning_number << " and you put wage of " << wages[i] << " credits.";
				std::cout << "\nYou got " << wages[i] * 36 << " credits! (You have " << user_info.credit << " credits. ";
				user_info.credit += (wages[i] * 36);
				counter++;
			}
		}
	}
	if (counter == 0) {
		std::cout << "\n\nNumber droped is " << winning_number << ". ";
		std::cout << "\n\nYour wages : \n";
		for (int i = 0; i < inputs.size(); i++) {
			std::cout << "Number " << inputs[i] << " = " << wages[i] << " credits. \n";
		}
		std::cout << "\nYou lose. \nTry again! You will surely lose!\n";
	}
	system("PAUSE");

}

void game_three() {
	gui();
	int wage = 0, game_runner = 1, house_number1 = 0, house_number2 = 0, given_number1 = 0, given_number2  = 0;
	std::cout << "\nThrow A Dice Game!";
	std::cout << "\nWin = Number that you got * Your Wage!";
	std::cout << "\nDraw = You get Your Wage back!";
	std::cout << "\nLose = You lose Your Wage!";
	std::cout << "\nPlay? (1. YES, 2.NO) : ";
	std::cin >> game_runner;
	while (game_runner == 1) {
		gui();
		std::cout << "\n\nEnter Your Wage : ";
		std::cin >> wage;
		if (wage > user_info.credit) {
			std::cout << "\n\nNot enough credits!";
			break;
		}
		house_number1 = give_random(6, 1);
		std::cout << "\nHouse got " << house_number1 << "!\n";
		system("PAUSE");
		given_number1 = give_random(6, 1);
		std::cout << "\nYou got " << given_number1 << "!\n";
		system("PAUSE");
		house_number2 = give_random(6, 1);
		std::cout << "\nHouse got " << house_number2 << "!\n";
		system("PAUSE");
		given_number2 = give_random(6, 1);
		std::cout << "\nYou got " << given_number2 << "!\n";
		system("PAUSE");
		if ((house_number1 + house_number2) < (given_number1 + given_number2)) {
			std::cout << "\n\nYou Got " << (given_number1 + given_number2) << " and House Got " << house_number1 + house_number2 << "!";
			std::cout << "\nYou Win!\nWon Credits : " << wage * (given_number1 + given_number2) << ".\nCurrent credits : " << user_info.credit + (wage * (given_number1 + given_number2)) << ".\n";
			user_info.credit += (wage * (given_number1 + given_number2));
		}
		else if ((house_number1 + house_number2) > (given_number1 + given_number2)) {
			std::cout << "\n\nYou Got " << (given_number1 + given_number2) << " and House Got " << house_number1 + house_number2 << "!";
			std::cout << "\nYou Lose!\nCurrent credits : " << user_info.credit - wage << ".\n";
			user_info.credit -= wage;
		}
		else if ((house_number1 + house_number2) == given_number1 + given_number2) {
			std::cout << "\n\nYou Got " << (given_number1 + given_number2) << " and House Got " << house_number1 + house_number2 << "!";
			std::cout << "\nDraw!\nCurrent credits : " << user_info.credit << ".\n";
		}
		else {
			std::cout << "\n\nWrong input!";
		}
		std::cout << "\n\nPlay? (1. YES, 2.NO) : ";
		std::cin >> game_runner;
	}
}

void game_four() {
	gui();
	int deck[52], random_card, random_card2;
	int input = 0;
	char kind;
	for (int i = 0; i < 52; i++) deck[i] = i + 1;
	int input = 0, price = 0;
	std::cout << "\nThis Is Double Or Nothing!";
	std::cout << "\nYou Draw One Card and House Draws One Card.\nHigher Card Wins.\nAfter Win, Chose to Go For Double Or Quit!\nPlay? (1. Yes, 2. No) : ";
	std::cin >> input;
	while (input != 2) {
		gui();
		user_info.credit -= 100;
		price = 100;
		
		random_card = give_random(52, 1);
		deck_converter(random_card, kind);
		std::cout << "\nYou Got " << random_card << " " << kind << ".";


		random_card2 = give_random(52, 1);
		deck_converter(random_card2, kind);
		std::cout << "\nHouse Got " << random_card2 << " " << kind << ".";


		if (random_card > random_card2) {
			std::cout << "\n\nYou Win!\n";
			price *= 2;
			std::cout << "\nYou Won " << price << " credits.";
			std::cout << "\nDouble Or Nothing? 1.YES 2.NO : ";
			if (input == 1) {
				//pozovi samu sebe da se izvrti opet funkcija
			}
			else if (input == 2) {
				user_info.credit += price;
			}
		}
		else if (random_card < random_card2) {
			std::cout << "\n\nYou Lose!\n";
		}
		else if (random_card == random_card2) {
			std::cout << "\n\nDraw.\n";
		}
		
		std::cout << "\n\nPlay again? 1. YES, 2. NO : ";
		std::cin >> input;
	}
	std::cout << std::endl;
	system("PAUSE");
}




int give_random(int reminder = 4, int corrector = 1) {
	return (std::rand() % reminder + corrector);
}

void call_it_quits() {
	gui();
	std::cout << "\n\nUkupno ste osvojili " << user_info.credit << " kredita.\n\n";
	system("PAUSE");
	std::string save_data;
	save_data = "\n" + std::to_string(user_info.id) + " " + user_info.ime + " " + user_info.prezime + " - " + std::to_string(user_info.credit);
	std::ofstream output;
	output.open("highscore.txt", std::ios::out | std::ios::app);
	output << save_data;
	output.close();
}

void gui() {
	system("cls");
	std::cout << "CASINO Games! You Can NOT win!";
	std::cout << "\nCREDITS : " << user_info.credit;
	std::cout << "\n--C--A--S--I--N--O--O--O--O--O-- \n";
}

void show_highscore() {
	gui();
	std::vector<std::string> data;
	std::string line;
	std::ifstream input("highscore.txt");
	while (input) {
		std::getline(input, line);
		data.push_back(line);
	}

	input.close();
	for (int i = 0; i < data.size(); i++) {
		std::cout << data[i] << std::endl;
	}
	system("PAUSE");
}

char randoms_to_chars(int value) {
	switch (value) {
	case 1:
		return '+';
	case 2:
		return 'X';
	case 3:
		return 'O';
	case 4:
		return '*';
	default:
		break;
	}
}

char number_to_kind(int number) {
	switch (number) {
	case 1:
		return 'H';
	case 2:
		return 'T';
	case 3:
		return 'P';
	case 4:
		return 'K';
	default:
		break;
	}
}

void deck_converter(int &value, char &kind) {
	int *p_value = &value;
	char *p_kind = &kind;
	if (value <= 13) {
		*p_value = value;
		*p_kind = 'H';
	}
	else if (value > 13 && value <= 26) {
		*p_value = value % 13 +1;
		*p_kind = 'D';
	}
	else if (value > 26 && value <= 39) {
		*p_value = value % 13 + 1;
		*p_kind = 'S';
	}
	else if (value > 39 && value <= 51) {
		*p_value = value % 13 + 1;
		*p_kind = 'C';
	}
}