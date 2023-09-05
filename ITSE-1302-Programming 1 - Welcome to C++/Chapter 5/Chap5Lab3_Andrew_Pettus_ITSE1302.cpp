//  Chap5Lab3.cpp
//  Written by Andrew Pettus on Oct/15/2022
//
/*
Create a program "Box" that will ask the user for a character, as well as the length and Height of the box and output to the terminal the Box information and character based depiction of the box. 
The program will tell the user the Length and Width of the box , indicate if it is a rectangle  or a square, and output the box using the character on the terminal.
//
Input:
Length of Box
Height of Box
Character used for visual box display
//
Output:
Box Length
Box Height
Message to the user that the box is either a rectangle or a square
Visual Representation of the Box using the user identified character
*/
//

#include <iostream>
#include <iomanip>
using namespace std;

int boxWidth = 0;
int boxHeight = 0;
char boxFill = '#';

int main(){
cout << "How wide would you like your box?" << endl;
cin >> boxWidth;
cout << "How tall would you like your box?" << endl;
cin >> boxHeight;
cout << "What single character would you like to use to fill your box?: " << endl;
cin >> boxFill;
cout << "Your box's width is: " << boxWidth << endl;
cout << "Your box's height is: " << boxHeight << endl;

if (boxWidth == boxHeight){ // if box width is equal to its height, it's a square, duh
    cout << "This is a square" << endl;
}
else{
    cout << "This is a rectangle" << endl; // if width and height are not equal, it's nothing but a rectangle
}
for (int row = 0; row < boxHeight; row++) // create "row" integer starting at 0, repeat while row number is less than box height, add 1 to "row" every iteration
{
    for (int column = 0; column < boxWidth; column++) // create "column" integer starting at 0, repeat while column number is less than box height, add 1 to "column" every iteration
    {
        cout << boxFill << " "; // filling the box in the "columns" with the chose character in addition to a whitespace
    }
    cout << endl; // ends the line of the current "row", allowing "columns" to populate again in next row
}
return 0;
}
         
    
