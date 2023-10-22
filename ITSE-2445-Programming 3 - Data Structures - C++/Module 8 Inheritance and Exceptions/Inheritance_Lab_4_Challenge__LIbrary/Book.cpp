/*
Filename: Book.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\Book.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Book.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Book.h"  // Include the header file for Book class
#include <iostream>  // Include the IO stream library for input/output
// Using "::" (scope resolution operator) to define the constructor outside the class definition.
// ":" initiates a member initializer list to initialize both base and derived class members.
// Constructor definition to initialize attributes of Book and LibraryItem (OMG THIS WAS DIFFICULT)
Book::Book(string title, string author, int publicationYear, bool isAvailable, string isbn, int numberOfPages)
    : LibraryItem(title, author, publicationYear, isAvailable) {    // Initializing base class members using base class constructor
    this->isbn = isbn;                                              // Initializing derived class member isbn
    this->numberOfPages = numberOfPages;                            // Initializing derived class member numberOfPages
}
//Getters Setters
void Book::setIsbn(string newIsbn) { 
    isbn = newIsbn; }
void Book::setNumberOfPages(int newNumberOfPages) { 
    numberOfPages = newNumberOfPages; }
string Book::getIsbn() const { 
    return isbn; }
int Book::getNumberOfPages() const { 
    return numberOfPages; }
// Override the display() method definition to print book details
void Book::display() const {
    cout << left << setw(40) << "Title: " + getTitle()
         << setw(30) << "Author: " + getAuthor()
         << setw(25) << "Publication Year: " + to_string(getPublicationYear())
         << setw(25) << "Is Available: " + string(getIsAvailable() ? "Yes" : "No")
         << setw(25) << "ISBN: " + isbn
         << "Number of Pages: " << numberOfPages << endl;
}
