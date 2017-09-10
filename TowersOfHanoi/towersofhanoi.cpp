#include <iostream>
using namespace std;

void move(const int n, const int fromTower, const int toTower, const int spareTower)
{
    if(n>0)
    {
        move((n-1), fromTower, spareTower, toTower);
        
        std::cout << "\t Move the Top Disk from Tower-"<<fromTower<<" to Tower-"<<toTower<<"\n";
        
        move ((n-1), spareTower, toTower, fromTower);
    }
}

int main() 
{
    // clrscr(); - Clears the screen
    
    std::cout << "\n\t **********  TOWERS OF HANOI  *********\n"<<endl;
    std::cout << "\t The Mystery of Towers of Hanoi is as follows: \n"<<endl;
    
    move(4,1,3,2);
    
    std::cout << "\n\t **************************************";
    
    return 0;
}
