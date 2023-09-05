//  
//  Chap3Lab1.cpp
//  Written by Andrew Pettus on Sep/08/2022
//
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //variables
    string userName;
    string userStreet;
    string userCity;
    string userState;
    string userZip;

    //ask user for inputs
    cout << "Please enter your full name: ";
    getline(cin, userName);
    cout << "Please enter your street address: ";
    getline(cin, userStreet);
    cout << "Please enter the city of the street address: ";
    getline(cin, userCity);
    cout << "Please enter the state of the street address: ";
    getline(cin, userState);
    cout << "Please enter the zip code of the street address: ";
    getline(cin, userZip);

    //envelope ready address output
    cout << "\n\nYour Mailing Label: \n\n";
    cout << userName << endl;
    cout << userStreet << endl;
    cout << userCity << ", " << userState << ", " << userZip << endl;


    return 0;
}