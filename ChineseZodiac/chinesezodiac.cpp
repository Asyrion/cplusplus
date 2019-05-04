#include <iostream>
#include <cmath>

using namespace std;

const string animals[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"};
const string elements[] ={"Wood", "Fire", "Earth", "Metal", "Water"};

string getElement(int year)
{
    int element = floor((year-4)%10/2);
    return elements[element];
}

string getAnimal(int year)
{
    return animals[(year-4)%12];
}

string getYY(int year)
{
    if(year % 2 == 0) {
        return "yang";
    }else{
        return "yin";
    }
}

int main()
{
    std::cout << "\t\n\t\n\t******** CHINESE ZODIAC CALCULATOR ********\t\n\t\n\t\n";
    int years[] = {1935, 1938, 1968, 1972, 1976, 1996, 2017};

    // ranged based for-loop
    for(auto currentYear: years) {
        std::cout << "\t" << currentYear << " is the year of the " << getElement(currentYear) << " " << getAnimal(currentYear) << " (" << getYY(currentYear) << ")." << std::endl;
    }
    std::cout << "\t\n\t\n";
}
