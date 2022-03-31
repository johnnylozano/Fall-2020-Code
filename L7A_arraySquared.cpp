/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 7A

===Array-Squared==============================================
- User inputs value indicating desired size of array
- program creates an array with indices the same
- as user input, and the values are filled with
- squared integers
==============================================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;                                            // initialize

    cout << "Enter the size of the array: ";          // read desired size of array
    cin >> n;

    int* narr = new int[n];                           // create array of size based on input

    for (int i = 0; i < n; i++) {                     // fill with square values
        narr[i] = i * i;
        cout << " | "; cout << narr[i];
    }
}
