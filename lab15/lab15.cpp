// Created by: Nick Conant
// Last modified on: 25 Oct 2016
// Menu Program: User is asked to choose from an array containing 10 items
// User may continue choosing items until they give the quit command.

/* Spoke with April about not including how many of each item was chosen. 
   Determined the code is fine as written since if a menu item is chosen multiple
   times in the following code it will be displayed every time. */

#include<iostream>
using namespace std;

int main() {
    
    const int CHOICE_ELEMENTS = 10000;                  // Sets the user choice array max value at 10000.
    int menuVals[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Defines the menu array and sets it's assigned values.
    int userChoice[CHOICE_ELEMENTS];                    // Array for storing the user's choices.
    int i = 0;
    int j = 0;
    
    cout << "Welcome to the menu program." << endl;
    cout << "Please choose from 0 to 9" << endl;
    cout << "Entering a number less than 0 or greater than 9 will exit" << endl;
    cout << "the program and print your choices up to that point." << endl;
   
        for (i = 0; i < CHOICE_ELEMENTS; ++i) { // Sets the user's choice to the userChoice array.
             cout << "Choice:";
             cin  >> userChoice[i];
             
             if ((userChoice[i] > 9) || (userChoice[i] < 0)) { // Breaks from the loop if a value less than zero or greater than 9 is entered.
                 
                 cout << "You chose the following items:" << endl;
                 break;
                 
             }
        }
                 
                 for (j = 0; j < i; ++j) { // Prints the user's menu choices after the previous loop completes.
                     if (j < i - 1){
                     cout << userChoice[j] << ", ";
                     }
                     else if (j == i - 1) {
                         cout << userChoice[j] << ".";
                     }
                 }
    
}