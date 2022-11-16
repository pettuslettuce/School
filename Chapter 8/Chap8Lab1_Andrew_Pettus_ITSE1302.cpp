//  Chap8Lab1.cpp
//  ITSE1302 NVC
//  Written by Andrew Pettus on Nov/14/2022
/*For this lab, you will prompt the user for the student's name and 5 grades that will populate an array of doubles. 
Once the user has entered in all 5 grades, display the students's name and their average for all 5 grades entered.
Input:
Prompt the user for student name
Prompt the user for all 5 grades

Process / functions:
double AverageGrades(array) - takes the array as an argument and returns the average
void DisplayGrades(array) - function iterates through the array and displays all of the grades additionally, this function displays the student average


Output:
Student Name
Student grades
Student Average
*/

#include <iostream>
#include <iomanip>
using namespace std;



double computeAverage (int []);
void displayGrades(int []);

const int ARRAY_SIZE = 5;

int studentGrades[ARRAY_SIZE];
string studentName;

int main(){

        cout << "Please enter the name of the student: " << endl;
        getline(cin, studentName);

    //use for loop to ask for the grades
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Please enter the scores " << studentName << " received on test " << (i + 1) << endl;
        cin >> studentGrades[i];
    }

    cout << showpoint << fixed << setprecision(2);
    cout << "The test scores are as follows: " << endl;
    displayGrades(studentGrades);

return 0;
}

double computeAverage(int pArray[])
{
    int mySum = 0;
    double myAvg = 0.0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
       mySum += pArray[i];
    }
    myAvg = static_cast<double>(mySum) / ARRAY_SIZE;
    return myAvg;
}

void displayGrades(int [])
{

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << studentName << "'s score for test number " << (i + 1)<< " is " << studentGrades[i] << endl;
    }
    cout << "Average test score: " << computeAverage(studentGrades) << endl;
}
