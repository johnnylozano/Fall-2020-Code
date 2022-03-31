/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 5A 


===Medical-Directory==============================================
- Gives user advice based on user inputs in nested if statements
==================================================================
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char s, t;                                              // initialize variables
	cout << "Experiencing severe symptoms (Y/N)? ";
	cin.get(s);                                             // read user input
	
	if (s == 'Y') {                                         // If 'Y', breaks if statement
		cout << "Seek emergency care.";
	}
	else if (s == 'N') {                                    // If 'N', continues asking questions
		cout << "Close contact with someone who has COVIC (Y/N)? ";
		 cin >> t;
		 if (t == 'Y') {
			 cout << "Quarantine and get tested if you feel sick.";
		 }
		 else {
			 cout << "If you experience other symptoms, isolate and get tested.";
		 }
		}
}

