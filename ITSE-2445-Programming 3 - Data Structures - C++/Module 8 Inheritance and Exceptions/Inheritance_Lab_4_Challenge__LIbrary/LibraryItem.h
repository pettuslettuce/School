/*
Filename: LibraryItem.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\LibraryItem.h
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; LibraryItem.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef LIBRARYITEM_H  // Header guard to prevent multiple inclusion
#define LIBRARYITEM_H
#include <string>  // Include string library
using namespace std;  // Using directive for the standard namespace
// Abstract base class LibraryItem
class LibraryItem {
public:
    // Constructor prototype to initialize attributes
    LibraryItem(string title, string author, int publicationYear, bool isAvailable);
    // Getters prototypes for each attribute
    string getTitle() const;
    string getAuthor() const;
    int getPublicationYear() const;
    bool getIsAvailable() const;
    // Setters prototypes for each attribute
    void setTitle(string title);
    void setAuthor(string author);
    void setPublicationYear(int publicationYear);
    void setIsAvailable(bool isAvailable);
    // virtual method prototype for displaying library item details
    virtual void display() const = 0;
private:
    string title;  // Title of the library item
    string author;  // Author of the library item
    int publicationYear;  // Publication year of the library item
    bool isAvailable;  // Availability status of the library item
};
#endif  // End of header guard LIBRARYITEM_H
