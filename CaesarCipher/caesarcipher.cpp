#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

class MyTransform 
{
    private:
        int shift;
    public:
        MyTransform( int s ) : shift( s ) {}
        
        char operator() (char c) {
            if( isspace(c))
                return 0;
            else {
                static std::string letters("abcdefghijklmnopqrstuvwxyz");
                std::string::size_type found = letters.find(tolower(c));
                int shiftedpos = (static_cast<int>(found) + shift) % 26;
                
                if(shiftedpos < 0) {
                    shiftedpos = 26 + shiftedpos;
                }
                char shifted = letters[shiftedpos];
                return shifted;
            }
        }
};

int main() 
{
    std::string input;
    std::cout << "\t********* CAESAR CIPHER *********\t\n\t\n";
    std::cout << "\tWhich text do you want to be encrypted?\n";
    
    // Write to our variable
    getline(std::cin, input);
    
    std::cout << "\t Please enter the key to shift/encrypt with: \n";
    int myshift = 0;
    std::cin >> myshift;
    std::cout << " Before encryption: " << input << std::endl;
    
    std::transform(input.begin(), input.end(), input.begin(), MyTransform(myshift));
    
    std::cout << " After encryption: " << input << std::endl;
    
    myshift *= -1; // decrypting again
    
    std::transform(input.begin(), input.end(), input.begin(), MyTransform(myshift));

    std::cout << " After decryption: " << input << std::endl;

    return 0;
}
