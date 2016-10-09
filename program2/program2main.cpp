//main for running program2.cpp
#include <iostream>
#include "program2.cpp"
using namespace std;

int main() {
    
    
    
    DistanceConverter dist1;
    DistanceConverter dist2;
    DistanceConverter dist3;
    DistanceConverter dist4;
    DistanceConverter dist5;
    DistanceConverter dist6;
    DistanceConverter dist7;
    DistanceConverter dist8;
    
    dist1.SetDistFromMiles(1);
    dist1.PrintDist();
    
    dist2.SetDistFromMiles(1);
    dist2.PrintDist();
    
    dist3.SetDistFromMiles(1);
    dist3.PrintDist();
    
    dist4.SetDistFromMiles(1);
    dist4.PrintDist();
    
    dist5.SetDistFromMeters(16.0);
    dist5.PrintDist();
    
    dist6.SetDistFromYards(20.0);
    dist6.PrintDist();
    
    dist7.SetDistFromInches(100.0);
    dist7.PrintDist();
    
    dist8.SetDistFromMeters(1.0);
    dist8.PrintDist();
    
}