// Nick Conant
// 1 Sep 2016
// Coinstar emulator

#include <iostream>
using namespace std;

int main()
{
    int coinsEntered       = 0;
    int quartersGiven      = 0;
    int dimesGiven         = 0;
    int nickelsGiven       = 0;
    int penniesGiven       = 0;
    double changeFee       = 0.109;
    double dollarsReceived = 0;
    
    cout << "Please enter amount in cents: ";
        cin >> coinsEntered;
    cout << endl;
    cout << "You have entered " << coinsEntered << endl;
        quartersGiven = coinsEntered / 25;                                            // converts to quarters
        dimesGiven = ((coinsEntered - (quartersGiven * 25)) / 10);                    // converts to dimes
        nickelsGiven = (coinsEntered - (quartersGiven * 25) - (dimesGiven * 10)) / 5; // gives number of nickels
        penniesGiven = coinsEntered % 5;                                              // gives number of pennies
    cout << "you have " << quartersGiven << " quarters, "<< dimesGiven << " dimes, "
         << nickelsGiven << " nickels, and " << penniesGiven << " pennies." << endl;
    cout << "The total is: " << coinsEntered << ", after the fee you will receive: $";
        dollarsReceived = (coinsEntered * 0.01) - ((coinsEntered * 0.01) * changeFee); // applies 10.9% fee
    cout << dollarsReceived << endl;
}