/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 5B

===Meeting-Day==========================================================
- Takes user inputs (day, days until meeting) in order to find
- what day of the week the meeting will take place
========================================================================
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int day, nextmeeting, meeting;                                                 // initialize

    cout << "Enter a number that represents today (Sunday==0, Monday==1,...) ";    // Read user current day and days until meeting
    cin >> day;
    cout << "Enter the number of days until the meeting: ";
    cin >> nextmeeting; 

    meeting = (day + nextmeeting) % 7;                                             // Modulo to find remainder

    switch (meeting) {                                                             // Switch case to use Modulo remainder to find day of the meeting
    case 0:
        cout << "Meeting day is Sunday"; break;
    case 1:
        cout << "Meeting day is Monday"; break;
    case 2:
        cout << "Meeting day is Tuesday"; break;
    case 3:
        cout << "Meeting day is Wednesday"; break;
    case 4:
        cout << "Meeting day is Thursday"; break;
    case 5:
        cout << "Meeting day is Friday"; break;
    case 6:
        cout << "Meeting day is Saturday"; break;
    }
}

