/*
Class: CSE 1321L
Section: 18
Term: Fall 2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab #: 3A
*/

/* Payment Rate
User inputs total amount owed and APR, and
program calculates monthly percentage rate and minimum payment
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  float amount, apr, mpr, min;
  cout << "Amount owed: ";
  cin >> amount;
  cout<< "APR: ";
  cin >> apr;
  mpr = apr/12;
  cout << "Monthly percentage rate: "; cout << mpr <<endl;
  min = ( amount * mpr ) * .01;
  cout << "Minimum Payment: "; cout << min;
}
