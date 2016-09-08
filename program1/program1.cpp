// Created by: Nick Conant
// Last revised on: 8 Sep 2016
// Program number 1: Variables

#include <iostream>
using namespace std;

int main() {
    
    double hourlyWage = 0;
    double hoursWorked = 0;
    double taxRate = 0.17;
    double netPay = 0;
    double grossPay = 0;
    string userName = "";
    
    cout << "Please enter your name: ";
    getline(cin, userName);
    cout << "Enter your hourly wage: ";
    cin >> hourlyWage;
    cout << "Enter your hours worked: ";
    cin >> hoursWorked;
    
    grossPay = hourlyWage * hoursWorked;
    netPay = grossPay - (grossPay * taxRate);
    
    cout << "Name: " << userName << endl << endl;
    cout << "Hours Worked: " << hoursWorked << endl << endl;
    cout << "Pay Rate: $" << hourlyWage << endl << endl;
    cout << "Gross Pay: $" << grossPay << endl << endl;
    cout << "Net Pay: $" << netPay << endl;
    
}