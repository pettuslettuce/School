/*
Filename: DVD.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\DVD.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; DVD.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "DVD.h" // Include the header file for DVD class
#include <iostream>
// Using "::" (scope resolution operator) to define the constructor outside the class definition.
// ":" initiates a member initializer list to initialize both base and derived class members.
DVD::DVD(string title, string author, int publicationYear, bool isAvailable, string genre, int runtime) 
    : LibraryItem(title, author, publicationYear, isAvailable) {    // Initializing base class members using base class constructor
    this->genre = genre;                                            // Initializing derived class member genre
    this->runtime = runtime;                                        // Initializing derived class member runtime
}
// Getters Setters
// Using "::" to define the getters and setters outside the class definition.
void DVD::setGenre(string newGenre) { 
    genre = newGenre; }
void DVD::setRuntime(int newRuntime) { 
    runtime = newRuntime; }    
string DVD::getGenre() const { 
    return genre; }
int DVD::getRuntime() const { 
    return runtime; }

// Override the display() method definition to print DVD details
// Using "::" to define the overridden display() method outside the class definition.
void DVD::display() const {
    cout << left << setw(40) << "Title: " + getTitle()
         << setw(30) << "Author: " + getAuthor()
         << setw(25) << "Publication Year: " + to_string(getPublicationYear())
         << setw(25) << "Is Available: " + string(getIsAvailable() ? "Yes" : "No")
         << setw(25) << "Genre: " + genre
         << "Runtime: " << runtime << " minutes" << endl;
}

