/**
 * 100 Doors 
 * 
 * Rules:
 * 
 * There are 100 Doors in a row that are all initially closed.
 * You make 100 passes (100 times through all) by the doors.
 * The first time every door is visited, toggle the door. (open: close, close: open)
 * The second time every second door is toogled and so forth.
 * 
 * Task:
 * What state are the doors in after the last pass? Which are open, which closed?
 */

#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    bool is_open[100] = { false };
    
    std::cout << "\t\n\t\n*********  100 DOORS *********" << std::endl;
    
    for(int pass = 0; pass < 100; ++pass){
        for(int door = pass; door < 100; door += pass+1) {
                is_open[door] = !is_open[door];
        }
    }
    
    for(int door = 0; door < 100; ++door) {
        std::cout << "door # " << door+1 << (is_open[door] ? " is open." : " is closed.") << std::endl; 
    }
    return 0;
}
