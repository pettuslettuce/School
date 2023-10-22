/*
Filename: Book.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_4_Challenge__LIbrary\Book.h
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Book.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef BOOK_H  // Header guard to prevent multiple inclusion
#define BOOK_H
#include <iomanip>
#include "LibraryItem.h"  // Include the header file for the base class LibraryItem
/*
The colon (:) in this piece of code is used to specify the inheritance relationship between the Book class and the LibraryItem class.
The syntax class Book : public LibraryItem tells the compiler that Book is a class that inherits from LibraryItem.
'public' specifies that Book inherits publicly from LibraryItem.
*/
// Derived class Book inheriting from LibraryItem
class Book : public LibraryItem {
public:
    // Constructor prototype to initialize attributes of Book and LibraryItem
    Book(string title, string author, int publicationYear, bool isAvailable, string isbn, int numberOfPages);
    // GEtter Setters prototypes for new attributes
    void setIsbn(string isbn);
    void setNumberOfPages(int numberOfPages);
    string getIsbn() const;
    int getNumberOfPages() const;
    // Override the display() method prototype to print book details
    virtual void display() const override;
private:
    string isbn;        // ISBN of the book
    int numberOfPages;  // Number of pages in the book
};
#endif                  // End of header guard BOOK_H
