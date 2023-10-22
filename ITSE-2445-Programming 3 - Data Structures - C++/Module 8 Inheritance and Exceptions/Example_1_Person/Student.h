//  Student.hpp
//  InheritanceDemo//
//  Created by Kevin Roark on 4/2/23.
//

#ifndef Student_h
#define Student_h
#include "Person.h"
#include <stdio.h>
class Student: public Person
{
private:
    double gpa;
    string major;
public:
    //Constructor
    Student(string pFirstName, string pLastName, string pEmail, string pPhone, double pGPA, string pMajor);
    
    //getters
    double getGPA() const;
    string getMajor() const;
    
    //setters
    void setGPA(double pGPA);
    void setMajor(string pMajor);
    
    //Print function
    void PrintStudentInfo();
};

#endif /* Student_hpp */
