/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 6A

===Give-Cookie===============================================
- Program repeated asks for a cookie
- User must input "cookie" in order to stop the program
=============================================================
*/

#include <iostream>
#include <algorithm>  //https://www.educative.io/edpresso/what-is-the-transform-function-in-cpp
using namespace std;
int main()
{
	string str = "";                                                // initialize
	cout << "Input 'cookie' to give a cookie" << endl;              // Instructions

	do {                                                            // do while to lock in user
		cout << "Gimme a Cookie : ";
		cin >> str;
		transform(str.begin(), str.end(), str.begin(), ::tolower); //https://www.educative.io/edpresso/what-is-the-transform-function-in-cpp
		                                                           // resource used to turn input string into all lowercase
	} while (str != "cookie");                                     // ends loop once cookie is inputed
}

