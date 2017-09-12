// Book01.cpp : Defines the entry point for the console application.
//
#include <cstdlib>
#include <ctime>
#include "stdafx.h"
#include <iostream>
#include <string>
// Using directive
using namespace std;

#include "Menu.h"

// For saving memory
using std::cout;
using std::cin;

/**
* main function executes when code is compiled
*
* Displays a menu of different c++ classes that contain interaction.
*/
int main()
{
	int choice;
	string teststring = "Das hier ist ein String.";
	// Liste von Items
	enum Itemtypes { Axes, Swords, Shields, Gloves };
	Itemtypes woodenAxe = Axes;

	// Beispiel einer weiteren Enumeration
	//enum Itemattack {Axes = 20, Swords = 25, Shields = 0, Gloves = 10};

	MenuController::write("\t\n\t******** WELCOME TO THE C++ PLAYGROUND ********", 0, false, "");
	MenuController::write(" Here are some options to choose between: ", 0, false, "");
	MenuController::write(" Press the according number to choose the option", 0, false, "");
	MenuController::write(" 1.Lost Fortune ", 0, false, "");
	MenuController::write(" 2.Random Number Generator", 0, false, "");
	MenuController::write(" 3.Guess My Number", 0, false, "");
	MenuController::write(" 4.Calculate Revenue", 0, false, "");
	MenuController::write(" 5.Hero Inventory", 0, false, "");
	MenuController::write(" 6.Class Test", 0, false, "");
	MenuController::write(" What is your choice?", 0, false, "");cin >> choice;

	MenuController::Menue(choice);
	
	return 0;

}

