#include <iostream>
using namespace std;

int TestPrime(int prime)
{
    int score;
    
    score = prime % 1 == 0 ? score++ : score; 
    score = prime % 2 == 0 ? score-- : score;
    score = prime % 3 == 0 ? score-- : score;
    score = prime % 4 == 0 ? score-- : score;
    score = prime % 5 == 0 ? score-- : score;
    score = prime % 6 == 0 ? score-- : score;
    score = prime % 7 == 0 ? score-- : score;
    score = prime % 8 == 0 ? score-- : score;
    score = prime % 9 == 0 ? score-- : score;
    score = prime % 10 == 0 ? score-- : score;
    score = prime % 11 == 0 ? score-- : score;
    score = prime % 12 == 0 ? score-- : score;
    score = prime % 13 == 0 ? score-- : score;
    
    score = prime % prime == 0 ? score++ : score;
    
    if(score >= 2) 
    {
        cout << "The given number is a prime!\r\n";
    }
    else
    {
        cout << "The given number is not a prime...sorry!\r\n";
    }
}

int main(void) 
{
    // Our integer to test
    int prime;
    
    cout << "Let's play a game!\n";
    cout << "Type in a number and i will test if it's a prime:\n";
    cin >> prime;
    
    // Test the given integer
    TestPrime(prime);
    
    // Return sucess
    return 0;
}