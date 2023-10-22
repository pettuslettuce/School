//  main.cpp
//  InheritanceDemo
//  Created by Kevin Roark on 4/2/23.
//Example uses class Student that inherits from class Person

#include <iostream>
#include "Student.h"
using namespace std;
  
int main()
{
    //create a student
    Student myStudent("Kevin", "Roark", "210-837-0600", "kroark8@alamo.edu", 3.94, "Computer Science");
    //Print Student info
    myStudent.PrintStudentInfo();
    
    return 0;
}
                     
