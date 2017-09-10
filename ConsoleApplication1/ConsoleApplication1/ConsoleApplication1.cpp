// hello_world_console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



#include <cstdio>


int TestPrimeNumber(int number)
{
	int divisionone, divisiontwo, divisionthree, divisionfour, divisionfive, divisionsix, divisionseven, divisioneight, divisionnine;
	int divisionten, divisioneleven, divisiontwelve, divisionthirteen;
	int score = 0;

	divisionone = number % 1;
	divisiontwo = number % 2;
	divisionthree = number % 3;
	divisionfour = number % 4;
	divisionfive = number % 5;
	divisionsix = number % 6;
	divisionseven = number % 7;
	divisioneight = number % 8;
	divisionnine = number % 9;

	score = divisionone == 0 ? score++ : score = score;
	score = divisiontwo == 0 ? score-- : score = score;
	score = divisionthree == 0 ? score-- : score = score;
	score = divisionfour == 0 ? score-- : score = score;
	score = divisionfive == 0 ? score-- : score = score;
	score = divisionsix == 0 ? score-- : score = score;
	score = divisionseven == 0 ? score-- : score = score;
	score = divisioneight == 0 ? score-- : score = score;
	score = divisionnine == 0 ? score-- : score = score;
	/*
	score = divisionten == 0 ? score-- : score = score;
	score = divisioneleven == 0 ? score-- : score = score;
	score = divisiontwelve == 0 ? score-- : score = score;
	score = divisionthirteen == 0 ? score-- : score = score;
	*/

	if (number % number == 0)
	{
		score++;
		
		if (score == 2)
		{
			std::cout << number << " is a prime number!";
			return number;
		}
		else 
		{
			std::cout << number << " is not a prime number. Please try again!";
			return number;
		}
	}
	else
	{
		return number;
	}
}

int main()
{
	// Mit Klammern kann der Gültigkeitsbereich von Variablen etc. gesetzt werden.
	// Gültigkeitsbereich 1
	{
		int teststring;

		std::cout << "This program will test for prime numbers.\n";
		std::cout << "Please type in a number and hit enter.\n";
		std::cin >> teststring;
		int testring = TestPrimeNumber(teststring);
	}

	// Preventing the command line from closing
	// cin.clear();
	// cin.ignore(cin.rdbuf()->in_avail());

	return 0;
}

