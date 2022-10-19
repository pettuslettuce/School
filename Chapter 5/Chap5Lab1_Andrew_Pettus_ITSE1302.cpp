//  Chap5Lab1.cpp
//  Written by Andrew Pettus on Oct/13/2022
//
// Write a program that prompts the user to enter two integers.
// The program outputs how many numbers are multiples of 3 and how many numbers are multiples of 5 between the two integers (inclusive)
//
#include <iostream>
#include <iomanip>
using namespace std;

int lowerNumber = 0;
int upperNumber = 0;
int counterThree = 0;
int counterFive = 0;
int progCount = 0;

int main(){
cout << "What is the lowest integer in your range?" << endl;
cin >> lowerNumber;
cout << "What is the largest integer in your range?" << endl;
cin >> upperNumber;
progCount = lowerNumber;

while ((progCount <= upperNumber) && (progCount >= lowerNumber)){

    if(progCount %5 == 0){
        counterFive++;
    }
    if(progCount %3 == 0){
        counterThree++;
    }
    progCount++;
    }
cout << "The lower range: " << lowerNumber << endl;
cout << "The upper range: " << upperNumber << endl;
cout << "The amount of numbers in your range that are multiples of 3 is: " << counterThree << endl;
cout << "The amount of numbers in your range that are multiples of 5 is: " << counterFive << endl;
return 0;
}
         
    
