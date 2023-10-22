//
//  Person.hpp
//  InheritanceDemo
//  Created by Kevin Roark on 4/2/23.

#ifndef Person_h
#define Person_h
#endif /* Person_h */
     
#include <string>
 
using namespace std;

class Person
{
private:
   string firstName; //variable to store the first name
   string lastName;  //variable to store the last name
   string phoneNumber;  //variable to store phone number
   string email;        //variable to store email address
    
public:
    //Setters
    void setName(string pFirst, string pLast);
    void setPhoneNumber(string pPhone);
    void setEmail(string pEmail);
    //Getters
    string getFirstName() const;
    string getLastName() const;
    string getPhoneNumber() const;
    string getEmail() const;
    //Constructors
    Person(string pFirst = "", string pLast = "", string pPhone = "", string pEmail = "");
    
//protected:
    void print() const;
       //Function to output the first name and last name - this is protected as we
        //only want a derived class to call or use       
};
