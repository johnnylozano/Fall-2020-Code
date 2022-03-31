/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 4C

===Phone-Directory=========================================
- User is prompted a list of options (1, 2, and 3),
- and input redirects user to movie, times, and bill
- respectively
===========================================================

*/
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
    int choice; // initialize choice

    cout << "Select from the following:" << endl;             // List of available inputs
    cout << "To see a list of movies, press 1." << endl;
    cout << "To see show times, press 2." << endl;
    cout << "To pay your bill, press 3." << endl;
    
    // Read user input
    cout << "Choice: ";
    cin >> choice;

    // Redirect based on input
    switch (choice) {
    case 1: 
        cout << "The Neverending Story 6" << endl;
        cout << "Princess Diaries: the untold story" << endl;
        cout << "Monty Python and the Programmer"; break;
    case 2: 
        cout << "All movies play at 3PM."; break;
    case 3:
        cout << "Corporate accounts payable, Nina speaking. Just a moment!"; break;
    default:
        cout << "I'm sorry, Dave. I can't do that."; break;
    }
}

