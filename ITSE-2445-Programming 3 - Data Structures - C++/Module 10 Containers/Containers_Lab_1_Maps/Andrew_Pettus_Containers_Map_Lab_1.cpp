/*
Filename: Andrew_Pettus_Containers_Map_Lab_1.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 10 Containers\Containers_Lab_1_Maps\Andrew_Pettus_Containers_Map_Lab_1.cpp
Author: Andrew Pettus
Date Created: October 11, 2023
Date Modified:October 11, 2023
Description: Module 10 Containers; Andrew_Pettus_Containers_Map_Lab_1.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main () {
    string studentName;
    double studentGrade;

    // Declare a map named studentGrades.
    // Maps are a collection of key-value pairs. In this case:
    //   - The key is a string, representing the student's name.
    //   - The value is a double, representing the student's grade.
    // Maps allow for fast lookups, insertions, and deletions based on the key.
    map<string, double> studentGrades;

    // Populate the map with some initial student names and their grades.
    // The emplace() function is used to insert key-value pairs into the map.
    studentGrades.emplace("Joe Smith", 84.3);
    studentGrades.emplace("Sue Kong", 91.0);
    studentGrades.emplace("Bart Simpson", 78.6);
    studentGrades.emplace("Kevin Roark", 65.4);
    studentGrades.emplace("Fred Flintstone", 98.2);

    // Prompt the user to enter the student's name.
    cout << "Enter student's name: ";
    getline(cin, studentName); // Using getline to ensure names with spaces are read.

    // Check if the student's name exists in the map.
    // The find() function is used to search for a key in the map.
    if (studentGrades.find(studentName) != studentGrades.end()) {
        // The key was found! Access and display its corresponding value.
        // We access values in the map using the key inside square brackets.
        cout << studentName << "'s original grade: " << studentGrades[studentName] << endl;

        // Prompt the user to enter the new grade.
        cout << "Enter new grade for " << studentName << ": ";
        cin >> studentGrade;

        // Update the grade of the student in the map.
        // Just like accessing, updating values can be done using the key inside square brackets.
        studentGrades[studentName] = studentGrade;

        // Display the updated grade.
        cout << studentName << "'s new grade: " << studentGrade << endl;

    } else {
        // The key was not found in the map.
        cout << "Student not found!" << endl;
    }

    return 0;
}
