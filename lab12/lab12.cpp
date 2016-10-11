// Created by: Nick Conant
// Last modified on: 10 Oct 2016
// Determines what kind of pet user should have based on their input

#include <iostream>
using namespace std;

int main() {
    
    char walkChoice    = ' ';
    char peopleChoice  = ' ';
    char swimChoice    = ' ';
    char weatherChoice = ' ';
    char energyChoice  = ' ';
    char sunbathChoice = ' ';
    
    // explains the program and correct input values to the user
    cout << "This program determines what kind of pet you should have based " << endl;
    cout << "on your answers to the following questions." << endl;
    cout << "Please answer all questions with either 'y' or 'n'." << endl;
    
    // start of input questions 
    cout << "Do you like to walk?" << endl;
    cin >> walkChoice;
    
    if (walkChoice == 'y') {
        
        cout << "Do you like to be around people?" << endl;
        cin >> peopleChoice;
        
        switch (peopleChoice) {
            
            case 'y':
            cout << "You should have a dog." << endl;
            break;
            
            case 'n':
            cout << "You should have a skunk." << endl;
            break;
            
            default:
            cout << "You entered an incorrect value, you should have a pet rock." << endl;
            break;
            
        }
        
    }
    
    else if (walkChoice == 'n') {
            
            cout << "Do you like to swim?" << endl;
            cin >> swimChoice;
            
            if (swimChoice == 'y') {
                
                cout << "You should have a fish." << endl;
                
            }
            
            else if (swimChoice == 'n') {
                
                cout << "Do you like warm weather?" << endl;
                cin >> weatherChoice;
                
                
                if (weatherChoice == 'y') {
                    
                    cout << "Do you like sunbathing?" << endl;
                    cin >> sunbathChoice;
                
                    if (sunbathChoice == 'y') {
                        
                        cout << "You should have a lizard." << endl;
                        
                    }
                    
                    else if (sunbathChoice == 'n') {
                        
                        cout << "You should have a spider." << endl;
                        
                    }
                        
                    else {
                        
                        cout << "Incorrect value entered, you should not have a pet." << endl;
                        
                    }
                        
                    }
                    
            }
                    
                if (weatherChoice == 'n') {
                    
                    cout << "Are you energetic?" << endl;
                    cin >> energyChoice;
                    
                    if (energyChoice == 'y') {
                        
                        cout << "You should have a pet ferrett." << endl;
                        
                    }
                    
                    else if (energyChoice == 'n') {
                        
                        cout << "You should have a pet sloth." << endl;
                        
                    }
                    
                    else {
                        
                        cout << "Incorrect value entered, you should learn how to read and have your current pet taken away." << endl;
                        
                    }
                }
                
                    else {
                        
                        cout << "Incorrect value entered, you should have a pet lamp." << endl;
                        
                    }
                    
                }
    
    else {
        
        cout << "You entered an incorrect value, you should have a pet barking spider." << endl;
        
    }
    
}