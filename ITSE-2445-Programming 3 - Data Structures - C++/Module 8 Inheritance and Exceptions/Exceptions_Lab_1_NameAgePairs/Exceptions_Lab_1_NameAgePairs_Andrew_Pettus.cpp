/*
Filename: Exceptions_Lab_1_NameAgePairs.cpp
Filepath: ...\\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Exceptions_Lab_1_NameAgePairs\Exceptions_Lab_1_NameAgePairs.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Exceptions_Lab_1_NameAgePairs.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
/*
The given code was required to read a list of single-word first names and ages, and increment the age by 1, 
    or output 0 for the age if an exception occurs due to a string being provided instead of an integer for the age. 
The proposed solution effectively handles the exception and ensures that the program can continue to process further input even after encountering an exception. 
It then stores the input data in a structured way, processes it, and outputs the result in the desired format.

****HOWEVER: the solution has deviated a bit from the original structure of the code in order to handle all the input first before outputting all the updated values. 

This was done to address your request to first collect all input and then output all the updated values in one go, rather than outputting them one by one as in the original code.
The revised solution also utilizes additional C++ features such as a struct and a vector to hold the input data
The provided solution meets the stated requirements.
*/

#include <string>
#include <iostream>
#include <vector>
using namespace std;
// Define a struct to hold a name and age together.
struct NameAgePair {                    
    string name;
    int age;
};
int main() {
    string inputName;
    int age;
    cin.exceptions(ios::failbit);       // Set exception mask for cin stream to throw exceptions on input failure
    vector<NameAgePair> nameAgePairs;   // Create a vector to store the NameAgePair structs
    cin >> inputName;                   // Read the first input name from the user
    while (inputName != "-1") {         // Continue processing inputs until the input name is "-1", which indicates the end of input
        try {
            cin >> age;                 // Try to read the age from the user. This might fail if the user enters something that's not an integer.
        } 
        catch (...) {                   // Catch any exception if the reading operation fails
            cin.clear();                // Clear the failbit of the cin stream to be able to use cin again for further input operations
            string garbage;             // Declare a string to hold the rest of the failed input line
            getline(cin, garbage);      // Read and discard the rest of the failed input line from the cin buffer to prepare for the next input
            age = -1;                   // Set age to -1 to indicate that the age input failed
        }
        NameAgePair pair = {inputName, age};  // Create a NameAgePair struct to hold the input name and age
        nameAgePairs.push_back(pair);         // Add the NameAgePair struct to the nameAgePairs vector

        cin >> inputName;                     // Read the next input name from the user for the next iteration
    }
    for (size_t i = 0; i < nameAgePairs.size(); ++i) {  // Use a basic indexed for loop to iterate through the nameAgePairs vector
        NameAgePair currentPair = nameAgePairs[i];      // Access the current NameAgePair struct from the vector
        cout << currentPair.name << " " << (currentPair.age + 1) << endl;  // Output each name and incremented age (or 0 if the age input failed) to the console
    }
    return 0;  // Return 0 to indicate that the program executed successfully
}

