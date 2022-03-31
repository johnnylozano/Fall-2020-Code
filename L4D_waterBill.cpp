/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 4D

===Water-Bill=====================================
- Asks user for gallons of water consumed
-
- Calculation based on water usage
-    0.15 cents per gallon under 1000
-    0.25 centers per gallon under 2000
-    0.35 cents per gallon 2000+
-
- Sums total 
===================================================

*/
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
    float gallons, bill, g1=0, g2=0;                       // initialize variables

    cout << "Gallons of water: ";
    cin >> gallons;                                        // Reads user input for gallons used

    if (gallons > 2000) {                                  // 0.35 cent per gallon calculation
        g1 = gallons - 2000;
        gallons = gallons - g1;
    }
 
    if (gallons > 1000) {                                  // 0.25 cent per gallon calculation
        g2 = gallons - 1000;
        gallons = gallons - g2;
    
    }

    bill = gallons * 0.15 + g2 * 0.25 + g1 * 0.35;         // final calculation

    cout << "Water bill is: "; cout << bill;               // output
}

