/*
Filename: Class_Notes_Sep6.cpp
Author: Andrew Pettus
Date Created: September 6, 2023
Date Modified:September 6, 2023
Description: Class Notes
License: NLR
*/

//  main.cpp
//  Created by Kevin Roark on 10/13/22.
// This program illustrates how to use a sequential search in a
// program.

#include <iostream>
using namespace std;

//create a Global variable for the Array size
const int ARRAY_SIZE = 10;

//prototype my function
int seqSearch(const int list[], int listLength, int searchItem);

//my Main program
int main()
{
    int intList[ARRAY_SIZE] = {10, 23, 2, 32, 45, 12, 4, 17, 100, 83};
    int number;

    cout << "Enter the number to be searched: ";
    cin >> number;
    cout << endl;
    
    //using out search function, look through the array to see if we can find the number
    int pos = seqSearch(intList, ARRAY_SIZE, number);

    //if we have found
    if (pos!= -1)
        cout <<"The number: " << number
             << " is found at index " << pos
             << endl;
    else
        cout << "The number: " << number
             << " is not in the list." << endl;

    return 0;
}

// Parameters are Array, the Array length, and the item we are searching for
//This is a sequential search
int seqSearch(const int list[], int listLength, int searchItem)
{
    int indexLocation;
    bool found = false;
    indexLocation = 0;

    //loop through the array and see if we can find a match
    while ( (indexLocation < listLength) && !found)
        if (list[indexLocation] == searchItem)
            found = true;
        else
            indexLocation++;
    if (found)
        return indexLocation;
    else
        return -1;
}