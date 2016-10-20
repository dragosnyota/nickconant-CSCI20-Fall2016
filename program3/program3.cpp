// Create by: Nick Conant
// Last modified on: 18 Oct 2016

/* Rock Paper Scissors Game: User enters their desired number of rounds,
   a choice is set for the computer, the user makes a choice and the process 
   is repeated either 3, 5 or 7 times based on the value the user chose.
   Program ends after the number of chosen rounds is reached and a final score
   is displayed showing the number of rounds played and number of times the user
   won. */

#include <iostream>
#include <stdlib.h> // for random numbers
#include <time.h>   // for random numbers
using namespace std;

class RockPaperScissorsGame {
    
    public: 
    
    void setComputerChoice();      // Randomly pick the computer choice
    void setNumberOfPlayerWins(int numRounds);  // Determines number of times the user wins 
                                   // based on number of rounds, computer choice and user choice, prints results
    
    //void printCompChoice();  /* FOR TESTING */
    
    int getComputerChoice();
    void printPlayerChoice(int userChoice);
    void printFinalScore();
    
    RockPaperScissorsGame();                    // default constructor
    RockPaperScissorsGame(int compGameChoice);  // second constructor
    
    private: 
    
    int compGameChoice = 1;
    int finalScore;
    
};

//default constructor
RockPaperScissorsGame::RockPaperScissorsGame() {
    
    compGameChoice = 1;
    
    return;
}

//second constructor
RockPaperScissorsGame::RockPaperScissorsGame(int compChoice) {
    
    compGameChoice = compChoice;
    
    return;
}

void RockPaperScissorsGame::setComputerChoice() {
    
    srand (time(NULL));
    compGameChoice = rand() % 3 + 1;
    
    return;
}

int RockPaperScissorsGame::getComputerChoice() {
     if (compGameChoice == 1) {
        cout << "rock";
    }
    else if (compGameChoice == 2) {
        cout << "paper";
    }
    else if (compGameChoice == 3) {
        cout << "scissors";
    }
    
}

void RockPaperScissorsGame::printPlayerChoice(int userChoice) {
    if (userChoice == 1) {
        cout << "rock";
    }
    else if (userChoice == 2) {
        cout << "paper";
    }
    else if (userChoice == 3) {
        cout << "scissors";
    }
}


void RockPaperScissorsGame::setNumberOfPlayerWins(int userChoice) {
     if ((userChoice == 1) && ((compGameChoice == 1) || (compGameChoice == 2)))  {
         finalScore = finalScore;
     }
     else if ((userChoice == 1) && (compGameChoice == 3)) {
         finalScore = finalScore + 1;
     }
     else if ((userChoice == 2) && (compGameChoice == 1)) {
         finalScore = finalScore + 1;
     }
     else if ((userChoice == 2) && ((compGameChoice == 2) || (compGameChoice == 3))) {
         finalScore = finalScore;
     }
     else if ((userChoice == 3) && (compGameChoice == 2)) {
         finalScore = finalScore + 1;
     }
     else if ((userChoice == 3) && ((compGameChoice == 1) || (compGameChoice == 3))) {
         finalScore = finalScore;
     }
}

void RockPaperScissorsGame::printFinalScore() {
    
    cout << finalScore;
    return;
    
}

                    //void RockPaperSciccorsGame::printCompChoice() { FOR TESTING RANDOM NUMBER OUTPUT
                      //  cout << compGameChoice;
                        //return;
                       // }

int main() {
    
    int userChoice;
    int startRound = 1;
    int numRounds;
    
    RockPaperScissorsGame letsPlay;
    
    cout << "Welcome to the rock, paper, scissors game!" << endl;
    cout << "To start, please enter how many rounds you want to play." << endl;
    cout << "You may choose 3, 5 or 7" << endl << ":";
    cin  >> numRounds;
    
    if (numRounds == 3){
        while (startRound <= numRounds) {
            cout << "Choose rock, paper, or scissors." << endl;
            cout << "(enter 1 for rock, 2 for paper, 3 for scissors):";
            cin  >> userChoice;
            letsPlay.setComputerChoice();
            letsPlay.setNumberOfPlayerWins(userChoice);
            cout << "You chose "; 
            letsPlay.printPlayerChoice(userChoice);
            cout << ", " << "the computer chose ";
            letsPlay.getComputerChoice();
            cout << "." << endl << endl;
            ++startRound;
    
        }
        cout << "After " << numRounds << " rounds, you have won ";
        letsPlay.printFinalScore();
        cout << " time(s)." << endl << endl;
        cout << "Thanks for playing!" << endl;
        
    }
    else if (numRounds == 5) {
        while (startRound <= numRounds) {
            cout << "Choose rock, paper, or scissors." << endl;
            cout << "(enter 1 for rock, 2 for paper, 3 for scissors):";
            cin  >> userChoice;
            letsPlay.setComputerChoice();
            letsPlay.setNumberOfPlayerWins(userChoice);
            cout << "You chose "; 
            letsPlay.printPlayerChoice(userChoice);
            cout << ", " << "the computer chose ";
            letsPlay.getComputerChoice();
            cout << "." << endl << endl;
            ++startRound;
        }
        cout << "After " << numRounds << " rounds, you have won ";
        letsPlay.printFinalScore();
        cout << " time(s)." << endl << endl;
        cout << "Thanks for playing!" << endl;
        
    }
    else if (numRounds == 7) {
        while (startRound <= numRounds) {
            cout << "Choose rock, paper, or scissors." << endl;
            cout << "(enter 1 for rock, 2 for paper, 3 for sciccors):";
            cin  >> userChoice;
            letsPlay.setComputerChoice();
            letsPlay.setNumberOfPlayerWins(userChoice);
            cout << "You chose "; 
            letsPlay.printPlayerChoice(userChoice);
            cout << ", " << "the computer chose ";
            letsPlay.getComputerChoice();
            cout << "." << endl << endl;
            ++startRound;
        }
        cout << "After " << numRounds << " rounds, you have won ";
        letsPlay.printFinalScore();
        cout << " time(s)." << endl << endl;
        cout << "Thanks for playing!" << endl;
        
    }
    else {
        cout << "You entered an incorrect number rounds, terminating program.";
    }
    
    
    return 0;
}
   