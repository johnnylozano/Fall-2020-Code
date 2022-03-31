/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 9A

===Min-Max-Avg-Method=====================================
- User inputs three numbers
- Numbers go through methods to calculate minimum,
- maximum, and average of the three numbers
- Methods are called from main 
==========================================================
*/

#include <iostream>
using namespace std;

int max(int x, int y, int z) {     // Max method, compares x, y, and z and determines max value
	int max_val;

	if (x > y && x > z) {
		max_val = x;
	}
	else if (y > z) {
		max_val = y;
	}
	else {
		max_val = z;
	}
	return max_val;
}

int min(int x, int y, int z) {      // Min method, compares x, y, and z and determines min value
	int min_val;

	if (x < y && x < z) {
		min_val = x;
	}
	else if (y < z) {
		min_val = y;
	}
	else {
		min_val = z;
	}
	return min_val;

}

float average(float x, float y, float z) {      // Average method, adds up (x, y, z) and divides by three
	float avg = (x + y + z) / 3;
	return avg;

}

int main() {
	int a, b, c;

	cout << "Enter number 1: ";                  // Reads user input numbers
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	cout << "Enter number 3: ";
	cin >> c;

	int minn = min(a, b, c);                      // Calls min and max using input numbers
	cout << "Min is " << minn << "\n";
	int maxx = max(a, b, c);
	cout << "Max is " << maxx << "\n";

	float avgg = average(a, b, c);                // Calls average using input numbers
	cout << "Average is " << avgg;

}
