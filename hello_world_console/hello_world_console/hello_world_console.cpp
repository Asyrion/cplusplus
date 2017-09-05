// hello_world_console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



#include <cstdio>


int main()
{
	char teststring;
	
	std::cout << "Tell me your name: ";
	std::cin >> teststring;
	std::cout << "Hello " << teststring << "!";
	

	// Preventing the command line from closing
	// cin.clear();
	// cin.ignore(cin.rdbuf()->in_avail());

	return 0;
}

