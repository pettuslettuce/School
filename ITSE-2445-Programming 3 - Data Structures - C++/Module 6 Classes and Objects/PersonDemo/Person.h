//  Person.hpp
//  Created by Kevin Roark on 11/13/22.
#ifndef Person_h
#define Person_h

#include <stdio.h>

#endif /* Person_h */
#include <string>
using namespace std;

class Person
{
public:
    //getters and setters declarations
    void print() const;
    void setName(string first, string middle, string last);
    void setLastName(string last);
    void setFirstName(string first);
    void setMiddleName(string middle);
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;

    //constructor
    Person(string first = "", string middle = "", string last = "");

private:
    //class attributes / properties 
    string firstName;
    string middleName;
    string lastName;
};