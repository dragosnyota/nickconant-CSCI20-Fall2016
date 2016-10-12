// Created by: Nick Conant
// Last modified on: 11 Oct 2016
// Program prints all minutes between two hour values

#include <iostream>
using namespace std;

int main() {
    
    int startHourValue = 0; // starting hour value
    int endHourValue   = 0; // ending hour value
    int minuteValue    = 0; 
    
    startHourValue = 1;
    endHourValue   = 2;
    
    while (startHourValue <= endHourValue) { // while starting hour value is less than or equal to ending hour value the loop will run
        
        minuteValue = minuteValue + 1; // adds one to minute value each time the loop is run
        
        if (minuteValue < 10) { // if minute value is less than 10, prints hour and minute value with a 0 in front of minute value i.e. "2:08"
            
            cout << startHourValue << ":0" << minuteValue << endl;
            
        }
        
        else if (minuteValue < 59) { // prints hour and minute value if minutes are less than 59 i.e. "1:48"
            
            cout << startHourValue << ":" << minuteValue << endl;
            
        }
        
        else if ((minuteValue == 59) && (startHourValue <= endHourValue)){ // when minute value is 59 and starting hour is less than or equal
                                                                           // to ending value, prints the values and then sets minutes to 0 and 
                                                                           // adds one to hour value
        
            cout << startHourValue << ":" << minuteValue << endl;
            
            minuteValue = 0;
            startHourValue = startHourValue + 1;
        
        }
        
    }
    
    cout << "When prompted, enter a starting and stopping hour in whole positive numbers." << endl;
    cout << "The starting hour value must be less than the ending hour value." << endl << endl;
    cout << "Enter a starting hour: ";
    cin >> startHourValue;
    cout << "Enter an ending hour: ";
    cin >> endHourValue;
    
    // loop is the same as the above loop
    while (startHourValue <= endHourValue) {
        
        minuteValue = minuteValue + 1;
        
        if (minuteValue < 10) {
            
            cout << startHourValue << ":0" << minuteValue << endl;
            
        }
        
        else if (minuteValue < 59) {
            
            cout << startHourValue << ":" << minuteValue << endl;
            
        }
        
        else if ((minuteValue == 59) && (startHourValue <= endHourValue)){
        
            cout << startHourValue << ":" << minuteValue << endl;
            
            minuteValue = 0;
            startHourValue = startHourValue + 1;
        
        }
        
    }
    
}