/*
Filename: Lab_3_Pointers_EC.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 7 Pointers\Lab_3_Pointers_EC\Lab_3_Pointers_EC.cpp
Author: Andrew Pettus
Date Created: September 23, 2023
Date Modified:September 24, 2023
Description: Module 7 Lab 3; Lab_3_Pointers_EC.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>  
using namespace std; 

// creates function 'swap' that takes two pointer arguments (ptrOne and ptrTwo) of type int; swaps the values stored at the memory locations pointed to by the two pointers.
void swap(int* ptrOne, int* ptrTwo) {  
    int temp = *ptrOne; // temporary variable named 'temp' is declared and initialized with the value stored at the memory location pointed to by ptrOne.
    *ptrOne = *ptrTwo;  // The value at the memory location pointed to by ptrOne is replaced with the value at the memory location pointed to by ptrTwo.
    *ptrTwo = temp;     // The value at the memory location pointed to by ptrTwo is replaced with the value originally stored at the memory location pointed to by ptrOne (which is stored in 'temp').
}

// creates function 'square' that takes a single pointer argument (ptrNum) of type int; squares the value stored at the memory location pointed to by the pointer.
void square(int* ptrNum) {  
    *ptrNum = (*ptrNum) * (*ptrNum);  // The value at the memory location pointed to by ptrNum is replaced with the square of that value.
}

int main() {  
    int a = 5, b = 10;      // Two integer variables named 'a' and 'b' are declared and initialized with values 5 and 10, respectively
    int* ptrA = &a;         // pointer variable named 'ptrA' of type int is declared and initialized with the address of variable 'a'
    int* ptrB = &b;         // pointer variable named 'ptrB' of type int is declared and initialized with the address of variable 'b'
    cout << "Values before swapping: a = " << a << ", b = " << b << endl; 
    swap(ptrA, ptrB);       // swap function is called with 'ptrA' and 'ptrB' as arguments, which swaps the values of 'a' and 'b'.
    cout << "Values after swapping: a = " << a << ", b = " << b << endl;
    int myInt = 7; 
    int* ptrMyInt = &myInt;  // pointer variable named 'ptrMyInt' with dta type int is declared and initialized with the address of variable 'myInt'.
    cout << "Value before squaring: myInt = " << myInt << endl;
    square(ptrMyInt);       // square function is called with 'ptrMyInt' as the argument, which squares the value of 'myInt'.
    cout << "Value after squaring: myInt = " << myInt << endl;
    return 0;
}
