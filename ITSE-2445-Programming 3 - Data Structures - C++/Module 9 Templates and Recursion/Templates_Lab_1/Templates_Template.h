/*
Filename: Templates_Template.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 9 Templates and Recursion\Templates_Lab_1\Templates_Template.h
Author: Andrew Pettus
Date Created: October 8, 2023
Date Modified:October 8, 2023
Description: Module 9 Recursion and Templates; Templates_Template.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

// Templates_Template.h

#ifndef TEMPLATES_TEMPLATE_H
#define TEMPLATES_TEMPLATE_H

#include <string>

using namespace std;  // Including using namespace std

// Declaration of the template function called CheckOrder.
template <typename T>
string CheckOrder(const T& a, const T& b, const T& c, const T& d);

// Definition of the template function directly in the header file.
template <typename T>
string CheckOrder(const T& a, const T& b, const T& c, const T& d) {
    // Check if the elements are in ascending order.
    if (a <= b && b <= c && c <= d) {
        return "The elements are in ascending order";
    }
    // Check if the elements are in descending order.
    else if (a >= b && b >= c && c >= d) {
        return "The elements are in descending order";
    }
    // If elements are neither in ascending nor descending order.
    else {
        return "The elements are not in any specific order";
    }
}

#endif // TEMPLATES_TEMPLATE_H
