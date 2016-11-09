// Created by: Nick Conant
// Last modified on: 8 Nov 2016

// The following program reads a list of numbers from a file into an multidimensional array
// It then finds the sum of each row  and column of numbers and outputs the results
// In a matrix format.

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main() {
    
    ifstream inFS;
    ofstream outFS;
    int fileArray[3][4];
    int tempNumber;
    int rowSum = 0;
    int columnSum = 0;
    
    inFS.open("lab19numbers.txt");
    
    if (!inFS.is_open()) {
        cout << "Could not open file lab19numbers.txt.";
    }
    
    outFS.open("output.txt");
    if (!outFS.is_open()) {
        cout << "Could not open output.txt." << endl;
    }
    
    // Writes numbers from file with error checking to fileArray
    while (inFS.good()) {
        for (int i = 0; i < 3; ++i){
            for (int j = 0; j < 4; ++j) {
                inFS >> fileArray[i][j];
                //cout << "Number read:" << fileArray[i][j] << endl; *USED FOR TESTING*
            }
        }
    }
    
    inFS.close(); // Closes lab19numbers.txt
    
    // Prints first row of integers.
    for (int j = 0; j < 4; ++j) {
        tempNumber = fileArray[0][j];
        rowSum = rowSum + tempNumber;
        cout << fileArray[0][j] << "  ";
        outFS << setw(3) << left << fileArray[0][j];
    }
    cout << rowSum << endl << endl;
    outFS << setw(3) << left << rowSum << endl << endl;
    
    rowSum = 0;                          // Resest row sum for next row.
    
    // Prints second row of integers.
    for (int j = 0; j < 4; ++j) {
        tempNumber = fileArray[1][j];
        rowSum = rowSum + tempNumber;
        cout << fileArray[1][j] << " ";
        outFS << setw(3) << left << fileArray[1][j];
    }
    cout << rowSum << endl << endl;
    outFS << setw(4) << right << rowSum << endl << endl;
    
    rowSum = 0;                           // Resets row sum for next row.
    
    // Prints third row of integers
    for (int j = 0; j < 4; ++j) {
        tempNumber = fileArray[2][j];
        rowSum = rowSum + tempNumber;
        cout << fileArray[2][j] << "  ";
        outFS << setw(3) << left << fileArray[2][j];
    }
    cout << rowSum << endl << endl;
    outFS << setw(3) << left << rowSum << endl << endl;
    
    // Finds the sum of the first column
    for (int i = 0; i < 3; ++i) {
        tempNumber = fileArray[i][0];
        columnSum = columnSum + tempNumber;
    }
    cout << columnSum << " ";
    outFS << setw(3) << left << columnSum; // Outputs to file
    
    columnSum = 0;
    
    // Finds the sum of the second column
    for (int i = 0; i < 3; ++i) {
        tempNumber = fileArray[i][1];
        columnSum = columnSum + tempNumber;
    }
    cout << columnSum << " ";
    outFS << setw(3) << left << columnSum; // Outputs to file
    
    columnSum = 0;
    
    // Finds the sum of the third column
    for (int i = 0; i < 3; ++i) {
        tempNumber = fileArray[i][2];
        columnSum = columnSum + tempNumber;
    }
    cout << columnSum << " ";
    outFS << setw(3) << left << columnSum; // Outputs to file
    
    columnSum = 0;
    
    // Finds the sum of the fourth column
    for (int i = 0; i < 3; ++i) {
        tempNumber = fileArray[i][3];
        columnSum = columnSum + tempNumber;
    }
    cout << columnSum << endl;
    outFS << setw(3) << left << columnSum; // Outputs to file
    
    outFS.close(); // Closes output.txt
    
}