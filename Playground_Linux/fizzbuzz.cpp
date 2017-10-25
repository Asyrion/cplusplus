#include <iostream>
#include <math.h>

using namespace std;

// Using just the standard libraries to compute our program
int main()
{
    for(int i = 0; i <= 100; ++i) {
        if(i % 3 == 0) {
            if(i % 5 == 0) {
                cout << "\tFizzBuzz\n";
            }else{
                cout << "\tFizz\n";
            }
        }
        if(i % 5 == 0) {
            cout << "\tBuzz\n";
        }else{
            cout << "\t" << i << "\n";
        }
    }
}
