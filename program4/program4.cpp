// Created by: Nick Conant
// Last modified on: 13 Nov 2016
// Program accepts a file with student names and answers and compares them to
// An answer key file. It then writes to a file and the screen the students grades
// The class average and any questions that more than 50% of the class either missed
// Or omitted.



#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

class AnswerInfo {
    
    public:

    void setStudentInfo(int, string);                           
    void setAnswerKey(string);
    void setStudentScore(int);
    string getStudentName(int);
    string getAnswerKey();
    double getStudentScore(int);
    string getWrongAnswers(int);
    
    private:
    string studentName[6];
    string studentAnswer[6];
    string answerKey;
    double studentScore[6];
    string wrongAnswers[6];

};

// Separates student names from answers and sets them to studentName[] and studentAnswer[]
void AnswerInfo::setStudentInfo(int index, string line) { 
   
   int spaceLoc;
   
   spaceLoc = line.find(" ");
   studentName[index] = line.substr(0, spaceLoc + 1);           // Grabs first name with a space
   line.erase(0, spaceLoc + 1);                                 // Removes first name with space from line
   spaceLoc = line.find(" ");
   studentName[index].append(line.substr(0, spaceLoc + 1));     // Appends student's last name to studentName[]
   line.erase(0, spaceLoc + 1);
   studentAnswer[index] = line;                                 // Contents of line are now only the students answers
   
}

// Sets answerKey
void AnswerInfo::setAnswerKey(string answers) {
    
    answerKey = answers;
    
}

// Sets students scores
void AnswerInfo::setStudentScore(int index) {
    
    int studentSpace1;
    int studentSpace2;
    int answerKeySpace1;
    int answerKeySpace2;
    string tempAnswerKey;
    string tempStudentAnswers;
    studentScore[index] = 0.0;
    wrongAnswers[index] = "";                   // Initializes wrongAnswers array to an empty string in order to append in wrong answers
    
    studentSpace1 = studentAnswer[index].find(" ");
    tempStudentAnswers = studentAnswer[index].substr(0, studentSpace1);
    answerKeySpace1 = answerKey.find(" ");
    tempAnswerKey = answerKey.substr(0, answerKeySpace1);
    
    //cout << tempAnswerKey << " V " << tempStudentAnswers << endl;  // I'm testing here
    
    if (tempStudentAnswers == tempAnswerKey) {
        
        studentScore[index] = studentScore[index] + 1;
    }
    
    else if (tempStudentAnswers == "?") {
        
        wrongAnswers[index].append("? ");
        
    }
    
    else {
        
        wrongAnswers[index].append(tempStudentAnswers);
        wrongAnswers[index].append(" ");
        studentScore[index] = studentScore[index] - 0.25;
    }
    
    for (int i = 0; i < 20; ++i) {
    
    studentSpace2 = studentAnswer[index].find(" ", studentSpace1 + 1);
    tempStudentAnswers = studentAnswer[index].substr(studentSpace1 + 1, studentSpace2 - (studentSpace1 + 1));
    answerKeySpace2 = answerKey.find(" ", answerKeySpace1 + 1);
    tempAnswerKey = answerKey.substr(answerKeySpace1 + 1, answerKeySpace2 - (answerKeySpace1 + 1));
    
    //cout << tempAnswerKey << " V " << tempStudentAnswers << endl;  // I'm testing here
    
    if (tempStudentAnswers == tempAnswerKey) {
        
        studentScore[index] = studentScore[index] + 1;
    }
    
    else if (tempStudentAnswers == "?") {
        
        wrongAnswers[index].append("? ");
    }
    
    else {
        
        wrongAnswers[index].append(tempStudentAnswers);
        wrongAnswers[index].append(" ");
        studentScore[index] = studentScore[index] - 0.25;
    }
    
    studentSpace1 = studentSpace2;
    answerKeySpace1 = answerKeySpace2;
    
    }
}

// Returns student names
string AnswerInfo::getStudentName(int index) {
    
    return studentName[index];
}

// Returns answer key
string AnswerInfo::getAnswerKey() {
    
    return answerKey;
}

// Returns student score
double AnswerInfo::getStudentScore(int index) {
    
    return studentScore[index];
}

// Returns students incorrect answers
string AnswerInfo::getWrongAnswers(int index) {
    
    return wrongAnswers[index];
}

int main() {
    string fileName      = " ";
    string line          = " ";
    string tempAnswerKey = " ";
    string finalGrades   = " ";
    double avgScore      = 0.0;
    ifstream inFS;                      // if stream for student answers
    ifstream answerFS;                  // if stream for answer key
    ofstream outFS;
    
    AnswerInfo student1;
    
    cout << "Please enter a filename:";
    cin >> fileName;
    //fileName = "studentanswers.txt";  // FOR TESTING!!!
    inFS.open(fileName);
    
    if (!inFS.is_open()) {
        cout << "Could not open " << fileName << "." << endl;
        
        return 0;
    }
    
    // Runs class function for splitting student name from student answers
    while (!inFS.eof()) {
        for (int i = 0; i < 6; ++i) {
            getline(inFS, line);
            student1.setStudentInfo(i, line);
            
        }
    }
    
    inFS.close();
    
    answerFS.open("answerkey.txt");
    
    if (!answerFS.is_open()) {
        cout << "Could not open answerkey.txt." << endl;
        
        return 0;
    }
    
    getline(answerFS, tempAnswerKey);
    student1.setAnswerKey(tempAnswerKey);
    
    answerFS.close();
    
    outFS.open("finalscores.txt");
    
    if (!outFS.is_open()) {
        cout << "Could not open finalscores.txt." << endl;
        
        return 0;
    }
    
    // Outputs student names with wrong answers and final scores. Adds final scores.
    for (int i = 0; i < 6; ++i) {
        
        student1.setStudentScore(i);
        avgScore = avgScore + student1.getStudentScore(i);
        finalGrades = student1.getStudentName(i).append(student1.getWrongAnswers(i));
        cout << finalGrades << " FINAL SCORE: " << student1.getStudentScore(i) << endl;
        outFS << finalGrades << " FINAL SCORE: " << student1.getStudentScore(i) << endl;
        
    }
    
    avgScore = avgScore / 6.0;
    cout << "Class Average: " << avgScore << endl;
    outFS << "Class Average: " << avgScore << endl;
    
    outFS.close();
    
    
}