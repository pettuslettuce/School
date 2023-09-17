//  Car.cpp
//  Car Class implementation
//  Created by Kevin Roark on 3/26/23
#include "Car.h"
#include <string>
#include <iomanip>
using namespace std;
/*
 Getters (Assessors)
 */
string Car::getMake() const
{
    return make;
}
string Car::getModel() const
{
    return model;
}
int Car::getYear() const
{
    return year;
}
double Car::getPrice() const
{
    return price;
}

/*
 setters (Mutators)
 */
void Car::setMake(string pMake)
{
    make = pMake;
}
void Car::setModel(string pModel)
{
    model = pModel;
}
void Car::setYear(int pYear)
{
    year = pYear;
}
void Car::setPrice(double pPrice)
{
    price = pPrice;
}

/*
 Constructors - with Example of an Overloaded Constructor
 */
Car::Car(string pMake, string pModel, int pYear, double pPrice)
{
    make = pMake;
    model = pModel;
    year = pYear;
    price = pPrice;
}

Car::Car(string pMake, string pModel, int pYear)
{
    make = pMake;
    model = pModel;
    year = pYear;
    price = 0.0;
}
Car::Car()
{
    make = "Unknown Make";
    model = "Unknown Model";
    year = 2023;
    price = 0.0;
}
//functions
void Car::Print()
{
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << showpoint << fixed << setprecision(2);
    cout << "Price: $" << price << endl;
}
