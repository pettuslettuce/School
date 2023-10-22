/*
Filename: DVD.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\DVD.h
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; DVD.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef DVD_H  // Header guard to prevent multiple inclusion
#define DVD_H
#include <iomanip>
#include "LibraryItem.h"  // Include the header file for the base class LibraryItem
/*
The colon (:) in this piece of code is used to specify the inheritance relationship between the DVD class and the LibraryItem class. 
The syntax class DVD : public LibraryItem tells the compiler that DVD is a class that inherits from LibraryItem.
'public' specifies that DVD inherits publicly from LibraryItem.
*/
// Derived class DVD inheriting from LibraryItem
class DVD:public LibraryItem { 
public:
    // Constructor prototype to initialize attributes of DVD and LibraryItem
    DVD(string title, string author, int publicationYear, bool isAvailable, string genre, int runtime);
    // Getters Setters prototypes for new attributes
    void setGenre(string genre);
    void setRuntime(int runtime);
    string getGenre() const;
    int getRuntime() const;
    // Override the display() method prototype to print DVD details
    virtual void display() const override;
private:
    string genre;  // Genre of the DVD
    int runtime;  // Runtime of the DVD in minutes
};
#endif  // End of header guard DVD_H
