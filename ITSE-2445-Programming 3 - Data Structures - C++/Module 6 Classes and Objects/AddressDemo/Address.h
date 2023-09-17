//  Address.hpp
//  Aggregation Example
//  Created by Kevin Roark on 6/16/23.

#ifndef Address_hpp
#define Address_hpp

#include <string>


using namespace std;

class Address
{
private:
    //class attributes / properties
    string street;
    string city;
    string state;
    string zip;
    
public:
    // Getter methods
    string getStreet() const;
    string getCity() const;
    string getState() const;
    string getZip() const;

       // Setter methods
    void setStreet(string newStreet);
    void setCity(string newCity);
    void setState(string newState);
    void setZip(string newZip);
    
    //Class Methods
    string print() const;

    //constructor
    Address(string street, string city, string state, string zip);
    Address(); // default constructor
    Address(const Address& source); // Copy constructor
};
#endif /* Address_hpp */
