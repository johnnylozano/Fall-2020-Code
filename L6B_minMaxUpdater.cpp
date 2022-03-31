/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 6B

===Minimum-Maximum-Updater============================================
- User inputs a number
- Program creates continuous while loop until user inputs zero
-    min/max value updated
-    new values displayed
-    user inputs another number
=======================================================================
*/
#include <iostream>
using namespace std;

int main() {
	int max = -1001;                                                  // initialize variables
	int min = 1001;
	int num;

	cout << "Press 0 (zero) to exit" << endl; 
	cout << "Enter a number between -1000 and +1000: " << endl;
	cin >> num;                                                       // read first number

	while (num != 0)                                                  // loop until user inputs zero
	{
		if (num > 1000 or num < -1000) {                              // range validation
			cout << "Please enter a valid number" << endl;
		}
		else {
			if (num < min) {                                          // minimum update
				min = num;
			}
			if (num > max)                                            // maximum update
				max = num;
				cout << "Min is " << min << endl;                     // output new min and max
				cout << "Max is " << max << endl;
		}
		cout << "Enter a number between -1000 and +1000: " << endl;   // re-ask for number and read user input
		cin >> num;
	}
	return 0;
}