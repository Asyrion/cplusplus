// The Header file for our Menu.cpp

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
		case 7:
			VectorTest();

			break;
		}

		return 0;
	}

		
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

	static int VectorTest()
	{
		vector <string> Items;
		Items.push_back("Axes");
		MenuController::write("Axes added to inventory!", 0, false, "");

		Items.push_back("Swords");
		MenuController::write("Swords added to inventory!", 0, false, "");

		Items.push_back("Shields");
		MenuController::write("Shields added to inventory!", 0, false, "");

		Items.push_back("Gloves");
		MenuController::write("Gloves added to inventory!", 0, false, "");

		Items.pop_back();
		MenuController::write("Removed Gloves from inventory!", 0, false, "");

		for (unsigned int i = 0; i < Items.size(); ++i) {
			cout << Items[i];
		}
		
		return 0;
	}

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

	static int RandomNumberGenerator()
	{
		// srand(static_cast<unsigned int>(time(0))); // seed random number generator

		int randomNumber = rand(); // generate random number

		int dice = (randomNumber % 6) + 1;

		write("You rolled: ", dice, false, "!");

		return 0;
	}

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
