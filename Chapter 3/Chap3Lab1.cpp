//  
//  Chap3Lab1.cpp
//  Written by Andrew Pettus on Sep/08/2022
//
//

#include <iostream>
using namespace std;

int main() {
    
    // creating required variables for inputs
    string inputName = none;
    string inputAddress = none;
    string inputCity = none;
    string inputState = none;
    string inputZip = none;

    //inputs for aofrementioned strings
    cin << inputName, inputAddress, inputCity, inputState, inputZip << endl;

    //output of gathered inputs for letter formatting
    cout << inputName "\n" << inputAddress "\n" << inputCity "\, " << inputSate "\, " << inputZip << endl;

    return 0;
}