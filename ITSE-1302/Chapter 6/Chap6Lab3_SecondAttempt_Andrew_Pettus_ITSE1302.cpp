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

while ((lowerNumber < 100) || (lowerNumber >200) )
{
    cout << "You entered a number less than 100 or greater than 200 so it has been set to 100." << endl;
    lowerNumber = 100; 
}
cout << "Enter the second number (higest) in the range: " << endl;
cin >> upperNumber;

while ((upperNumber > 200) || (upperNumber < 100) )
{
    cout << "You entered a number greater than 200 or less than 100 so it has been set to 200. " << endl;
    upperNumber = 200; 
}

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

