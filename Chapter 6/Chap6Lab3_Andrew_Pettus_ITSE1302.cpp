//  Chap6Lab1.cpp
//  Written by Andrew Pettus on Oct/27/2022
//
/*
Write a function that takes as 2 parameters an integers (less than 200 but greater than 100)
and returns the number of odd, even, and the sum of the odd and even numbers in the range. 
Also write a program to test your function.

Input:
    Integer

Process - create the following functions:

    int SumOfOdd(int userInput)
    int SumOfEven(int userInput)
    int NumberOfOdd(int userInput)
    int NumberOfEven(int userInput)

Output:

    Sum of Odd:
    Sum of Even:
    Number of Odd:
    Number of Even: 
*/

#include <iostream>
#include <iomanip>
using namespace std;


int SumOfOdd(int userInput)
int SumOfEven(int userInput)
int NumberOfOdd(int userInput)
int NumberOfEven(int userInput)


int main()
{
int width;
int height;
char charToDisplay;

cout << "First number in range?" << endl;


printHeader();

drawBox(height, width, charToDisplay);
printShapeType(height, width);
return 0;

}
//Write a function that takes as 2 parameters an integers (less than 200 but greater than 100)
//and returns the number of odd, even, and the sum of the odd and even numbers in the range. 
int OddEven(int pHeight, int pWidth, char pChar)
{

}

void printHeader()
{
    cout << "**********************************************" << endl;
    cout << "               Even Odd Program               " << endl;
    cout << "**********************************************" << endl;
}

int printShapeType(int pHeight, int pWidth)
{
if (pWidth == pHeight){ // if box width is equal to its height, it's a square
    cout << "This is a square" << endl;
}
else{
    cout << "This is a rectangle" << endl; // if width and height are not equal, it's nothing but a rectangle
}
return 0;
}
