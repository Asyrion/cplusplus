// Critter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include <string>

using namespace std;


class Critter
{
public:
	int m_Hunger;
	int m_Boredom;
	string m_Name;

	static int s_Total;

	int m_TimesFeeded;
	int m_TimesPlayed;

	// constructor
	Critter(int hunger = 0, int boredom = 0, string name = "");

	void Talk(string name = "");
	void Eat(int hunger = 5);
	void Play(int boredom = 5);
private:
	int GetMood() const;
	void PassTime();
};

int Critter::s_Total = 0;

// constructor
Critter::Critter(int hunger, int boredom, string name)
{
	cout << "\t A new critter was born! \n";
	
	m_Hunger  = hunger;
	m_Boredom = boredom;
	m_Name    = name;

	++s_Total;
}

void Critter::Talk(string name)
{
	cout << "\t I am " << m_Name << " and i am " << GetMood() << "\n";
}

void Critter::Eat(int hunger)
{
	m_Hunger += hunger;
	
	cout << "\t That was tasty. Thank you! \n";
	cout << "\t\n\t\n\t\n \t Boredom: " << m_Hunger << "\n";
	if (m_TimesFeeded % 4 == 0)
	{
		Critter::PassTime();
	}
	++m_TimesFeeded;
}

void Critter::Play(int boredom)
{
	m_Boredom += boredom;

	cout << "\t Yay that was fun. Let's do some more... \n";
	cout << "\t\n\t\n\t\n \t Boredom: " << m_Boredom << "\n";
	if (m_TimesPlayed % 4 == 0)
	{
		Critter::PassTime();
	}
	++m_TimesPlayed;
}

void Critter::PassTime()
{
	m_Hunger -= 10;
	m_Boredom -= 10;
	cout << "\t Some days have passed. Your critter looks curious. \n";
}

int Critter::GetMood() const
{

	switch (((m_Hunger / m_Boredom) % 4))
	{
	case 0:
		cout << "\t Total happy. You are such a good master! \n";
		return 1;
		break;
	case 1:
		cout << "\t relatively happy today! \n";
		return 1;
		break;
	case 2:
		cout << "\t not so happy... \n";
		return 1;
		break;
	case 3:
		cout << "\t mad. Why you dont feed me? \n ";
		return 1;
		break;

	}
}

int main()
{
	Critter critter1(25, 25, "Azzazel");
	bool quit = false;
	int choice;

	cout << "\t Welcome to the Critter Programm!  \n";

	while (!quit)
	{
		cout << "\t\n\t\n \t Do you want to: \n";
		cout << "\t 1. Quit \n";
		cout << "\t 2. Feed \n";
		cout << "\t 3. Play \n";
		cout << "\t 4. Talk \n";
		
		cout << "\t"; cin >> choice;

		switch (choice)
		{
		case 1:
			quit = true;
			break;
		case 2:
			critter1.Eat();
			break;
		case 3:
			critter1.Play();
			break;
		case 4:
			critter1.Talk();
			break;
		}
	}
	
    return 0;
}

