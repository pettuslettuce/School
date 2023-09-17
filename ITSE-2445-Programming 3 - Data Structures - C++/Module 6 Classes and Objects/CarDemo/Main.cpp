//  main.cpp
//  Car Demo of multiple constructors//
//  Created by Kevin Roark on 3/26/23.


#include <iostream>
#include "Car.cpp"
using namespace std;

int main() {
    
    cout << "Overloaded Constructor Example\n";
    Car myCar("Honda", "Civic", 2020, 15000.00);
    myCar.Print();
    cout << endl;
    
    Car myCarTwo("Ford", "Ranger", 2021);
    myCarTwo.setPrice(16500);
    myCarTwo.Print();
    cout << endl;
    
    Car myCarThree;
    myCarThree.setModel("BMW");
    myCarThree.setMake("X3");
    myCarThree.setPrice(26500);
    myCarThree.setYear(2019);
    myCarThree.Print();
    cout << endl;
    
    return 0;
}
