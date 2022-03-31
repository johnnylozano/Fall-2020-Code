/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 4B

===Earnings-Calculator=======================================
- User enters number of hours worked this week
- Program calculates earnings based on $15/hr
- and $25/hr overtime (worked more than 40 hours a week)
=============================================================

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hours, hours2, earnings;
    cout << "Number of hours this week: ";
    cin >> hours;

    if (hours > 40) {
        hours2 = hours - 40;
        earnings = (40 * 15) + (hours2 * 25);
    }
    else {
        earnings = hours * 15;
    }
    cout << "Earnings: "; cout << earnings;
}

