#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

#include "characterclass.cpp"

class combatClass {
    
    public: 
    
    void startCombat(characterClass*, characterClass*);     //Sets player and enemy
    bool isDone();                                          //Boolean for ending combat loop
    void Loop(string);                                      //Combat loop
    
    private:
    
    characterClass* player;
    characterClass* enemy;
    int attackValue;
    
};

void combatClass::startCombat(characterClass* user, characterClass* target) {
    
    player = user;
    enemy = target;
    
}

bool combatClass::isDone() {
    
    if ((player->getCurrentHP() < 1) || (enemy->getCurrentHP() < 1)) {
        
        return true;
    }
    
    else {
        
        return false;
    }
}

void combatClass::Loop(string choice) {
    
    int attackValue;                                    //temporary attack value
    int tempDEF = player->getDEF();                    //temporary value for defend option
    
    if (choice == "attack") {
        
        attackValue = player->getSTR() - enemy->getDEF();
        cout << "You attack " << enemy->getClassName() << " for " << attackValue << " damage!\n";
        enemy->setCurrentHP(enemy->getCurrentHP() - attackValue);
        cout << enemy->getClassName() << " now has " << enemy->getCurrentHP() << " health.\n\n";
        
    }
    else if (choice == "defend") {
        
        tempDEF = player->getDEF() * 2;
        cout << "You defend against the enemy's attack.\n\n";
        
    }
    else if (choice == "drink beer") {
        
        player->setCurrentHP(player->getCurrentHP() + 10);
        cout << "You take a swig of beer and gain 10 HP.\n\n";
        
    }
    else {
        
        cout << "Enter the right god damn command you asshat!" << endl << endl;  // enemy gets a free attack because the player is dumb as hell
        
    }
    
    attackValue = enemy->getSTR() - tempDEF;
    
    if (attackValue < 0) {
        attackValue = 0;
    }
    
    cout << "The enemey attacks you for " << attackValue << " damage.\n";
    player->setCurrentHP(player->getCurrentHP() - attackValue);
    cout << "You now have " << player->getCurrentHP() << " HP.\n\n";
    
    // I tried to output with a return value by concatenating values onto a string variable, but it became more trouble than it was worth, sorry.
    
}