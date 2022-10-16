//  Chap5Lab1.cpp
//  Written by Andrew Pettus on Oct/13/2022
//
/*Write a program that uses a while loops to perform the following steps:

    Prompt the user to input two integers: firstNum and secondNum - (firstNum must be less than secondNum).
    Output all odd numbers between firstNum and secondNum.
    Output all even numbers between firstNum and secondNum.
    Output the sum of all even numbers between firstNum and secondNum.
    Output the sum of all odd numbers between firstNum and secondNum.
*/
//

#include <iostream>
#include <iomanip>
using namespace std;

int lowerNumber = 0;
int upperNumber = 0;
int evenOutput = 0;
int oddOutput = 0;
int evenSum = 0;
int oddSum = 0;
int progCount = 0;
int evenAdder = 0;
int oddAdder = 0;

int main(){
cout << "What is the lower number in your range?" << endl;
cin >> lowerNumber;
cout << "What is the upper number in your range?" << endl;
cin >> upperNumber;
progCount = lowerNumber;

while ((progCount <= upperNumber) && (progCount >= lowerNumber)){

    if(progCount % 2 == 0){
        cout << progCount << " is even!" << endl; 
        evenSum = progCount +2
        
    }
    else{
        cout << progCount << " is odd!" << endl;  
    }
    progCount++;
    }
cout << evenSum << endl;
cout << oddSum << endl;    
return 0;
}
         
    
