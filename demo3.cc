#include <string>
#include <iostream>

using namespace std;

void checkname(int namegot) 
{
    switch(namegot) 
    {
        case 1: 
            std::cout << "Welcome Roman, nice to see you!\n";
        break;
        case 2: 
            std::cout << "Welcome Lucifer, it's cold up here, isn't it?\n";
        break;
        case 3: 
            std::cout << "This is a testing message used for debugging.\n";
        break;
        default:
            std::cout << "Error: Name not known!\n";
        break;
    }
}

int namegot(string name)
{
    if(name == "Roman") {
        return 1;
    }else if(name == "Lucifer") {
        return 2;
    }else if(name == "Test") {
        return 3;
    }else{
        return 4;
    }
}

int main(void)
{
    string name;
    int INT_namegot;
    
    std::cout << "Please type in a name and hit enter!\n";
    std::cin  >> name;
    
    checkname(namegot(name));
    
    return 0;
}