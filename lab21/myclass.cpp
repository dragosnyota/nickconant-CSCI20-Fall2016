#include<iostream>
#include<cstdlib>
using namespace std;

#include "myclass.h"

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}


int randomNumber(){
   srand(time(0));
   return (rand()% 10) + 1;
}
