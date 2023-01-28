//  Chap6Lab3.cpp
//  Written by Andrew Pettus on Nov/6/2022

#include <iostream>
#include <iomanip>
using namespace std;

int SumOfOdd(int pLower, int pUpper);
int SumOfEven(int pLower, int pUpper);
int NumberOfOdd(int pLower, int pUpper);
int NumberOfEven(int pLower, int pUpper);

int main()
{

int lowerNumber = 0;
int upperNumber = 0;

cout << "Please enter 2 numbers between 100 and 200:" << endl;
cout << "Enter the first number (lowest) in the range: " << endl;
cin >> lowerNumber;

do
{
    cout << "Your number was not valid, please enter a number between 100 and 200." << endl;
    cin >> lowerNumber;
} while ((lowerNumber < 100) || (lowerNumber > 200));

cout << "Enter the second number (highest) in the range: " << endl;
cin >> upperNumber;
do
{
    cout << "Your number was not valid, please enter a number between 100 and 200 and greater than your first number." << endl;
    cin >> upperNumber;
} while ((upperNumber > 200) || (upperNumber < 100) || (upperNumber < lowerNumber));


cout << "The sum of all the odd numbers in the range is: " << SumOfOdd(lowerNumber, upperNumber) << endl;    
cout << "The sum of all the even numbers in the range is: " << SumOfEven(lowerNumber, upperNumber) << endl;    
cout << "The count of all the odd numbers in the range is: " << NumberOfOdd(lowerNumber, upperNumber) << endl;    
cout << "The count of all the even numbers in the range is: " << NumberOfEven(lowerNumber, upperNumber) << endl;    

return 0;

}
//-----------------------------------------------------------------------------------------
int SumOfOdd(int pLowerNumber, int pUpperNumber){

    int progCount = pLowerNumber;
    int oddSum = 0;

    while ((progCount <= pUpperNumber) && (progCount >= pLowerNumber)){

        if(progCount % 2 == 0){
        }
        else{
            oddSum = oddSum + progCount;    
        }
        progCount++;        
        }
    
return oddSum;
}
//-----------------------------------------------------------------------------------------
int SumOfEven(int pLowerNumber, int pUpperNumber){

    int progCount = pLowerNumber;
    int evenSum = 0;

    while ((progCount <= pUpperNumber) && (progCount >= pLowerNumber)){

        if(progCount % 2 == 0){
            evenSum = evenSum + progCount;    
        }
        else{
                 
        }
        progCount++;
        }
return evenSum;    
}
//-----------------------------------------------------------------------------------------
int NumberOfOdd(int pLowerNumber, int pUpperNumber){
    
    int progCount = pLowerNumber;
    int oddCount = 0;

    while ((progCount <= pUpperNumber) && (progCount >= pLowerNumber)){

        if(progCount % 2 == 0){   
        }
        else{
            oddCount++; 
        }
        progCount++;
        }
return oddCount;
}
//-----------------------------------------------------------------------------------------
int NumberOfEven(int pLowerNumber, int pUpperNumber){
    
    int progCount = pLowerNumber;
    int evenCount = 0;

    while ((progCount <= pUpperNumber) && (progCount >= pLowerNumber)){

        if(progCount % 2 == 0){
            evenCount++;  
        }
        else{           
        }
        progCount++;
        }
return evenCount;
}
//-----------------------------------------------------------------------------------------

