// Cellular Automaton Langtons Ant
// Our cout | cin commands
#include <iostream>

// That we can use strings as types
#include <string>
// That we can use the vector container (Array like)
#include <vector>
// ...that we can use our STL container algos on our vector
#include <algorithm>

// ...that we can use things as find etc
#include <cctype>

#include <cstdlib>

//#include "ctype.h"
#include "math.h"

#include <curses.h>

#include <unistd.h>

// Der eine greift zu, der andere aendert
// Accessor und Mutater

using namespace std;

// max board size
const int kMAX_BOARD_SIZE = 100;

// Definde our board Matrix as new variable type
typedef int ARR2D[kMAX_BOARD_SIZE][kMAX_BOARD_SIZE];

// Define the type we use for the position of our ant
typedef int AntPos[1][1];

void ClearScreen();

void Print(ARR2D in_array, int rows, int cols);

void Fill(ARR2D in_array, int rows, int cols);

int PlaceAnt(ARR2D in_array, int rows, int cols, AntPos ant_pos);

void Line(int times);

void MakeMove(ARR2D in_array, int rows, int cols, string AntAlignment, int& MovesMade);

void UpdateAlignment(ARR2D in_array, string AntAlignment, int MovesMade);

int main()
{
    ARR2D BoardMatrix;
    int Rows, Cols;
    
    AntPos ant_pos;
    
    Rows = 11;
    Cols = 11;

    int MovesMade = 0;
    
    string AntAlignment = "T";
    
    Fill(BoardMatrix, Rows, Cols);
    
    PlaceAnt(BoardMatrix, Rows, Cols, ant_pos);

    Line(3);
    
    Print(BoardMatrix, Rows, Cols);
    
    Line(3);

    MakeMove(BoardMatrix, Rows, Cols, AntAlignment, MovesMade);
    
    Line(3);
    
    Print(BoardMatrix, Rows, Cols);
    // sleep(1);
    
    // ClearScreen();
    
    return 0;
}

void ClearScreen()
{
    cout << string(100, '\n');
}

void Print(ARR2D in_array, int rows, int cols)
{
    for(int j = 0; j < rows; ++j) {
        for(int z = 0; z < cols; ++z) {
            cout << "\t" << in_array[j][z];
        }
        cout << endl;
    }
}

void Fill(ARR2D in_array, int rows, int cols)
{
    for(int j = 0; j < rows; ++j) {
        for(int z = 0; z < cols; ++z) {
            in_array[j][z] = 0;
        }
    }
}

int PlaceAnt(ARR2D in_array, int rows, int cols, AntPos ant_pos)
{
    for(int j = 0; j < rows; ++j) {
        for(int z = 0; z < cols; ++z) {
            if(j == (rows/2) && z == (cols/2)) 
            {
                    in_array[j][z] = 1;
                    ant_pos[j][z];
            }
        }
    }
}

void Line(int times)
{
    for(int j = 1; j <= times; ++j) {
        cout << "\t\n";
    }
}

// void UpdateAlignment(ARR2D in_array, )
// {
// }

void MakeMove(ARR2D in_array, AntPos ant_pos, string AntAlignment, int& MovesMade)
{
    /* Entscheiden wie und in welche Richtung die Ameise gehen muss
       0 = zu 1 machen
       1 = zu 0 machen
       AntAlignment = entscheidet in welche Richtung
    */
}
