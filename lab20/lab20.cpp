// Created by: Nick Conant
// Last modified on: 17 Nov 2016

// Following program was written by another person, I have updated it with 
// Comments describing what the different parts of the program accomplish.

/* Program get a string of 10 char or less from the user, reverses the string
   order, then checks to see if they are the same after reversal. */

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char firststr[10];
    int firstname = 0;
    char *head = firststr; // *head points to firststr array
    char *tail = firststr; // *tail points to firststr array
        cout << "Please enter a 10 letter word or less" << endl;
        cin >> firststr;   // user enters a string for firststr array
        strlen(firststr);  // gets the string length of the string the user entered
        firstname = strlen(firststr);  // sets firstname equal to the string length of firststr
        cout << "Your word is " << firststr << endl;
            if (firstname<10)       // if else statement for determining if the user entered a string that was to long
            {
                while (*head != '\0') // while statement iterates through firststr array until the '/0' char is found and prints each char
                {
                cout << *head; // prints char that head is pointing to(firststr)
                head++; // adds 1 to the value that head points to
                }
            }
            else
            {
                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;  // prints if string length was greater than 10
            }
        cout << endl;
        tail = &firststr[strlen(firststr) - 1];  // sets tail pointer equal to the memory location of final char in the firststr array
            if (firstname < 10)         // If statement checks to make sure firstname is less than 10, again and then runs a while loop
            {
                while (*tail>0)         // while loop that runs while the data that tail points to is less than 0
                {
                cout << *tail;          // prints the value stored at the location tail points to
                tail--;                 // subtracts 1 from the value that tail points to (memory location of firststr[])
                                }
                }
        cout << endl;
        head = firststr;                // stores firststr in head pointer
        tail = &firststr[strlen(firststr) - 1];     // stores the memory address of the last char in firststr in tail pointer
        head++;                         // adds 1 to the value that head points to
        tail--;                         // subtracts 1 from the value tail points to(memory location of firststr[])
            if (*head == *tail)         // if statement that checks if the variable head points to is equal to the variable tail points to
            {
                cout << "It is an palindrome!" << endl;
            }
                else
                {
                    cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}