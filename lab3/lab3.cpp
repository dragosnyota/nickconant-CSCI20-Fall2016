// Nick Conant
// 30 Aug 2016
// Madlib lab

#include <iostream>
using namespace std;

int main()
{
    string name1 = ""; //variable declarations
    string noun1 = "";
    string noun2 = "";
    string noun3 = "";
    string adj1 = "";
    string adj2 = "";
    string adj3 = "";
    int numAnimals = 0;
    float numPooped = 0;
    char hyphon = '-';
    
    cout << "Enter a person's name: " << endl; // begin user input
        cin >> name1;
    cout << "Enter a noun: " << endl;
        cin >> noun1;
    cout << "Enter another noun: " << endl;
        cin >> noun2;
    cout << "Enter a third noun: " << endl;
        cin >> noun3;
    cout << "Enter an adjective: " << endl;
        cin >> adj1;
    cout << "Enter another adjective: " << endl;
        cin >> adj2;
    cout << "Enter a third adjective: " << endl;
        cin >> adj3;
    cout << "Enter a number: " << endl;
        cin >> numAnimals;
    cout << "Enter a number with a decimal: " << endl;
        cin >> numPooped;
    
    cout << "One day " << name1 << " saw a " << noun1 << " in the distance." <<endl; //begin output of madlib
    cout << "The " << noun1 << " had " << numAnimals << " " << noun2 << " following it." << endl;
    cout << "As " << name1 << " watched, the " << noun2 << "s began eating " << noun1 << "." << endl;
    cout << name1 << " was amazed to see each " << noun2 << " poop out " << numPooped << " " 
         << adj1 << " " << noun3 << "'s." << endl;
    cout << "What a " << adj2 << hyphon << adj3 << " thing to see!" << endl;
    
}