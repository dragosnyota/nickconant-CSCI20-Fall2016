// Created by: Nick Conant
// Last Modified on: 29 Sep 2016
// Program 2: Distance Converter

#include <iostream>
using namespace std;

//Class for converting distances including: miles, yards, feet and inches
class DistanceConverter {
    
    public:
    
    
    
    void SetDistFromMiles(double miles_);
    void SetDistFromYards(double yardsVal);
    void SetDistFromFeet(double feetVal);
    void SetDistFromInches(double inchesVal);
    void SetDistFromMeters(double metersVal);
    double GetDistAsMiles();
    double GetDistAsYards();
    double GetDistAsMeters();
    double GetDistAsFeet();
    double GetDistAsInches();
    void PrintDist();
    
    DistanceConverter();              // default constructor
    DistanceConverter(double miles_); // second constructor
    
    private:
    
    double miles_ = 0.0;
    
};
    double mileVal = 0.0;
    double yardsVal = 0.0;
    double metersVal = 0.0;
    double feetVal = 0.0;
    double inchesVal = 0.0;

// default constructur
DistanceConverter::DistanceConverter() {
    miles_ = 0.0;
   
    
    return;
}

//second constructor
DistanceConverter::DistanceConverter(double miles_) {
    miles_ = 0.0;
    
    
    return;
}
//sets miles_
void DistanceConverter::SetDistFromMiles(double mileVal) {
    miles_ = mileVal;
    return;
}
//returns miles_ value
double DistanceConverter::GetDistAsMiles() {
    return miles_;
}
//converts yards to miles
void DistanceConverter::SetDistFromYards(double yardsVal) {
    miles_ = yardsVal * 0.00056818;
    
    return;
}
//converts feet to miles
void DistanceConverter::SetDistFromFeet(double feetVal) {
    miles_ = feetVal * 0.00018939;
    
    return;
}
//converts inches to miles
void DistanceConverter::SetDistFromInches(double inchesVal) {
    miles_ = (inchesVal / 12.0) * 0.00018939;
    
    return;
}
//converts meters to miles
void DistanceConverter::SetDistFromMeters(double metersVal) {
    miles_ = metersVal * 0.00062137;
    
    return;
}
//converts miles to meters
double DistanceConverter::GetDistAsMeters() {
    metersVal = miles_ / 0.00062137;
    
    return metersVal;
}
//converts miles to yards
double DistanceConverter::GetDistAsYards() {
    yardsVal = miles_ / 0.00056818;
    
    return yardsVal;
}
//converts miles to feet
double DistanceConverter::GetDistAsFeet() {
    feetVal = miles_ / 0.00018939;
    
    return feetVal;
}
//converts miles to inches
double DistanceConverter::GetDistAsInches() {
    inchesVal = (miles_ / 0.00018939) * 12;
    
    return inchesVal;
}
//prints distance values
void DistanceConverter::PrintDist() {
    cout << "Miles: " << miles_ << endl;
    cout << "Meters: " << metersVal << endl;
    cout << "Yards: " << yardsVal << endl;
    cout << "Feet: " << feetVal << endl;
    cout << "Inches: " << inchesVal << endl << endl;
    
    return;
}