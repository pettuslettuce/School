/*
Filename: Andrew_Pettus_Containers_Queue_Lab_2.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 10 Containers\Containers_Lab_2_Queues\Andrew_Pettus_Containers_Queue_Lab_2.cpp
Author: Andrew Pettus
Date Created: October 11, 2023
Date Modified:October 11, 2023
Description: Module 10 Containers; ndrew_Pettus_Containers_Queue_Lab_2.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

#include <queue>
#include <iostream>

using namespace std;

int main () {

    string personName = "";
    int counter = 0;
    int youPosition = 0;

    // Initialize an empty queue to represent the line of people
    // A queue data structure is suitable to represent a real-life queue because of its first-in-first-out nature.
    queue<string> peopleInQueue;

    // Prompt the user for the first name
    cout << "Enter a name (or -1 to stop): ";
    getline(cin, personName);

    // Begin loop to read names
    while (personName != "-1") {
        // Add the read name to the end of the queue
        peopleInQueue.push(personName);

        // Increase the count for each person read
        // This counter helps keep track of the total number of names read, and indirectly, the position of "You".
        counter++;

        // If the current name is "You", store its position
        if (personName == "You") {
            youPosition = counter;
        }

        // Prompt the user for the next name
        cout << "Enter another name (or -1 to stop): ";
        getline(cin, personName);
    }

    // Print welcome message and the initial position of "You" in the queue
    cout << "Welcome to the ticketing service... " << endl;
    cout << "You are number " << youPosition << " in the queue." << endl;

    // Reset the counter for processing people in the queue
    // This counter will now keep track of the number of people processed (i.e., removed from the queue).
    counter = 1;

    // Begin loop to process people in the queue
    while (!peopleInQueue.empty()) {
        // Get and remove the person at the front of the queue
        string currentPerson = peopleInQueue.front();
        peopleInQueue.pop();

        // If the current person is "You", announce purchase
        if (currentPerson == "You") {
            cout << "You can now purchase your ticket!" << endl;
        } 
        // Otherwise, announce the current person's purchase and update "You"'s position
        // This provides feedback to the user about their position in the queue after every purchase.
        else {
            cout << currentPerson << " has purchased a ticket. ";
            if (youPosition > counter) {
                cout << "You are now number " << (youPosition - counter) << " in the queue. " << endl;
            }
        }

        // Increase the count for each processed person
        counter++;
    }

    // Announce when no more people are left in the queue
    cout << "No more people in the queue" << endl;

    return 0;
}
