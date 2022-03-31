/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 9B

===Array-Create===============================================
- Outputs a directory for the user to create an array
-   1. Prints out current array
-   2. Initializes (resets to zero) array
-   3. Prints the sum of all values in the array
-   4. Inserts an element into particular index of array
-   5. Quits program
===============================================================
*/

#include <iostream>
#include <string>

void initArray(int arr[], int arraySize)      // Initializes/resets array to zeros
{
    for (int i = 0; i < arraySize; i++)
    {
        arr[i] = 0;
    }
}

void printArray(int arr[], int arraySize)     // Prints values in the array
{
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void printSum(int arr[], int arraySize)        // Sums all array values
{
    int sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += arr[i];
    }

    std::cout << "Sum = " << sum << std::endl;
}

void enterNum(int arr[], int index, int value)  // Inserts number into array
{
    if (index >= 0 && index <= 9)
    {
        arr[index] = value;
    }
    else
    {
        std::cout << "ERROR: Invalid array index. Please enter an index value between 0 and 9 (inclusive)." << std::endl;
    }
}

void printMenu()                                // Directory for user
{
    std::cout << "1. Print array." << std::endl;
    std::cout << "2. Init array." << std::endl;
    std::cout << "3. Print sum of elements of the array." << std::endl;
    std::cout << "4. Insert an element to array." << std::endl;
    std::cout << "5. Quit" << std::endl;
}

int main()
{
    int array[10];                               // Initialize empty array 
    initArray(array, 10);                        // Calls method to fill with zeros

    int userSelection = 0;                       // Initialize variables
    int arrayIndex = 0;
    int valueToBeInserted = 0;

    while (1)
    {
        printMenu();                              // Prints directory and reads user input
        std::cin >> userSelection;

        switch (userSelection)                    // Navigates directory
        {
        case 1:
            printArray(array, 10);
            break;
        case 2:
            initArray(array, 10);
            break;
        case 3:
            printSum(array, 10);
            break;
        case 4:
            std::cout << "Please enter an array index position between 0 and 9 (inclusive): ";
            std::cin >> arrayIndex;
            std::cout << "Please enter a number to be inserted : ";
            std::cin >> valueToBeInserted;

            enterNum(array, arrayIndex, valueToBeInserted);
            break;
        case 5:
            break;
        default:
            std::cout << "Invalid user selection.";
            break;
        }

        if (userSelection == 5)
        {
            break;
        }
    }

    return 0;
}