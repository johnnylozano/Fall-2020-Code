/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 7C

===Array-Comparator=============================================
- User enters size of arrays
- Program creates two arrays based on size of user input
- loops through, and user manually enters values of indices
- Program tells if they are identical or not
=================================================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size, input, flag;                                            // initialize variables
    cout << "Enter the size of the arrays: ";                         // Read array size
    cin >> size;

    int* array1 = new int[size];                                      // initialize arrays
    int* array2 = new int[size];

    for (int i = 0; i < size; i++) {                                  // User inputs indices for array1 and array2
        cout << "Enter array 1 slot "; cout << i; cout << ": ";
        cin >> input;
        array1[i] = input;
        cout << "Enter array 2 slot "; cout << i; cout << ": ";
        cin >> input;
        array2[i] = input;
    }
    for (int i = 0; i < size; i++) {                                   // Compares values within each array to other array
        if (array1[i] != array2[i]) {
            flag = 0;
            
        }
        else flag = 1;
        break;
    }

    if (flag == 1) {                                                   // Outputs identical or not
        cout << "The arrays are identical";
    }
    else cout << "The arrays are not identical";
}

