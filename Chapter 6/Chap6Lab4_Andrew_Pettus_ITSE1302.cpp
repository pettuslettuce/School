//  Chap6Lab4.cpp
//  Written by Andrew Pettus on Nov/6/2022
/*

Create a menu program that allows a user to select the following Options form a Menu:
Add two integer numbers
Add three integer numbers
Add two double numbers
Add three double numbers
Quit program

Input:
User Menu Selection
Prompt and output from user selection
Prompt user to make another Menu selection of 5 to quit

Process:
Add two integer numbers function
Add three integer numbers function
Add two double numbers function
Add three double numbers function

Please use the same name for ALL the  add functions (overload the functions). You will also need to create a function to display the Menu (choices) to the user.

Example of Menu:
Welcome to the Programming 1 Calculator - please enter your selection or enter 0 to exit
1) Add Two Integers
2) Add Three Integers
3) Add Two Doubles
4) Add Three Doubles 
0) Exit the Program 

*/

#include <iostream>
#include <iomanip>
using namespace std;


int add (int,int);//Add two integer numbers
int add (int,int,int);//Add three integer numbers
double add (double,double);//Add two double numbers
double add (double,double,double);//Add three double numbers
int calcPromt(int pUserSelection);//"You will also need to create a function to display the Menu (choices) to the user."

int main()
{

int userSelection = 0;
userSelection = calcPromt(userSelection);

switch (userSelection)
{
case 1:
    int firstA, firstB;
    cout << add (firstA, firstB) << endl;
    break;
case 2:
    int secondA, secondB, secondC;
    cout << add (secondA, secondB, secondC) << endl;
    break;
case 3:
    cout << fixed << showpoint << setprecision(2);
    double thirdA, thirdB;
    cout << add (thirdA, thirdB) << endl;
    break;
case 4:
    cout << fixed << showpoint << setprecision(2);
    double fourthA, fourthB, fourthC;
    cout << add (fourthA, fourthB, fourthC) << endl;
    break;       
default:
    cout << "Program exited." << endl;
    break;
}

return 0;
}
//------------------------------------------------
int add (int firstA, int firstB){
cout << "************************"<< endl;
cout << "**  ADD TWO INTEGERS  **"<< endl;
cout << "************************"<< endl;
cout << "Please enter two integers: " << endl;
cout << "Integer One: " << endl;
cin >> firstA;
cout << "Integer Two: " << endl;
cin >> firstB;
cout << "Your two integers when summed equal: ";
return firstA + firstB;
}
//------------------------------------------------
int add (int secondA, int secondB, int secondC){
cout << "************************"<< endl;
cout << "** ADD THREE INTEGERS **"<< endl;
cout << "************************"<< endl;    
cout << "Please enter three integers: " << endl;
cout << "Integer One: " << endl;
cin >> secondA;
cout << "Integer Two: " << endl;
cin >> secondB;
cout << "Integer Two: " << endl;
cin >> secondC;
cout << "Your three integers when summed equal: ";
return secondA + secondB + secondC;
}
//------------------------------------------------
double add (double thirdA, double thirdB){
cout << "************************"<< endl;
cout << "**  ADD TWO DOUBLES   **"<< endl;
cout << "************************"<< endl;       
cout << "Please enter two doubles (decimal numbers): " << endl;
cout << "Double One: " << endl;
cin >> thirdA;
cout << "Double Two: " << endl;
cin >> thirdB;
cout << "Your two doubles when summed equal: ";
return thirdA + thirdB;
}
//------------------------------------------------
double add (double fourthA, double fourthB, double fourthC){
cout << "************************"<< endl;
cout << "** ADD THREE DOUBLES  **"<< endl;
cout << "************************"<< endl;       
cout << "Please enter three doubles (decimal numbers): " << endl;
cout << "Double One: " << endl;
cin >> fourthA;
cout << "Double Two: " << endl;
cin >> fourthB;
cout << "Double Three: " << endl;
cin >> fourthC;
cout << "Your three doubles when summed equal: ";
return fourthA + fourthB + fourthC;
}
//------------------------------------------------
int calcPromt(int pUserSelection){
cout << "****************************************************************************************************"<< endl;
cout << "**   Welcome to the Programming 1 Calculator! - Please enter your selection or enter 0 to exit.   **" << endl;
cout << "****************************************************************************************************"<< endl;
cout << "1) Add Two Integers" << endl;
cout << "2) Add Three Integers" << endl;
cout << "3) Add Two Doubles" << endl;
cout << "4) Add Three Doubles"  << endl;
cout << "0) Exit the Program" << endl;

cin >> pUserSelection;
return pUserSelection;
}