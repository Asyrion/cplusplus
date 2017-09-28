// Hangman Game
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <cctype>

#include <cstdlib>

//#include "ctype.h"
#include "math.h"

using namespace std;

// Our entry point
int main()
{
    srand(unsigned(time(0)));
    
    // All our so far used letters
    string usedLetters = "";
    
    // max guesses till game ends
    const int kMAX_GUESSES = 10;

    // total guesses made
    int guessesMade = 0;
    
    // Reference to our total guesses made
    int& rguessesMade = guessesMade;

    size_t position;
    size_t position_2;
    
    // Initialize Vector
    vector<string> Words;

    // Add String objects to Vector
    Words.push_back("HANGMAN");
    Words.push_back("ROMAN");
    Words.push_back("SIMPLESENTENCE");

    /**
     * Let the computer read words 
     * from a file and then randomly 
     * choose one, to make each game
     * diverse.
     */
    
    // Randomize output
    random_shuffle(Words.begin(), Words.end());

    // Assign a random word
    const string word = Words[0];
    
    // Assign our word that we guessed so far
    string soFar = "";
    
    for(int i = 0; i < word.size(); ++i) {
        soFar += "_"; 
    }

    // The guess our player enters
    unsigned char guess;
        
    cout << "\n\n\n******** WELCOME TO HANGMAN ******* \n";
    cout << " You have made " << guessesMade << " guesses. \n";
    cout << " This means you have " << (kMAX_GUESSES - guessesMade) << " guesses left before you will be hanged! \n";
    cout << "\t\n\t\n The word to search is: " << word << "\n\t\n\n\n";
    cout << "\t\n\t\n So far the word is: " << soFar << "\n\t\n";
    
    // The game loop
    while(guessesMade < kMAX_GUESSES && soFar != word)
    {
        cout << "Please enter a guess : "; cin >> guess;
        cout << "\n You entered " << guess << "\n";
        
        guess      = toupper(guess);
        position   = (word.find_first_of(guess) + 1); 
        position_2 = (word.find_last_of(guess) + 1); 
        
        if(word.find_first_of(guess) != std::string::npos)
        {
            cout << "\n The letter is at position: " << position << "!\n";
            usedLetters += guess;
            cout << "\n So far you have used these letters: " << usedLetters << "\n";
            
            // Den Buchstaben in das Array knallen und Ausgabe ueber Status
            soFar[position-1] = guess;
            cout << "\t\n\t\n So far the word is: " << soFar << "\n\t\n";
        }
        
        if(word.find_last_of(guess) != std::string::npos)
        {
            cout << "\n The letter is also at position: " << position_2 << "!\n";
            
            // Den Buchstaben in das Array knallen und Ausgabe ueber Status
            soFar[position_2-1] = guess;
            cout << "\t\n\t\n So far the word is: " << soFar << "\n\t\n";
        }
        
        if(word.find_last_of(guess) == std::string::npos && word.find_last_of(guess) == std::string::npos)
        {
            cout << "\n\n The guessed letter is not in the word!\n\n";
            ++guessesMade;
        }
    }
    
    if(guessesMade == kMAX_GUESSES) 
    {
        cout << "You have tried too much ... you got hanged!\n";
    }
    
    if(soFar == word) 
    {
        cout << "\n\n You found the word! Congratulations you have beaten the computer.\n";
    }
    
    return 0;
}
