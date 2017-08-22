// Both notations possible
#include <iostream>

// Not needed - namespace std is standard
using namespace std;
// #include "iostream"


// demo2.C - Sample C++ programm

/**
 * 
 * @author Roman Harms
 */
int main(void)
{
    int i;
    std::cout << "Please enter an integer value:";
    std::cin >> i;
    
    if(i.GetType() != "int") {
        std::cout << "The entered value is not an integer!";
    }
    
    std::cout << "The value you entered is " << i;
    std::cout << " and its double is " << i*2 << "\n";
    return 0;
}