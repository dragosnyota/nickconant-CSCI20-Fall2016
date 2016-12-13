#include<iostream>
using namespace std;

//#include "characterclass.h"

class characterClass {
    
    public: 
    
    void loadTemplate(int);  // Peasant = 0, mercenary = 1, thief = 2, enemy = 3+
    void setClassName(string);
    void setMaxHP(int);
    void setCurrentHP(int);
    void setSTR(int);
    void setDEF(int);
    void setLUCK(int);
    string getClassName();
    int getCurrentHP();
    int getMaxHP();
    int getSTR();
    int getDEF();
    int getLUCK();
    
    private:
    
    string className;
    
    int maxHP;
    int currentHP;
    int STR;
    int DEF;
    int LUCK;     //INTENDED TO BE USED FOR CRITICAL HITS---------NOT IN USE-----------
    
    
};

//Function for loading character templates
void characterClass::loadTemplate(int choice) {
    
    switch(choice) {
        
        case 0:                     // case for peasant character
        setClassName("peasant");
        setMaxHP(30);
        setCurrentHP(getMaxHP());
        setSTR(15);
        setDEF(12);
        setLUCK(5);
        return;
        
        case 1:
        setClassName("mercenary");
        setMaxHP(50);
        setCurrentHP(getMaxHP());
        setSTR(20);
        setDEF(15);
        setLUCK(1);
        return;
        
        case 2:
        setClassName("thief");
        setMaxHP(35);
        setCurrentHP(getMaxHP());
        setSTR(15);
        setDEF(10);
        setLUCK(10);
        return;
        
        case 3:
        setClassName("Pig-face");
        setMaxHP(40);
        setCurrentHP(getMaxHP());
        setSTR(18);
        setDEF(10);
        setLUCK(1);
        return;
        
        default:
        cout << "You done fucked up!!!" << endl << endl << endl;
        return;
    }
}

void characterClass::setClassName(string inClassName) {
    
    className = inClassName;
    
}

void characterClass::setMaxHP(int hpValue) {
    
    maxHP = hpValue;
    
}

void characterClass::setCurrentHP(int hpValue) {
    
    currentHP = hpValue;
    
    //Makes it so current HP cannot be greater than maxHP
    if (currentHP > maxHP) {
        
        currentHP = maxHP;
        
    }
    
}

void characterClass::setSTR(int strVal) {
    
    STR = strVal;
    
}

void characterClass::setDEF(int defVal) {
    
    DEF = defVal;
    
}

void characterClass::setLUCK(int luckVal) {
    
    LUCK = luckVal;
    
}

string characterClass::getClassName(){
    
    return className;
}

int characterClass::getCurrentHP(){
    
    //Sets currentHP to 0 if less than 0
    if (currentHP < 0) {
        
        return 0;
        
    }
    return currentHP;
}

int characterClass::getMaxHP(){
    
    return maxHP;
    
}

int characterClass::getSTR() {
    
    return STR;
}

int characterClass::getDEF() {
    
    return DEF;
}

int characterClass::getLUCK() {
    
    return LUCK;
}