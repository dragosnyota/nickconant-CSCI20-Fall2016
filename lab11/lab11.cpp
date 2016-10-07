// Created by: Nick Conant
// Last modified on: 4 Oct 2016
// Program calculates taxes owed based on filing status and 
// entered AGI. Returns user's name, AGI, taxes owed and refun amount if any.

#include <iostream>
using namespace std;

int main() {
    
    string userName               = "";
    char   marriageStatus         = ' ';
    double    adjGrossIncome         = 0.0;
    double    taxesWithheld          = 0.0; 
    double taxesOwed              = 0.0;
    double taxesReturned          = 0.0;
    double singleAgiMinusStdrdDedctn = 0.0;
    double marriedAgiMinusStdrdDedctn = 0.0;
    
    cout << "Please enter your name:";
    getline(cin, userName);
    cout << "Are you married? (Enter Y for yes or N for no):";
    cin >> marriageStatus;
    cout << "Enter your Adjusted Gross Income:";
    cin >> adjGrossIncome;
    cout << "Enter taxes withheld:";
    cin >> taxesWithheld;
    cout << endl;
    
    //The following if/else statement subracts the standard deduction from the entered AGI based on marriage status.
    if (marriageStatus == 'N') {
        
        adjGrossIncome = adjGrossIncome - 10000.0;
        
    }
    
    else if (marriageStatus == 'Y')
    {
        
        adjGrossIncome = adjGrossIncome - 20000.0;
        
    }
    
    else {
        
        cout << "Invalid character used for marriage status, please use Y or N" << endl;
        
    }
    
    //The following if/else statement sets adjusted AGI from above if/else statement to zero if the adjustment resulted in a negative number.
    if (adjGrossIncome <= 0.0) {
        
        adjGrossIncome = 0.0;
        
    }
    
    else {
        
        adjGrossIncome = adjGrossIncome;
        
    }
    
    // The following if/else statements determine the taxes owed value by comparing marriage status and the assigned tax bracket based on
    // adjusted AGI.
    if ((marriageStatus == 'N') && (adjGrossIncome <= 8925.0)) {
        
        taxesOwed = (adjGrossIncome * 0.10);
        
    }
    
       else if ((marriageStatus == 'N') &&  (adjGrossIncome <= 36250.0)) {
        
        taxesOwed = (((adjGrossIncome - 8925.0) * 0.15) + 892.50);
        
    }
    
       else if ((marriageStatus == 'N') &&  (adjGrossIncome <= 87850.0)) {
        
        taxesOwed = (((adjGrossIncome - 36250.0) * 0.25) + 4991.25);
    }
    
       else if ((marriageStatus == 'N') && (adjGrossIncome >= 87851.0)) {
        
        taxesOwed = (((adjGrossIncome - 87850.0) * 0.28) + 17891.25);
        
    }
    
       else if ((marriageStatus == 'Y') && (adjGrossIncome <= 17850.0)) {
        
        taxesOwed = adjGrossIncome * 0.10;
        
    } 
    
       else if ((marriageStatus == 'Y') &&  (adjGrossIncome <= 72500.0)) {
        
        taxesOwed = (((adjGrossIncome - 17850) * 0.15) + 1785.0);
        
    } 
    
       else if ((marriageStatus == 'Y') && (adjGrossIncome > 72500.0)) {
        
        taxesOwed = (((adjGrossIncome - 72500) * 0.28) + 9982.50);
        
    }
    
    else {
        
        cout << "Incorrect values entered" << endl;
        
    }
    
    
    // Following if/else statement sets taxes owed value to zero if calculated amount in 
    // above statements evaluates to less than zero.
    if (taxesOwed <= 0.0) {
        
        taxesOwed = 0.0;
        
    }
    
    else {
        
        taxesOwed = taxesOwed;
        
    }
    
    // Following if/else statement determines whether there will be taxes returned by evaluating
    // if the taxes withheld amount is larger than the taxes owed amount.
    if (taxesWithheld >= taxesOwed) {
        
        taxesReturned = taxesWithheld - taxesOwed;
        taxesOwed = 0.0;
        
    }
    
    else {
        
        taxesOwed = taxesOwed - taxesWithheld;
        taxesReturned = 0.0;
        
    }
    
    // Final output
    cout << "Name: " << userName << endl << endl;
    cout << "Total Gross Adjusted Income: $" << adjGrossIncome << endl << endl;
    cout << "Total tax owed: $" << taxesOwed << endl << endl;
    cout << userName << " is entitled to a REFUND of $" << taxesReturned << endl << endl;
    
}