/*
Filename: Lab_1_Pointers.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 7 Pointers\Lab_1_Pointers\Lab_1_Pointers.cpp
Author: Andrew Pettus
Date Created: September 23, 2023
Date Modified:September 23, 2023
Description: Module 7 Lab 1; Lab_1_Pointers.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;      
int main() {
    // declare an integer variable myNumber and assign a value of 5
    int myNumber = 5;
    // declare a pointer variable myPointer of type integer
    int* myPointer;
    // assign the memory address of myNumber to the pointer variable myPointer
    myPointer = &myNumber;
    // print the value of myNumber
    cout << "The value of myNumber: " << myNumber << endl;
    // print the memory address of myNumber
    cout << "The memory address of myNumber: " << &myNumber << endl;
    // print the value of the pointer variable myPointer
    cout << "The mvalue of the pointer variable myPointer: " << myPointer << endl;
    // print the value pointed to by myPointer (which is the value of myNumber)
    cout << "The value pointed to by myPointer: " << *myPointer << endl;
    return 0;
}