/*
Class: CSE 1321L
Section: 18
Term: Fall 2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab #: 1B
*/

/* String Reader
 Demonstrate reading a string from the user.
 Reads a character string from the user and prints it.
*/

#include <string>
#include <iostream>
using namespace std;
int main()
{
	string message;
	cout << "Enter a line of text:";
	getline(cin, message);
	cout << "You entered: " << "\"" << message << "\"" << endl;
}