/*
Filename: Module4_Lab1_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 4, 2023
Date Modified:September 4, 2023
Description: Module 4 Lab 1; 
License: NLR

Instructions:
----------------------
For this lab, you are tasked with writing a program allowing a user to input a list of integers 
and then perform various operations on the list using vectors. 
--------------------------------------------------------------------------------------------------------------------------
1. First, create a C++ program that prompts the user to input a list of integers, one at a time. 
The program should store these integers in a vector. 
When the user enters -1, the program will stop accepting numbers 
--------------------------------------------------------------------------------------------------------------------------
2. Once the user has finished entering integers, display the contents of the vector to the screen. 
--------------------------------------------------------------------------------------------------------------------------
3. Next, ask the user for an integer value to search for in the vector. 
If the value is found, display its position in the vector (i.e., the index where it occurs). 
--------------------------------------------------------------------------------------------------------------------------
4. Now, ask the user for a position (i.e., an index) in the vector. 
Remove the integer at that position and display the contents of the vector again.
--------------------------------------------------------------------------------------------------------------------------
5. Finally, ask the user for a value to insert into the vector and its position. 
Insert the value into the vector at the specified position and display the contents of the vector one last time. 
--------------------------------------------------------------------------------------------------------------------------
Notes:
----------------------
You can add elements to a vector using the push_back() method. For example:
    myVector.push_back(6);
This adds the value 6 to the end of myVector.
--------------------------------------------------------------------------------------------------------------------------
You can access an element in a vector using the index of the element within square brackets after the vector name. For example:
    myVector[2] = 10;
This sets the third element of myVector to 10.
--------------------------------------------------------------------------------------------------------------------------
You can use loops to iterate over the elements of a vector. For example:
    for (int i = 0; i < myVector.size(); i++) 
    {
        cout << myVector[i] << " ";
    }
This will print out all the elements of myVector separated by a space.
--------------------------------------------------------------------------------------------------------------------------
In C++, you can resize a vector using the resize() method.
    vector<int> myVector = {1, 2, 3, 4, 5};
    // Resize the vector to 8 elements
    myVector.resize(8);   
Original size: 5
New size: 8
Updated Vector: 1 2 3 4 5 0 0 0 
Since the original vector had 5 elements, the resize() method adds 3 new elements to the vector with the default value of 0.
--------------------------------------------------------------------------------------------------------------------------
More Vector Functions:
----------------------
pop_back(): Removes the last element from the vector.
size(): Returns the number of elements in the vector.
clear(): Removes all elements from the vector
empty(): Returns true if the vector is empty, false otherwise.
at(): Returns the element at the specified index, with bounds checking.
front(): Returns the first element of the vector.
back(): Returns the last element of the vector.
insert(): Insert the value at the specified position.
erase(): Remove the element at the specified position.
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>                                                                 // required for input and output with console
#include <vector>                                                                   // required for vector operations
using namespace std;                                                                // usage from Standard Library directly
int main() {                                                                        // main loop begin
    vector<int> numbers;                                                            // create vector with integers as data type, vector is named 'numbers'
    int userInput;                                                                  // create a interger variable to store user input
    int vectorPosition;                                                             // create a interger variable to store 'vectorPosition' user input
    //--------------------------------------------------------------------------------------------------------------------------
    // Step 1: create a C++ program that prompts the user to input a list of integers
    // The program should store these integers in a vector. 
    // When  user enters -1, the program will stop accepting numbers 
    cout << "Enter integers to be stored in a vector. Enter -1 when finished: \n";  // Step 1 Prompt
    while (true) {                                                                  // while-loop that will iterate through adding number to vector with push_back method
        cin >> userInput;                                                           // CharacterInput - entered integer is stored in 'userInput' variable.
        if (userInput == -1) break;                                                 // check if 'userInput' var is -1, which is our sentinel value to break out of while-loop
        numbers.push_back(userInput);                                               // So then if 'userInput' integer is not -1, we add it to our vector 'numbers' with push_back vector function
    }
    //--------------------------------------------------------------------------------------------------------------------------
    // Step 2: Once the user has finished entering integers, display the contents of the vector to the screen. 
    cout << "Contents of the vector: ";                                             // Step 2 Output
    for (int i = 0; i < numbers.size(); ++i) {                                      // for-loop with end of loop reflective of vector size
        cout << numbers[i] << " ";                                                  // displays the value per the respective iterated index in the vector array
    }
    cout << endl; 
    //--------------------------------------------------------------------------------------------------------------------------
    // Step 3: Prompt user for integer value to search for in vector array
    // If value is found, display its position in the vector (i.e., the index where it occurs). 
    cout << "Enter an integer to search for: ";                                     // Step 3 Prompt
    cin >> userInput;                                                               // CharacterInput - entered integer stored in 'userInput' var
    bool found = false;                                                             // boolean var to confirm if integer is in vector; defaulted to false
    for (int i = 0; i < numbers.size(); ++i) {                                      // for-loop with end of loop reflective of vector size
        if (numbers[i] == userInput) {                                              // check if element at index 'i' matches userInput
            found = true;                                                           // if match is found: set 'found' boolean to true
            cout << "Value found at index: " << i << endl;                          // output index where number was found
            break;                                                                  // since we found the number, break out of the for-loop
        }
    }
    // After for-loop, check status of 'found' boolean. if 'found' is false; aka: not found in the vector, then '!found' resolves to true(1), and the if statement executes
    if (!found) {                                                                   // logical NOT operator (!), inverts value of boolean 'found'. 
        cout << "Value not found in the vector." << endl;                           // output indicating value not found
    }
    //--------------------------------------------------------------------------------------------------------------------------
    // Step 4: Ask the user for a position (i.e., an index) in the vector. 
    // Remove the integer at that position and display the contents of the vector again.
    cout << "Enter an index to remove the integer at: ";            // Step 4 Prompt
    cin >> vectorPosition;                                                          // CharacterInput - entered integer stored in 'vectorPosition' var
    if (vectorPosition >= 0 && vectorPosition < static_cast<int>(numbers.size())) { // confirm position entered is within the range of the vector indices (greater or = to 0 and less than the vector size)
        numbers.erase(numbers.begin() + vectorPosition);                            // if position is valid, 'erase' integer located at that index
        cout << "Integer removed. Updated vector: ";                                // output that integer was removed and updated vector
        for (int i = 0; i < numbers.size(); ++i) {                                  // for-loop with end of loop reflective of vector size
            cout << numbers[i] << " ";                                              // output the value per the respective iterated index in the vector array
        }
                                                                              //
        cout << endl; 
        }                                                               // output endline
    else {                                                                      // else if position is invalid
        cout << "Invalid position." << endl;                                        // output indicating invalid position supplied
    }
    
    //--------------------------------------------------------------------------------------------------------------------------
    // Step 5: Prompt user for value to insert into the vector and its position. 
    // Insert the value into the vector at the specified position and display the contents of the vector one last time. 
    cout << "Enter a value to insert into vectory array: ";                         // Step 5 Prompt
    cin >> userInput;                                                               // CharacterInput - entered integer stored in 'userInput' var
    cout << "Enter the index in vectory array to insert the value into: ";          // Prompt user for index location to dropin new integer
    cin >> vectorPosition;                                                          // CharacterInput - entered index stored in 'vectorPosition' var
    if (vectorPosition >= 0 && vectorPosition <= static_cast<int>(numbers.size())){ // confirm position entered is within the range of the vector indices (greater or = to 0 and less than the vector size)
        numbers.insert(numbers.begin() + vectorPosition, userInput);                // if position is valid, 'insert' newly provided integer located at new index
        cout << "Value inserted. Updated vector: ";                                 // output that integer was inserted and  updated vector
        for (int i = 0; i < numbers.size(); ++i) {                                  // for-loop with end of loop reflective of vector size
            cout << numbers[i] << " ";}                                             // output the value per the respective iterated index in the vector array                                                                       
        cout << endl;
        }                                                               // output endline
    else {                                                                          // else if position is invalid
        cout << "Invalid position." << endl;}                                       // output indicating invalid position supplied                                                                 
    return 0;                                                                       // main loop return code
}

