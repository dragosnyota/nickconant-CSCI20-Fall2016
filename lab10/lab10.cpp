// Created by: Nick Conant
// Last modified on: 1 Oct 2016
// prints solutions to assigned opperator problems

#include <iostream>
using namespace std;

int main() {
    
    int suzyAge = 25;
    int johnAge = 21;
    if (suzyAge < johnAge) {
        cout << "Suzy is younger than John." << endl;
    }
    else {
        cout << "Suzy is older than John." << endl;
    }
    
    int x = 7;
    int y = 7;
    if (x >= y) {
        cout << "X is greater than or equal to Y." << endl;
    }
    else {
        cout << "X is not Greater than or equal to Y." << endl;
    }
    
    int a = 1;
    int b = 9;
    if (a == b) {
        cout << "A is equal to B." << endl;
    }
    else {
        cout << "A is not equal to B." << endl;
    }

    int limit = 20;
    int count = 10;
    if (((limit * count) / 2) > 0) {
        cout << "Half the quantity 'limit' times 'count' is greater than zero." << endl;
    }
    else {
        cout << "Half the quantity 'limit' times 'count' is less than or equal to zero." << endl;
    }
    
    int t = -4;
    int z = 0;
    if ((t > 5) || (z < 2)) {
        cout << "T is greater than 5 or Z is less than zero." << endl;
    }
    else {
        cout << "T is less than or equal to 5 and Z is greater than or equal to 2." << endl;
    }
    
    int variable = -5;
    if (!(variable > 0)) {
        cout << "It is true that 'Variable' is not greater than zero" << endl;
    }
    else {
        cout << "It is false that 'Variable' is not greater than zero" << endl;
    }
    
    int varA = 16;
    if (((varA / 4) < 8) && (varA >= 4)) {
        cout << "A divided by 4 is less than 8 AND A is greater than 4." << endl;
    }
    else {
        cout << "A divided by 4 is greater than or equal to 8 or A is less than 4." << endl;
    }
    
    int varX = -2;
    int varY = 5;
    if (((varX * varY) < 10) || ((varY * z) < 10)) {
        cout << "X times Y is less than 10 or Y times Z is less than 10." << endl;
    }
    else {
        cout << "X times Y and Y times Z are greater than or equal to 10." << endl;
    }
    
    int j = -2;
    int k = 5;
    int l = 4;
    if (!((j * l) < 10 ) || ((y / x) * 4) < (y*2)) {
        cout << "Either J times L is not less than 10" << endl;
        cout << "or 4 times the quantity Y divided by X is less than Y times 2." << endl;
    }
    else {
        cout << "J times L is less than 10 and 4 times the quantity Y divided by X is less than Y times 2." << endl;
    }
    }