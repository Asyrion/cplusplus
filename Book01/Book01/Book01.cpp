// Book01.cpp : Defines the entry point for the console application.
//
#include <cstdlib>
#include <ctime>
#include "stdafx.h"
#include <iostream>
// Using directive
using namespace std;

// For saving memory
using std::cout;
using std::cin;

int LostFortune()
{
	int group;
	int days;
	// I never know how much to allocate
	char name[100];


	cout << "\t ********* LOST FORTUNE ********\t\n";
	cout << "\tPlease enter a number:    ";
	cin >> group;
	cout << "\t\n\tPlease enter a number smaller then the last one:    ";
	cin >> days;
	cout << "\t\n\t\n\tPlease enter your name:    ";
	cin >> name;

	cout << "\t\n\t\n\t Once an epic tale took place when " << group << " brave hunters \n \t gathered together to hunt down the " << (days / 2) << " Riders of the \n \t apocalypse.\t\n";
	cout << "\t " << name << " searched for " << (group - 1) << " wild and trained hunters that \n \t were eager enough to try the act of slaying these \n  \t obscure creatures.\t\n";
	
	return 0;
}


int RandomNumberGenerator()
{
	srand(static_cast<unsigned int>(time(0))); // seed random number generator

	int randomNumber = rand(); // generate random number

	int dice = (randomNumber % 6) + 1;

	cout << "You rolled: " << dice << "!";
}

int main()
{
	// Liste von Items
	enum Itemtypes { Axes, Swords, Shields, Gloves };
	Itemtypes woodenAxe = Axes;

	// Beispiel einer weiteren Enumeration
	//enum Itemattack {Axes = 20, Swords = 25, Shields = 0, Gloves = 10};

	cout << "\t\n\t\n\t******** WELCOME TO THE C++ PLAYGROUND ********\n";
	cout << "\t Here are some options to choose between: \n";
	cout << "\t Press the according number to choose the option\n";
	cout << "\t 1.Lost Fortune \n";
	cout << "\t 2.Random Number Generator";
	
	return 0;

}

