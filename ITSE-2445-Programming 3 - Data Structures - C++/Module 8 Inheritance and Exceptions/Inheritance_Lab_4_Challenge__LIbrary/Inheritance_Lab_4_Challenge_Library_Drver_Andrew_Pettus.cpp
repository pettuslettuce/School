/*
Filename: Library_Driver.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\Library_Driver.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Library_Driver.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include "LibraryItem.h"
#include "Book.h"
#include "DVD.h"
using namespace std;
// Prototype
void displayLibraryItems(const vector<LibraryItem*>& libraryItems);
// Main Function
int main() {
    vector<LibraryItem*> libraryItems;
    // Create new Book and DVD objects and add them to the vector
    libraryItems.push_back(new Book("1984", "George Orwell", 1949, true, "1234567890", 328));
    libraryItems.push_back(new DVD("Inception", "Christopher Nolan", 2010, true, "Sci-Fi", 148));
    libraryItems.push_back(new Book("Ender's Game", "Orson Scott Card", 1985, true, "9876543210", 324));
    libraryItems.push_back(new DVD("The Animatrix", "Various", 2003, false, "Animation", 100));
    libraryItems.push_back(new Book("Where the Red Fern Grows", "Wilson Rawls", 1961, true, "2345678901", 245));
    libraryItems.push_back(new DVD("The Fifth Element", "Luc Besson", 1997, false, "Sci-Fi", 126));
    displayLibraryItems(libraryItems);
    // Freeing dynamically allocated memory
    for (size_t i = 0; i < libraryItems.size(); ++i) {
        delete libraryItems[i];
    }
    return 0;
}
// Definition
void displayLibraryItems(const vector<LibraryItem*>& libraryItems) { 
    /*
    const: indicates that the vector being passed to the function will not be modified by the function
    vector<LibraryItem*>: a dynamic array that holds pointers to LibraryItem objects
    &: indicates libraryItems refers to the actual vector passed into the function, not a copy of it
    */
    for (size_t i = 0; i < libraryItems.size(); ++i) { //standard for loop that iterates from 0 to libraryItems.size()
        LibraryItem* item = libraryItems[i];           //assigns element [i] to a pointer variable item of type LibraryItem*.
        item->display();                               //display method  in LibraryItem object pointed to by item. 
    }                                                  //polymorphism is demonstrated as the display method of the derived class (Book or DVD) is called, depending on the actual type of the object being pointed to by item.
}
