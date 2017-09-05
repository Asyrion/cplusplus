// Namespaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream> using namespace std;

namespace Test
{
	int firstInt = 1;
	int secondInt = 55;

	int GetInt() { return 0; }
}

namespace Blubfish
{
	int firstInt = 12;

	int GetInt() { return 0; }
}

int main(int args, char* argv[])
{

	std::cout << "Namespace Test\n - firstInt: " << Test::firstInt << "\n - secondInt: " << Test::secondInt << "\n";
	std::cout << "Namespace Blubfish\n - firstInt: " << Blubfish::firstInt << "\n";
    
	return 0;
}

