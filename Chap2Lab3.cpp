//  
//  Chap2Lab3.cpp
//  Written by Andrew Pettus on 8/30/2022
//
//

#include <iostream>
using namespace std;

int main() {
    
    // creating required variables
    float testOne = 66.6;
    float testTwo = 42.0;
    float testThree = 69.0;
    float gradeAvg = 0.0;

    // averageing function for three tests
    gradeAvg = (testOne + testTwo + testThree) / 3 ;

    // output for updated average
    cout << "Average grade: " << gradeAvg << endl;

    return 0;
}