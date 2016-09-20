//created by: Nick Conant
//Last modified on: 9/26/2016
//Lab 8: Return Values
// Converts kilograms to pounds and vice versa

#include<iostream>
using namespace std;

// constant for number of pounds per kilograms
const double POUNDS_PER_KILO = 2.2;

// converts user input pounds to kilograms
double PoundsToKilograms(double numPounds) {
    
    double numKilo = 0;
    
    numKilo = numPounds * (1.0/POUNDS_PER_KILO);
    
    return numKilo;
}

// converts user input kilograms to pounds
double KilogramsToPounds(double numKilo) {
    
    double numPounds = 0;
    
    numPounds = numKilo * POUNDS_PER_KILO;
    
    return numPounds;
}

int main() {
    
    double userPounds = 0;
    double userKilo   = 0;
    
    cout << "Please enter number of pounds to convert to kilograms: "
    << "ex. 2.2" << endl;
        cin >> userPounds;
        
    cout << "Please enter number of kilograms to convert to pounds: "
    << "ex. 1.8" << endl;
        cin >> userKilo;
        
    cout << userPounds << " pounds = " << PoundsToKilograms(userPounds) << " kilograms." << endl;
    cout << userKilo << " kilograms = " << KilogramsToPounds(userKilo) << " pounds." << endl;
    
    return 0;
}