//  Car.hpp
//  Car Class definition//
//  Created by Kevin Roark on 3/26/23

#ifndef Car_h
#define Car_h
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#endif /* Car_h */

class Car
{
    //variables
private:
    string make;
    string model;
    int year;
    double price;
    
public:
    //getters
    string getMake() const;
    string getModel() const;
    int getYear() const ;
    double getPrice() const;
    
    //setters
    void setMake(string pMake);
    void setModel(string pModel);
    void setYear(int pYear);
    void setPrice(double pPrice);
    
    //functions
    void Print();
    
    //constructors
    Car(string pMake, string pModel, int pYear, double pPrice);
    Car(string pMake, string pModel, int pYear);
    Car();        
};