#include "Menu.h"
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


// The Menu class used in Book01.cpp
class MenuController
{
public:
	static int Menue(int choice)
	{
		switch (choice)
		{
		case 1:
			LostFortune();

			break;
		case 2:
			RandomNumberGenerator();

			break;
		case 3:
			GuessMyNumber();

			break;
		case 4:
			int WeeklySales;
			cout << "\t Please enter the weekly sales: "; cin >> WeeklySales;
			CalcRevenue(WeeklySales);

			break;
		case 5:
			HeroInventory();

			break;
		case 6:
			OuputTest();

			break;
		}
		return 0;
	}

	/**
	* Write - Function
	*
	* Used to make simple output in this file.
	*
	* @param char text_1[1000] Our first text to output.
	* @param int  arg_1        A number to display with the text.
	* @param bool arg_2        A boolean to display with the text.
	* @param char text_2[1000] Our second text, so text ist wrapping around our options.
	*
	* @return 0 Return success code
	*/
	static int write(char text_1[1000] = "", int arg_1 = 0, bool arg_2 = false, char text_2[1000] = "")
	{
		int loc_arg_1 = (arg_1 != 0 ? arg_1 : NULL);
		bool loc_arg_2 = (arg_2 != false ? arg_2 : NULL);

		if (loc_arg_1 != 0 && loc_arg_2 != false)
		{
			cout << "\t" << text_1 << loc_arg_1 << loc_arg_2 << text_2 << "\n";
		}
		else if (loc_arg_1 != 0)
		{
			cout << "\t" << text_1 << loc_arg_1 << text_2 << "\n";
		}
		else if (loc_arg_2 != false)
		{
			cout << "\t" << text_1 << loc_arg_2 << text_2 << "\n";
		}
		else
		{
			cout << "\t" << text_1 << text_2 << "\n";
		}


		return 0;
	}


private:

	static int OuputTest()
	{
		cout << "\t [DEBUG] - Test output.";
		return 0;
	}

	/**
	* CalcRevenue - Function
	*
	* Calculate the revenue based on the weekly sales for
	* three models of revenue.
	*
	* @param int WeeklySales The amount of sales that were completed this week.
	*
	* @return 0 Return success code.
	*/
	static int CalcRevenue(int WeeklySales)
	{
		int PerHour;
		int Revenue;

		// Calculation method 1
		{
			cout << "\tYour revenue is $600.\n";
		}

		// Calculation method 2
		{
			int PerHour = 7;
			int Revenue = (PerHour * 40) + (((WeeklySales * 225) / 100) * 10);

			cout << "\tYour revenue is $" << Revenue << ".\n";
		}

		// Calculation method 3
		{
			int Revenue = (WeeklySales * 20) + (((WeeklySales * 225) / 100) * 20);

			cout << "\tYour revenue is $600.\n";
		}

		return 0;
	}

	/**
	* Lost Fortune - Text Game
	*
	* The computer asks for sóme numbers and a name and then displays
	* a individual text basded of these numbers and the name.
	*
	* @return 0 Return success code.
	*/
	static int LostFortune()
	{
		int group;
		int days;
		// I never know how much to allocate
		char name[100];


		write(" ********* LOST FORTUNE ********", 0, false, "");
		write("Please enter a number:    ", 0, false, "");
		cin >> group;
		write("\tPlease enter a number smaller then the last one:    ", 0, false, "");
		cin >> days;
		write("\t\n\tPlease enter your name:    ", 0, false, "");
		cin >> name;

		cout << "\t\n\t\n\t Once an epic tale took place when " << group << " brave hunters \n \t gathered together to hunt down the " << (days / 2) << " Riders of the \n \t apocalypse.\t\n";
		cout << "\t " << name << " searched for " << (group - 1) << " wild and trained hunters that \n \t were eager enough to try the act of slaying these \n  \t obscure creatures.\t\n";

		return 0;
	}

	/**
	* RandomNumberGenerator - Function
	*
	* Generate a random number and display a dice equivalent.
	*
	* @return 0 Return success code.
	*/
	static int RandomNumberGenerator()
	{
		// srand(static_cast<unsigned int>(time(0))); // seed random number generator

		int randomNumber = rand(); // generate random number

		int dice = (randomNumber % 6) + 1;

		write("You rolled: ", dice, false, "!");

		return 0;
	}

	/**
	* GuessMyNumber()  - Game
	*
	* The computer asks you to choose a number between 1 and 100
	* and tries to guess your number untill he finds it.
	*
	* @return 0 Return success code.
	*/
	static int GuessMyNumber()
	{
		int guess;
		char answer;
		bool success = false;

		write(" ******* Welcome to Guess My Number! *******", 0, false, "");
		write("Please choose a number between 1 and 100.", 0, false, "");

		guess = rand();
		guess = (guess % 100) + 1;

		write("Was your number ", guess, false, "?   (y/n)");
		cin >> answer;

		if (answer == 'n')
		{
			while (success == false)
			{
				guess = rand();
				guess = (guess % 100) + 1;

				write("Was your number ", guess, false, "?   (y/n)");
				cin >> answer;

				if (answer == 'y')
				{
					success = true;
				}
			}
		}

		if (answer == 'y' && success == true || success == true) {
			write("That was easy.", 0, false, "");
		}

		return 0;

	}

	/*
	* HeroInventory - Function
	*
	* Demonstrating the use of arrays to hold multiple string objects.
	*
	*/
	static int HeroInventory()
	{
		const int MAX_ITEMS = 10;
		string inventory[MAX_ITEMS];
		int numItems = 0;


		// Alternate way for filling an array
		// string inventory[MAX_ITEMS] = {"Sword", "Armor", "Shield"};


		inventory[numItems++] = "Sword";
		inventory[numItems++] = "Armor";
		inventory[numItems++] = "Shield";

		cout << "\t Your inventory is filled with: \n";
		cout << "\t 1. " << inventory[0] << "\n";
		cout << "\t 2." << inventory[1] << "\n";
		cout << "\t 3." << inventory[2] << "\n";

		return 0;
	}
};

