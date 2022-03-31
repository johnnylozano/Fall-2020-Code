/*
Class: CSE 1321L
Section: 18
Term: Fall 20
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 2A
*/

/* Sentence Builder
User inputs 2 names, a verb, and an adverb in order to create a sentence.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, name2, verb, adverb;

    cout << "Enter a name: ";
    getline(cin, name);

    cout << "Enter another name: ";
    getline(cin, name2);

    cout << "Enter a verb: ";
    getline(cin, verb);

    cout << "Enter an adverb: ";
    getline(cin, adverb);

    cout << "Once upon a time, there was a person named " + name + " who had a child named "
        + name2 + ". This child would " + verb + " " + adverb + " while singing to strangers."; 
}

