// Created by: Nick Conant
// Last modified on: 10 Nov 2016
// Program accepts a file with student names and answers and compares them to
// An answer key file. It then writes to a file and the screen the students grades
// The class average and any questions that more than 50% of the class either missed
// Or omitted.

/* Can't seem to get the strings to store into the arrays correctly, going to 
   ask my programmer friend for help when he gets back from South Dakota on 
   Saturday. */

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

class AnswerInfo {
    
    public:
    
    string line = " ";
    ifstream inFS;
    ofstream outFS;
    void setStudentName();
    void setShortAnswers();
    
    private:
    string studentName[6][23];
    string studentAnswer[6][23];
    

};

void AnswerInfo::setStudentName() {
    inFS.open("studentanswers.txt");
    if (!inFS.is_open()) {
        cout << "Could not open studentanswers.txt." << endl;
    }
    while (!inFS.eof()) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 23; ++j) {
            if (j < 2) {
                getline(inFS, line);
                studentName[i][j] = line;
                cout << studentName[i][j] << " ";
            }
            else if (j < 20) {
                inFS >> studentAnswer[i][j];
                cout << studentAnswer[i][j] << " ";
            }
            else if (j < 23) {
                getline(inFS, line);
                studentAnswer[i][j] = line;
                cout << studentAnswer[i][j] << " ";
            }
            cout << endl;
    }
    }
}
    inFS.close();
}

int main() {
    string fileName = " ";
    
    cout << "Please enter a filename:";
    cin >> fileName;
    
    AnswerInfo student1;
    
    student1.setStudentName();
}