// Created by: Nick Conant
// Last Modified on: 9/17/2016
// Lab 7 Lambchop Functionized

#include <iostream>
#include <string>
using namespace std;

//Function for first part of the chorus
void ChorusPart1(string modWord1, string modWord2) { 
    cout << "This is the " << modWord1 << " that never ends." << endl;
    cout << "Yes it goes on and on my " << modWord2 << "." << endl;
    
    return;
}

//Function for the second part of the chorus
void ChorusPart2(string secondChorus1, string secondChorus2) { 
    cout << "Some people started " << secondChorus1 << " it," << endl;
    cout << "not knowing what it was," << endl;
    cout << "and they'll continue " << secondChorus1 << " it " << 
            secondChorus2 << " just because..." << endl << endl;
            
    return;
}

int main() {
    
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    ChorusPart1("song", "friend");
    ChorusPart2("singing", "forever");
    
    cout << endl << endl << "You get the point... " << endl;
    
    return 0;
}