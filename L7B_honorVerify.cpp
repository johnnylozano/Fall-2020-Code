/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 7B

===Honor's-Verifier===================================================
- User inputs number of GPAs to verify
- Program creates prompts for the number provided by user
- where the user must then enter the GPA for the prompt
- The program then categorizes each GPA into not graduating,
- graduating, Cum Laude, Magna Cum Laude, and Summa Cum Laude
=======================================================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;                                      // initialize variables
    float input;

    cout << "Enter the number of GPAs: ";         // Read number of GPAs
    cin >> num;

    float* gpa = new float[num];                  // Initialize array

    for (int i = 0; i < num; i++) {               // User input (GPA) for each index of array
        cout << "GPA #" << i << ": ";
        cin >> input;
        gpa[i] = input;
    }
    for (int i = 0; i < num; i++) {                // Categorizes each index of array into graduation role
        cout << "Student #" << i << ":";
        if (gpa[i] >= 3.9) {
            cout << " Summa Cum Laude " << endl;
        }
        else if (gpa[i] >= 3.7) {
            cout << " Magna Cum Laude " << endl;
        }
        else if (gpa[i] >= 3.5) {
            cout << " Cum Laude " << endl;
        }
        else if (gpa[i] >= 2) {
            cout << " Graduating " << endl;
        }
        else {
            cout << " Not graduating " << endl;
        }
    }
}

