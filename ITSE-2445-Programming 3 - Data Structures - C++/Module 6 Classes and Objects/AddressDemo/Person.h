//
//  Person.hpp
//  Created by Kevin Roark on 6-15-23.
#ifndef Person_h
#define Person_h

#include <stdio.h>

#endif /* Person_hpp */
#include <string>


using namespace std;

class Person
{
private:
    //class attributes / properties
    string firstName;
    string middleName;
    string lastName;
    Address homeAddress; 
    
public:
    //getters and setters declarations
    void print() const;
    void setName(string first, string middle, string last);
    void setLastName(string last);
    void setFirstName(string first);
    void setMiddleName(string middle);
    void setAddress(Address myAddress);
    
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;
    Address getAddress() const;

    //constructor
    Person(string, string, string, Address );
};
