//  Chap9-Lab1
//  ITSE1302 NVC
//  Written by Andrew Pettus on November 29,2022

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct studentInfo
{
    string studentFirstName;
    string studentLastName;
    double studentGPA;
    string studentMajor;
};

void studentInfoRun(studentInfo);

int main()
{
    studentInfo student1;
    studentInfoRun(student1);
}

void studentInfoRun(studentInfo pStudent)
{
    cout << "Enter the first name of the student: " << endl;
    getline(cin, pStudent.studentFirstName);
    cout << endl;

    cout << "Enter the last name of the student: " << endl;
    getline(cin, pStudent.studentLastName);
    cout << endl;
    
    cout << "Enter the GPA of the student: " << endl;
    cout << showpoint << fixed << setprecision(2);
    cin >> pStudent.studentGPA;
    cout << endl;

    cout << "Enter the Major of the student: " << endl;
    cin.sync();
    getline(cin, pStudent.studentMajor);
    cout << endl;

    cout << "Student Name: " << pStudent.studentFirstName << " " << pStudent.studentLastName << endl;
    cout << "Student GPA: " << pStudent.studentGPA << endl;
    cout << "Student Major: " << pStudent.studentMajor << endl;
}




