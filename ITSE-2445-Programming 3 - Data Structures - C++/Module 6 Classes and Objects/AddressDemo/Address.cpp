//  Address.cpp
//  Aggregation Example
//  Created by Kevin Roark on 6/16/23.

#include <string>
#include <iostream>
#include "Address.h"

//Getter methods
string Address::getStreet() const
{
    return street;
}
string Address::getCity() const
{
    return city;
}
string Address::getState() const
{
    return state;
}
string Address::getZip() const
{
    return zip;
}

//Setter Methods
void Address::setStreet(string street) {
    this->street = street;
}
void Address::setCity(string newCity) {
    city = newCity;
}
void Address::setState(string newState) {
    state = newState;
}
void Address::setZip(string newZip) {
    zip = newZip;
}

//Class Methods
string Address::print() const
{
    string myReturn = "";
    myReturn += this->getStreet() + "\n" + this->getCity() + ", ";
    myReturn += getState() + "\n" + getZip();
    return myReturn;
}

//constructors
Address::Address(string street, string city, string state, string zip)
{
    this->street = street;
    this->city = city;
    this->state = state;
    this->zip = zip;
}
Address::Address()
{
    street = "NA";
    city = "NA";
    state = "NA";
    zip = "NA";
}
// Copy constructor
Address::Address(const Address& source)
{
    this->street = source.street;
    this->city = source.city;
    this->state = source.state;
    this->zip = source.zip;
}
