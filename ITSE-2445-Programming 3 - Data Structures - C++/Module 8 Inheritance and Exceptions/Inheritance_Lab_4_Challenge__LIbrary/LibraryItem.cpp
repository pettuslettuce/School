/*
Filename: LibraryItem.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\LibraryItem.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; LibraryItem.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "LibraryItem.h"  // Include the header file for LibraryItem class
#include <iostream>

// :: (scope resolution operator) is used to define the constructor of the LibraryItem class outside the class definition.
//  tells the compiler that the following method is a member of the LibraryItem class defined elsewhere.
LibraryItem::LibraryItem(string title, string author, int publicationYear, bool isAvailable) {
    this->title = title;
    this->author = author;  
    this->publicationYear = publicationYear;  
    this->isAvailable = isAvailable; 
}
//Getters Setters
// :: (scope resolution operator) used in the same way as above to indicate that these methods are members of the LibraryItem class defined elsewhere.
void LibraryItem::setTitle(string newTitle) { 
    title = newTitle; }
void LibraryItem::setAuthor(string newAuthor) { 
    author = newAuthor; }
void LibraryItem::setPublicationYear(int newPublicationYear) { 
    publicationYear = newPublicationYear; }
void LibraryItem::setIsAvailable(bool newIsAvailable) { 
    isAvailable = newIsAvailable; }
string LibraryItem::getTitle() const { 
    return title; }
string LibraryItem::getAuthor() const { 
    return author; }
int LibraryItem::getPublicationYear() const { 
    return publicationYear; }
bool LibraryItem::getIsAvailable() const {
    return isAvailable; }

