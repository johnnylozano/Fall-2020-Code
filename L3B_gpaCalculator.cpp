/*
Class: CSE 1321L
Section: 18
Term: Fall 2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab #: 3B
*/

/* GPA Calculator
User inputs courses and hours, and
program calculates GPA, total hours, and quality points
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
  float c1,c2,c3,c4,g1,g2,g3,g4;
  cout << "Course 1 hours: ";
  cin >> c1;
  cout << "Grade for course 1: ";
  cin >> g1;
  cout << "Course 2 hours: ";
  cin >> c2;
  cout << "Grade for course 2: ";
  cin >> g2;
  cout << "Course 3 hours: ";
  cin >> c3;
  cout << "Grade for course 3: ";
  cin >> g3;
  cout << "Course 4 hours: ";
  cin >> c4;
  cout << "Grade for course 4: ";
  cin >> g4;
  cout << "Total hours is: "; cout << c1+c2+c3+c4 << endl;
  cout << "Total quality points is: "; cout <<  c1*g1+c2*g2+c3*g3+c4*g4 << endl;
  cout << "Your GPA for this semester is "; cout << (c1*g1+c2*g2+c3*g3+c4*g4)/(c1+c2+c3+c4);
}
