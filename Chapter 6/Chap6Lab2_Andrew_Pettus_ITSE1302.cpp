//  Chap6Lab1.cpp
//  Written by Andrew Pettus on Oct/27/2022
//
/*
You are going to Modify the program you wrote in Chapter 5 - Lab 3. 
The program you wrote was to create a program "Box" that will ask the user for a character, 
as well as the length and Height of the box and output to the terminal the Box information and character based depiction of the box. 

The program will tell the user the Length and Width of the box , 
indicate if it is a rectangle  or a square, and output the box using the character on the terminal.

Input:
Length of Box
Height of Box
Character used for visual box display

Output:
Box Length
Box Height
Message to the user that the box is either a rectangle or a square
Visual Representation of the Box using the user identified character

Functions to Create:
Void function PrintHeader() - Create a Header to display  to the user similar to the function your wrote for the Module 6 - Lab 1). 
The Header will display "Box Program" as its title.

DrawBox(int length, int width, char charToDisplay) - the function will create the box as shown below and output to the screen

PrintShapeType(int length, int width) - the function will display to the console the shape type (rectangle  or square)

*/

#include <iostream>
#include <iomanip>
using namespace std;

void printHeader();
int drawBox(int pHeight, int pWidth, char pChar);
int printShapeType(int pHeight, int pWidth);


int main()
{
int width;
int height;
char charToDisplay;

cout << "How wide would you like your box?" << endl;
cin >> width;
cout << "How tall would you like your box?" << endl;
cin >> height;
cout << "What single character would you like to use to fill your box?: " << endl;
cin >> charToDisplay;
cout << "Your box's width is: " << width << endl;
cout << "Your box's height is: " << height << endl;

printHeader();

drawBox(height, width, charToDisplay);
printShapeType(height, width);
return 0;

}

int drawBox(int pHeight, int pWidth, char pChar)
{
for (int row = 0; row < pHeight; row++) // create "row" integer starting at 0, repeat while row number is less than box height, add 1 to "row" every iteration
{
    for (int column = 0; column < pWidth; column++) // create "column" integer starting at 0, repeat while column number is less than box height, add 1 to "column" every iteration
    {
        cout << pChar << " "; // filling the box in the "columns" with the chose character in addition to a whitespace
    }
    cout << endl; // ends the line of the current "row", allowing "columns" to populate again in next row
}
return 0;
}

void printHeader()
{
    cout << "**********************************************" << endl;
    cout << "                Box Program                   " << endl;
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
