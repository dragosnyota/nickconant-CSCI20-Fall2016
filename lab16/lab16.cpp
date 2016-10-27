// Created by: Nick Conant
// Last modified on: 27 Oct 2016

// program accepts user input for choosing menu items. Prints the price and number of items remaining
// and prints total cost after user finishes choosing items.

// Didn't notice the parallel arrays requirement until I finished writing the initial program. 
// Time permitting I will try to implement it by midnight.

#include<iostream>
using namespace std;

int main() {
    
    const int CHOICE_ELEMENTS   = 10000;                                                   // Sets the user choice array max value at 10000.
    int       menuVals[10]      = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};                         // Defines the menu array and sets it's assigned values.
    float     menuPrice[10]     = {0.50, 1.0, 1.50, 2.0, 2.50, 3.0, 3.50, 4.0, 4.50, 5.0}; // Defines prices for objects in menuVals array.
    int       menuInventory[10] = {5, 8, 10, 12, 14, 16, 18, 20, 22, 24};                  // Defines number of each item available in menuVals array.
    int userChoice[CHOICE_ELEMENTS];                                                       // Array for storing the user's choices.
    float totalCost;
    int tempUserChoice;
    int i = 0;
    int j = 0;
    
    cout << "Welcome to the menu program." << endl;
    cout << "Please choose from 0 to 9" << endl;
    cout << "Entering a number less than 0 or greater than 9 will exit the program." << endl;
    cout << "After each choice the price and available inventory remaining after your choice will be displayed." << endl;
    cout << "When you exit the program the total cost of all your choices will be displayed." << endl;
   
        for (i = 0; i < CHOICE_ELEMENTS; ++i) { // Sets the user's choice to the userChoice array and adjusts inventory and totalCost values.
             cout << "Choice:";
             cin  >> userChoice[i];
             
             if ((userChoice[i] >= 0) && (userChoice[i] <=9)) {
             tempUserChoice = userChoice[i];
             menuInventory[tempUserChoice] = menuInventory[tempUserChoice] -1;
             totalCost = totalCost + menuPrice[tempUserChoice];
             cout << "Unit price is $" << menuPrice[tempUserChoice] << ", there are " << menuInventory[tempUserChoice] << " of ";
             cout << "item " << menuVals[tempUserChoice] << " remaining." << endl;
             }
             
             else if ((userChoice[i] > 9) || (userChoice[i] < 0)) { // Breaks from the loop if a value less than zero or greater than 9 is entered.
                 
                 cout << "Your total cost is $" << totalCost << "." << endl;
                 break;
                 
             }
        }
    
}