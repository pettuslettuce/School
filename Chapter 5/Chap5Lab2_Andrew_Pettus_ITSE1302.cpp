//  Chap5Lab1.cpp
//  Written by Andrew Pettus on Oct/15/2022
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
int evenSum = 0;
int oddSum = 0;
int progCount = 0;


int main(){
cout << "What is the lowest integer in your range?" << endl;
cin >> lowerNumber;
cout << "What is the largest integer in your range?" << endl;
cin >> upperNumber;
progCount = lowerNumber;

while ((progCount <= upperNumber) && (progCount >= lowerNumber)){

    if(progCount % 2 == 0){
        cout << progCount << " is even." << endl; 
        evenSum = evenSum + progCount;
    }
    else{
        cout << progCount << " is odd." << endl;  
        oddSum = oddSum + progCount;
    }
    progCount++;
    }
cout << "The sum of all the even numbers is: " << evenSum << endl;
cout << "The sum of all the odd numbers is: " << oddSum << endl;    
return 0;
}
         
    
