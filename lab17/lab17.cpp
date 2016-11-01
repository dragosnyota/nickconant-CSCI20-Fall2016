// Created by: Nick Conant
// Last modified on: 1 Nov 2016

// Program accepts a max first name username input of 10 characters and a max
// last name input of 20 characters. A warning is printed if the first and last
// names are the same, the names are then printed and modified into three 
// possible available usernames.

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    
    char firstName[11]; // char array for first name
    char lastName[21];  // char array for last name
    int i;
        
        cout << "The following program gives three possible usernames based on" << endl;
        cout << "the first and last name entered. Max first name size is 10," << endl;
        cout << "max last name size is 20." << endl << endl;
        
        
        cout << "Enter your first name:";
        cin >> firstName;
        
        // checks first name char length and resets until one is entered in the correct range.
        if ((strlen(firstName)) > 10) {
            cout << "More than 10 characters entered." << endl;
            firstName[0] = 0;
            cout << "Enter your first name:";
            cin >> firstName;
        }
        
        cout << "Enter your last name:";
        cin >> lastName;
        
        // checks last name char length and resets until one is entered in the correct range.
        if ((strlen(lastName)) > 20) {
            cout << "More than 20 characters entered." << endl;
            lastName[0] = 0;
            cout << "Enter your last name:";
            cin >> lastName;
        }
        
        // Checks to see if the first and last name is the same
        if ((strcmp(firstName, lastName)) == 0) {
            cout << "Warning: You have entered the same first and last names." << endl;
        }
        
       cout << "Name: " << firstName << " " << lastName << endl << endl;
       
       // Sets all chars in firstName and lastName to lowercase.
       for (i = 0; i < 11; ++i) {
           firstName[i] = tolower(firstName[i]);
           lastName[i] = tolower(lastName[i]);
       }
       
       cout << "Which of the following three would you like?" << endl << endl;
       cout << firstName[0] << firstName[1] << lastName << endl;
       cout << firstName << lastName << endl;
       cout << firstName[0] << lastName;
        
    
}