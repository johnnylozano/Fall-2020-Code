/*
Class: CSE 1321L
Section: 18
Term: Fall 20
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 2C
*/

/* Square Area/Perimeter Calculator
User inputs height and width of a square, and
program calculates area and perimeter of the square.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width, height;

	cout << "Enter a width: ";
	cin >> width;

	cout << "Enter a height: ";
	cin >> height;

	cout << "The area is " << width * height << endl;
	cout << "The perimeter is " << (2*(width+height));
	
}


