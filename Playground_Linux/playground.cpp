#include <fstream>

#include <iostream>
using namespace std;

int CalcRevenue(int WeeklySales)
{
    int Revenue;
    int Commission;
    int ShoePrice = 225;
    
    // Revenue 1
    {
        cout << "\t Option 1: Your salary is $600.\n";
    }
    
    // Revenue 2
    {
        Commission = (((WeeklySales * ShoePrice) / 100) * 10);
        
        Revenue    = (7 * 40) + Commission;
        
        cout << "\t Option 2: Your revenue is $" << Revenue << ".\n";
    }
    
    // Revenue 3
    {
        Commission = (((WeeklySales * ShoePrice) / 100) * 20);
        Revenue    = (WeeklySales * 20) + Commission;
        cout << "\t Option 3: Your revenue is $" << Revenue << ".\n";
    }
}

int ChirpTemperature(float ChirpsPerMinute)
{
    cout << "\t Number of chirps per Minute: " << ChirpsPerMinute << "\n";
    cout << "\t The temperature is: " << ((ChirpsPerMinute + 40) / 4) << "\n";
    return 0;
}

int FileProcessing(char option)
{
    char first_name[30], last_name[30];
    int age;
    char file_name[30];
    
    // Write TO file
    if(option == 'w') 
    {
        // Get the required data
        cout << "\tPlease enter your First Name: "; cin >> first_name; cout << "\n";
        cout << "\t Enter your Last Name: "; cin >> last_name; cout << "\n";
        cout << "\t Enter your Age: "; cin >> age; cout << "\n";
        
        cout << "\t\n\t\n Enter the name of the file to be created: "; cin >> file_name; cout << "\n";
        
        // Create ofstream called People
        ofstream People(file_name, ios::out);
        
        // Write the output to the stream
        People << first_name << endl << last_name << endl << age << endl;
        People.close();
    }
    // Read FROM file
    else if(option == 'r')
    {
        cout << "\t\n\t\n Enter the name of the file to be read: "; cin >> file_name; cout << "\n";
        
        // Create ofstream called People
        ifstream People(file_name, ios::out);
        
        // Write the output to the stream
        People >> first_name >> last_name >> age;
        
        cout << "Your First Name: " << first_name << "\n";
        cout << "Your Last Name: " << last_name << "\n";
        cout << "Your Age: " << age << "\n";
        cout << endl;
        People.close();
    }
    return 0;
}

int ElectronicStopwatch(int Seconds)
{
    int hours;
    int minutes;
    int seconds;
    
    hours   = (Seconds / 3600);
    minutes = ((Seconds % 3600) / 60);
    seconds = (((Seconds % 3600) / 60) / 60);
    
    cout << hours << " hours " << minutes << "minutes" << seconds << "seconds";
}

int ChooseFromOptions(int choice)
{
    char option;
    int option_2;
    
    switch(choice) 
    {
        case 1:
            int WeeklySales;
            cout << "\t Please enter your weekly sales: \n";
            cin >> WeeklySales;
            CalcRevenue(WeeklySales);
        break;
        case 2:
            cout << "\tDo you want to write or read from a file? (w/r)\n"; cin >> option; 
            
            FileProcessing(option);
        break;
        case 3:
            cout << "\t How many chirps per minute? ";cin >> option_2; cout << "\n";
            
            ChirpTemperature(option_2);
        break;
        case 4:
            cout << "\t Please insert the seconds? ";cin >> option_2; cout << "\n";
            
            ElectronicStopwatch(option_2);
        break;
    }
}

int main() 
{
    int choice;
    
    cout << "\t******* WELCOME TO THE PLAYGROUND ******\n";
    cout << "\tType in the corresponding number to execute the function. \n";
    cout << "\tPlease choose a function to execute: \n";
    cout << "\t1. Calculate Revenue. \n";
    cout << "\t2. File Processing. \n";
    cout << "\t3. Chirp Temperature. \n";
    cout << "\t4. Electronic Stopwatch. \n";
    cin >> choice;
    
    ChooseFromOptions(choice);
    
    return 0;
}