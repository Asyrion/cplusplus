#include <iostream>
using namespace std;

int main()
{
    std::cout << "********** 99 BOTTLES OF BEER *******\t\n";
    for(int beers = 99; beers > 0; --beers) {
        if(beers == 1)
        {
            std::cout << beers << " bottle of beer on the wall\n";
            std::cout << beers << " bottle of beer\n";
            std::cout << "Take it down, pass it around\n";
        }
        else
        {
            std::cout << beers << " bottles of beer on the wall\n";
            std::cout << beers << " bottles of beer\n";
            std::cout << "Take one down, pass it around\n";
        }
        
        if((beers - 1) == 1)
        {
            std::cout << beers-1 << " bottle of beer\t\n\t\n";
        }else{
            std::cout << beers-1 << " bottles of beer\t\n\t\n";
        }
    }
    return 0;
}
