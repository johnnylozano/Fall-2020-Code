/*
Class: CSE 1321L
Section: 18
Term: Fall 2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab #: 3C
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  // initialize variables
  int q,d,n,p,td,tc,cents;

  // Ask user for the number of coins
  cout << "Enter the number of quarters: ";
  cin >> q;
  cout << "Enter the number of dimes: ";
  cin >> d;
  cout << "Enter the number of nickels: ";
  cin >> n;
  cout << "Enter the number of pennies: ";
  cin >> p;

  // Tell user how many of each coin they entered
  cout << "You entered "; cout << q; cout << " quarters." <<endl;
  cout << "You entered "; cout << d; cout << " quarters." <<endl;
  cout << "You entered "; cout << n; cout << " quarters." <<endl;
  cout << "You entered "; cout << p; cout << " quarters." <<endl;

  // Change Calculation
  td = (q*25+d*10+n*5+p*1)/100;
  tc = q*25+d*10+n*5+p*1;
  cents = tc - td*100;

  // Print
  cout << "Your total is "; cout << td; cout << " dollars and "; cout << cents; cout << " cents.";
}
