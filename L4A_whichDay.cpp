/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 4A

====Which-Day=============================================
- Program prompts user to enter a day, and
- outputs a conditional phrase depending on which day
==========================================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    cout << "Enter the day: ";
    getline(cin, day);

    if (day == "Monday") {
        cout << "Sounds like someone has a case of the Mondays!";
    }
    else if (day == "Wednesday") {
        cout << "It's hump day! El ombligo!";
    }
    else if (day == "Friday") {
        cout << "Finally. It's Friday!";
    }
    else {
        cout << "It's another day of the week.";
    }
}

