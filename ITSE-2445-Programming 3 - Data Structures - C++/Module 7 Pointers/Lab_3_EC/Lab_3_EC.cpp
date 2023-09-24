/*
Filename: Lab_2_Linked_Lists.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 7 Pointers\Lab_2_Linked_Lists\Lab_2_Linked_Lists.cpp
Author: Andrew Pettus
Date Created: September 23, 2023
Date Modified:September 23, 2023
Description: Module 7 Lab 2; Lab_2_Linked_Lists.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>  
using namespace std; 

// This function definition creates a function named 'swap' that takes two pointer arguments (ptrOne and ptrTwo) of type int.
// The purpose of this function is to swap the values stored at the memory locations pointed to by the two pointers.
void swap(int* ptrOne, int* ptrTwo) {  
    int temp = *ptrOne;  // A temporary variable named 'temp' is declared and initialized with the value stored at the memory location pointed to by ptrOne.
    *ptrOne = *ptrTwo;  // The value at the memory location pointed to by ptrOne is replaced with the value at the memory location pointed to by ptrTwo.
    *ptrTwo = temp;  // The value at the memory location pointed to by ptrTwo is replaced with the value originally stored at the memory location pointed to by ptrOne (which is stored in 'temp').
}

// This function definition creates a function named 'square' that takes a single pointer argument (ptrNum) of type int.
// The purpose of this function is to square the value stored at the memory location pointed to by the pointer.
void square(int* ptrNum) {  
    *ptrNum = (*ptrNum) * (*ptrNum);  // The value at the memory location pointed to by ptrNum is replaced with the square of that value.
}

// The main function is the entry point of the program.
int main() {  
    int a = 5, b = 10;  // Two integer variables named 'a' and 'b' are declared and initialized with values 5 and 10, respectively.
    
    int* ptrA = &a;  // A pointer variable named 'ptrA' of type int is declared and initialized with the address of variable 'a'.
    int* ptrB = &b;  // A pointer variable named 'ptrB' of type int is declared and initialized with the address of variable 'b'.
    
    // This line outputs the values of 'a' and 'b' before swapping, using the standard output stream 'cout'.
    cout << "Values before swapping: a = " << a << ", b = " << b << endl;
    
    swap(ptrA, ptrB);  // The swap function is called with 'ptrA' and 'ptrB' as arguments, which swaps the values of 'a' and 'b'.
    
    // This line outputs the values of 'a' and 'b' after swapping, using the standard output stream 'cout'.
    cout << "Values after swapping: a = " << a << ", b = " << b << endl;
    
    int myInt = 7;  // An integer variable named 'myInt' is declared and initialized with a value of 7.
    
    int* ptrMyInt = &myInt;  // A pointer variable named 'ptrMyInt' of type int is declared and initialized with the address of variable 'myInt'.
    
    // This line outputs the value of 'myInt' before squaring, using the standard output stream 'cout'.
    cout << "Value before squaring: myInt = " << myInt << endl;
    
    square(ptrMyInt);  // The square function is called with 'ptrMyInt' as the argument, which squares the value of 'myInt'.
    
    // This line outputs the value of 'myInt' after squaring, using the standard output stream 'cout'.
    cout << "Value after squaring: myInt = " << myInt << endl;
    
    return 0;  // The main function returns 0 to indicate successful completion of the program to the operating system.
}
