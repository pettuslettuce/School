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

int boxWidth = 0;
int boxHeight = 0;
char boxFill = '#';
int widthCount = 0;
int heightCount = 0;

int main(){
cout << "How wide would you like your box?" << endl;
cin >> boxWidth;
cout << "How tall would you like your box?" << endl;
cin >> boxHeight;
cout << "What single character would you like to use to fill your box?: " << endl;
cin >> boxFill;
cout << "Your box's width is: " << boxWidth << endl;
cout << "Your box's height is: " << boxHeight << endl;

if (boxWidth == boxHeight){
    cout << "This is a square" << endl;
}
else{
    cout << "This is a rectangle" << endl;
}
for (int row = 0; row < boxHeight; row++)
{
    for (int column = 0; column < boxWidth; column++)
    {
        cout << boxFill << " ";
    }
    cout << endl;
}
return 0;
}
         
    
