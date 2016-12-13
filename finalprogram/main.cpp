// Created by: Nick Conant
// Last modified on: Dec. 11 2016
// Short text based RPG

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//#include "characterclass.cpp"
#include "combat.cpp"

void doCombat(characterClass* player, characterClass* target) {                 // Function for combat loop

    combatClass combat;
    combat.startCombat(player, target);
    string choice = "";
    
    while( !combat.isDone() )                                                   // While loop, runs until player or enemy HP <= 0
    {
        cout << "\"attack\" \"defend\" or \"drink beer\": ";
        getline(cin, choice);
        cout << endl << endl;
        
        combat.Loop(choice);
        
    }
}

int main() {
characterClass* player = new characterClass();                                  //For player
characterClass* enemy = new characterClass();;                                  //For enemy
string characterName = " ";
string charChoice = " ";
    
cout << "------------Welcome to A Day in the Life!------------" << endl << endl;
cout << "In this game you will assume the role of one of three characters." << endl;
cout << "Your choices include \"peasant\", \"mercenary\" or \"thief\"." << endl;
cout << "Please choose your character: ";

getline(cin, characterName);

//do-while loop for character selection
do {

if (characterName == "peasant") {
    
    player->loadTemplate(0);
}

else if (characterName == "mercenary") {
    
    player->loadTemplate(1);
    
}

else if (characterName == "thief") {
    
    player->loadTemplate(2);
    
}

else {

    cout << "type it correctly you lazy prick: ";
    getline(cin, characterName);
    
}

} while ((characterName != "peasant") && (characterName != "mercenary") && (characterName != "thief"));

enemy->loadTemplate(3);                                                         // Loads the template for pig-face enemy




cout << endl;
cout << "   After a hard day's work, you make your way to the local tavern \"New Kama Bar\"." << endl;
cout << "It's always your favorite place to wind down even if it is a bit rowdy at times." << endl;
cout << "You walk through the doors and are immediately hit with the familiar scents of" << endl;
cout << "roasted meat, mead and sweat all mixed together. You stroll up to the bar and" << endl;
cout << "order your usual mug of New Kama Ale. While you wait for your booze, you feel" << endl;
cout << "a tap on your shoulder. You turn around to see an ugly pig faced man flanked by" << endl;
cout << "a rather squirrely looking fellow." << endl << endl;
cout << "Pig-face: \"My friend doesn't like you.\"" << endl << endl;
cout << "You turn back to the bar, ignoring the man and his companion." << endl;
cout << "Immediately there is another tap on your shoulder, this time with more force behind it." << endl << endl;
cout << "Pig-face: \"My friend doesn't like you either!\"" << endl << endl;

cout << "You can either \"ignore\" or \"attack\": ";
getline(cin, charChoice);

    // if-else statements for character choices
    if (charChoice == "ignore") {
        
        cout << endl << "   You choose to ignore the pig-faced man and turn back to the bar." << endl;
        cout << "Only a moment passes before the man grabs you by the shoulder and turns you around." << endl << endl;
        cout << "Pig-face: \"You shouldn't ignore us, we have the death sentence in twelve kingdoms!\"" << endl << endl;
        cout << "You can either \"ignore\" or \"attack\": ";
        getline(cin, charChoice);
    
        if (charChoice == "ignore") {
        
        cout << endl << "   As you attempt to turn back to your drink and ignore the man again, he reaches back and punches you as hard as he" << endl;
        cout << "can, knocking you to the floor and disorienting you briefly." << endl;
        
            player->setCurrentHP(player->getCurrentHP() / 2);
            doCombat(player, enemy);
        
        }
        else if(charChoice == "attack") {
            
            //Starts the combat loop with enemy HP halved
            enemy->setCurrentHP(enemy->getCurrentHP() / 2);
            doCombat(player, enemy);
            
        }
        
        else {
            
            cout << "Enter either \"ignore\" or \"attack\" you dipwad: ";
            getline(cin, charChoice);
            
        }
    }
    
    else if (charChoice == "attack") {
        
        //Starts combat loop with both characters at full HP
        doCombat(player, enemy);
    }
    
    else {
        
        //This is my own little touch, punishes player for not reading and starts combat loop with player at half HP
        cout << "Jesus christ! Can you not read?!? Your choices were \"ignore\" or \"attack\", now you have to start the fight with half health... idiot." << endl << endl;
        player->setCurrentHP(player->getCurrentHP() / 2);
        doCombat(player, enemy);
    }
    
if (enemy->getCurrentHP() == 0) {
    
    cout << "Congratulations! You have survived another night at New Kama Bar!" << endl;
    cout << "The town guards arrive and hand you a handsome sum of gold for incapacitating" << endl;
    cout << "the wanted man and his friend. Looks like it's time to buy a round for the bar!" << endl;
}

else if (player->getCurrentHP() == 0) {
    
    cout << "The last thing you see is the pig-faced man pawing through your pockets before" << endl;
    cout << "you die, choking on your own blood." << endl << endl;
    cout << "------------GAME OVER------------";
}

delete player;  //prevents memory leak
delete enemy;   //prevents memory leak
}