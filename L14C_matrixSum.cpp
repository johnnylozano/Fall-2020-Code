/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 14C

===Matrix-Sum=======================================================
- User inputs values of two matrices and program
- sums the two matrices and displays the result
====================================================================
*/

#include <iostream>
using namespace std;

int** addArrays(int a[][3], int b[][3])
{
    int** c = new int* [3];
    for (int i = 0; i < 3; i++)
    {
        c[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c; 
}

int main()
{
    int a[3][3], b[3][3]; 

    cout << "Input Matrix A\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Input Matrix B\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    int** c = addArrays(a, b);
    cout << "Matrix A:";
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "   " << a[i][j] << "   ";
        }
    }

    cout << "\nMatrix B:";
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "   " << b[i][j] << "   ";
        }
    }

    cout << "\nA + B:";
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "   " << c[i][j] << "   ";
        }
    }
}