//  
//  Chap2Lab3.cpp
//  Written by Andrew Pettus on 8/30/2022
//
//

#include <iostream>
using namespace std;

int main() {
    
    // creating required variables
    double testOne = 66.6;
    double testTwo = 42.0;
    double testThree = 69.0;
    double gradeAvg = 0.0;

    // averaging function for three tests; updating initial average
    gradeAvg = (testOne + testTwo + testThree) / 3 ;

    // output for updated average
    cout << "Average grade: " << gradeAvg << endl;

    return 0;
}