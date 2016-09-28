//Created by: Nick Conant
//Last Modified on: 22 Sep 2016
//Lab 9: Functions and Classes

#include<iostream>
using namespace std;

//Class for converting temperatures including kelvin, celcius and farhenheit
class TemperatureConverter {
    
    double kelvin_ = 0.0;
    
    public:
        void SetTempFromKelvin(double kelvin_);
        double GetTempFromKelvin();
        void PrintTemps();
        void SetTempFromCelcius(double celciusValue);
        void SetTempFromFahrenheit(double fhValue);
        double GetTempAsCelcius();
        double GetTempAsFahrenheit();
        
        TemperatureConverter(); // default constructor
        TemperatureConverter(double kelvin_); // second constructor
        
        
    private:
    
    double celciusValue = 0.0;
    double fhValue      = 0.0;
    
    
};

// default constructor
TemperatureConverter::TemperatureConverter() { 
        kelvin_ = 0.0;
        return;
}

// second constructor  
TemperatureConverter::TemperatureConverter(double kelvin_) { 
    kelvin_ = 0.0;
    return;
}
        
        // sets kelvin value
        void TemperatureConverter::SetTempFromKelvin(double kelvinValue) {
            kelvin_ = kelvinValue;
            
            return;
        }
        
        // returns kelvin value
        double TemperatureConverter::GetTempFromKelvin(){
            
            return kelvin_;
        }
        // converts celcius to kelvin
        void TemperatureConverter::SetTempFromCelcius(double celciusValue) {
            kelvin_ = celciusValue + 273.15;
            
            return;
        }
        // converts farhenheit to kelvin
        void TemperatureConverter::SetTempFromFahrenheit(double fhValue) {
            kelvin_ = (5 * (fhValue - 32) / 9) + 273.15;
            
            return;
        }
        // converts kelvin to celcius
        double TemperatureConverter::GetTempAsCelcius() {
            celciusValue = kelvin_ - 273.15;
            
            return celciusValue;
        }
        // converts celcius to farhenheit
        double TemperatureConverter::GetTempAsFahrenheit() {
            fhValue = ((celciusValue * 9) / 5 + 32);
            
            return fhValue;
        }
        
        // Prints out stored values
        void TemperatureConverter::PrintTemps() {
            cout << "Kelvin: " << kelvin_ << endl;
            cout << "Celcius: " << celciusValue << endl;
            cout << "Fahrenheit: " << fhValue << endl;
            
            return;
        }

