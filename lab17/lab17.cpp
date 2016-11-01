// Created by: Nick Conant
// Last modified on: 1 Nov 2016

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    
    // int FIRST_NAME_SIZE = 11;
    // int LAST_NAME_SIZE  = 21;
    char firstName[11];
    char lastName[21];
    int i;
        
        cout << "The following program gives three possible usernames based on" << endl;
        cout << "the first and last name entered. Max first name size is 10," << endl;
        cout << "max last name size is 20." << endl << endl;
        
        
        cout << "Enter your first name:";
        cin >> firstName;
        
        if ((strlen(firstName)) > 10) {
            cout << "More than 10 characters entered." << endl;
            firstName[0] = 0;
            cout << "Enter your first name:";
            cin >> firstName;
        }
        
        cout << "Enter your last name:";
        cin >> lastName;
        
        if ((strlen(lastName)) > 20) {
            cout << "More than 20 characters entered." << endl;
            lastName[0] = 0;
            cout << "Enter your last name:";
            cin >> lastName;
        }
        
        if ((strcmp(firstName, lastName)) == 0) {
            cout << "Warning: You have entered the same first and last names." << endl;
        }
        
       cout << "Name: " << firstName << " " << lastName << endl << endl;
       
       for (i = 0; i < 11; ++i) {
           firstName[i] = tolower(firstName[i]);
           lastName[i] = tolower(lastName[i]);
       }
       cout << "Which of the following three would you like?" << endl << endl;
       cout << firstName[0] << firstName[1] << lastName << endl;
       cout << firstName << lastName << endl;
       cout << firstName[0] << lastName;
        
    
}