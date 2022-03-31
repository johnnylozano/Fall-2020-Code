/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 5C

===Quadrant-Finder=======================================
- User inputs x and y coordinates
- Program finds which quadrant the coordinates lie
=========================================================
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;                                              // initialize

    cout << "Enter x: ";                                   // Read user x and y coordinates
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (x == 0 & y == 0) {                                 // Series of if statements to find location of coordinates
        cout << "This point is on the origin.";
    }
    else if (x == 0) {
        cout << "This point is on the y axis.";
    }
    else if (y == 0) {
        cout << "This point is on the x axis.";
    }
    else if (x > 0 & y > 0) {
        cout << "This point is in the first quadrant.";
    }
    else if (x < 0 & y > 0) {
        cout << "This point is in the second quadrant.";
    }
    else if (x < 0 & y < 0) {
        cout << "This point is in the third quadrant.";
    }
    else if (x > 0 & y < 0) {
        cout << "This point is in the fourth quadrant.";
    }
}

