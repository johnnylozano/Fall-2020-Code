/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 6C

===Summation-of-Odd-Numbers==========================
- User inputs a start and end value
- Program calculates summation of all odd numbers
- between start and end value
======================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int start, end, temp, i, sum;                  // initialize variables

    cout << "Enter a starting number: ";           // read user start and end values
    cin >> start;
    cout << "Enter an ending number: ";
    cin >> end;

    if (start > end) {                             // if start value is greater than end value
        temp = start;                              //      switch them and continue
        start = end;
        end = temp;
    }
    sum = 0;
    for (i = start; i <= end; i++) {               // for loop
        if (i % 2 == 1) {                          // look for odd values
            sum += i;                              // sum odd values
        }
    }
    cout << "Sum of odd is: " << sum << endl;
    return 0;
}