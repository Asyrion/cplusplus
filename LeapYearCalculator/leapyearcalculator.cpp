#include <iostream>
using namespace std;

int TestLeapYearNumber(int year)
{
    int score = 0;
    
    // should be divisible by 4
    if(year % 4 == 0) {
        score++;
    }else{
        cout << "The year " << year << " is not divisible by 4!\n";
    }
    
    // should be divisible by 100
    if(year % 100 == 0) {
        score++;
    }else{
        cout << "The year " << year << " is not divisible by 100!\n";
    }
    
    // should be divisible by 400
    if(year % 400 == 0) {
        score++;
    }else{
        cout << "The year " << year << " is not divisible by 400!\n";
    }
    
    if(score == 3) {
        cout << "The year " << year << " was/is a leap-year.\n";
    }else{
        cout << "The year " << year << " was/is not a leap-year. Please try again...\n";
    }
}

/**
 * Test a given number if it is a prime
 * 
 */
int main(void) 
{
    int year;
    
    std::cout << "Welcome to the leap-year-calculator! \r\n";
    std::cout << "Please type in a year to test: \n";
    std::cin >> year;
    
    TestLeapYearNumber(year);
    
    return 0;
}