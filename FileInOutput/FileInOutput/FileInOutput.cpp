// FileInOutput.cpp : Defines the entry point for the console application.
//

#include <iostream>; 


// Include libraries for writing and reading from files
#include <istream>
#include <ostream>

#include "stdafx.h"
using namespace std;

int main()
{
	int action;
	char filename;

	std::cout << "Welcome to the read and write project!\n";
	std::cout << "Do you wish to READ (type 1) or WRITE (type 2) a file?\n";
	std::cin >> action;

	if (action == 1) 
	{
		std::cout << "Please enter the absolute path to the file:\n";
		std::cin >> filename;
	}
	else if (action == "WRITE" || action == "write") 
	{
		std::cout << "Please enter the path and name of the file you want to create:\n";
		std::cin >> filename;
	}

    return 0;
}

