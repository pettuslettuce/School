/*
Filename: Lab_2_Linked_Lists.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 7 Pointers\Lab_2_Linked_Lists\Lab_2_Linked_Lists.cpp
Author: Andrew Pettus
Date Created: September 23, 2023
Date Modified:September 23, 2023
Description: Module 7 Lab 2; Lab_2_Linked_Lists.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

// Include necessary libraries
#include <iostream>
#include <string>

// Allow usage of standard namespace without prefix
using namespace std;

// Define the ContactNode class
class ContactNode {
    // Private data members
private:
    string contactName;  // Holds the name of the contact
    string contactPhoneNumber;  // Holds the phone number of the contact
    ContactNode* nextNodePtr;  // Holds the pointer to the next contact node in the list

    // Public member functions
public:
    // Constructor with parameters for name and phone number
    ContactNode(string name, string number) {
        contactName = name;  // Assigns the name argument to the contactName member
        contactPhoneNumber = number;  // Assigns the number argument to the contactPhoneNumber member
        nextNodePtr = nullptr;  // Initializes the next node pointer to nullptr
    }

    // Accessor function for the contact's name
    string GetName() const {
        return contactName;  // Returns the contact's name
    }

    // Accessor function for the contact's phone number
    string GetPhoneNumber() const {
        return contactPhoneNumber;  // Returns the contact's phone number
    }

    // Function to insert a new contact node after the current node
    void InsertAfter(ContactNode* nodePtr) {
        ContactNode* tempPtr = nextNodePtr;  // Saves the pointer to the next node
        nextNodePtr = nodePtr;  // Sets the next node pointer to the new node
        nodePtr->nextNodePtr = tempPtr;  // Sets the new node's next pointer to the original next node
    }

    // Accessor function for the pointer to the next contact node
    ContactNode* GetNext() const {
        return nextNodePtr;  // Returns the pointer to the next contact node
    }

    // Function to print the contact's information
    void PrintContactNode() const {
        cout << "Name: " << contactName << endl;  // Prints the contact's name
        cout << "Number: " << contactPhoneNumber << endl;  // Prints the contact's phone number
    }
};

// Define the main function
int main() {
    // Declare variables to hold the name and phone number
    string name, number;

    // Prompt the user to enter the first contact's information
    cout << "Enter first contact name: ";
    getline(cin, name);  // Reads the name
    cout << "Enter number for " << name << ": ";
    getline(cin, number);  // Reads the phone number
    ContactNode* headNode = new ContactNode(name, number);  // Creates the first contact node

    // Prompt the user to enter the second contact's information
    cout << "Enter second contact name: ";
    getline(cin, name);  // Reads the name
    cout << "Enter number for " << name << ": ";
    getline(cin, number);  // Reads the phone number
    ContactNode* secondNode = new ContactNode(name, number);  // Creates the second contact node

    // Prompt the user to enter the third contact's information
    cout << "Enter third contact name: ";
    getline(cin, name);  // Reads the name
    cout << "Enter number for " << name << ": ";
    getline(cin, number);  // Reads the phone number
    ContactNode* thirdNode = new ContactNode(name, number);  // Creates the third contact node

    // Link the contact nodes together to form a list
    headNode->InsertAfter(secondNode);  // Inserts the second node after the first node
    secondNode->InsertAfter(thirdNode);  // Inserts the third node after the second node

    // Print the contact list
    cout << "\nContact List:" << endl;
    ContactNode* current = headNode;  // Starts with the head of the list
    while (current != nullptr) {  // Continues until the end of the list is reached
        current->PrintContactNode();  // Prints the current contact's information
        cout << endl;  // Outputs a newline between contacts
        current = current->GetNext();  // Moves to the next contact in the list
    }

    // Deallocate memory for each contact node to prevent memory leaks
    delete thirdNode;
    delete secondNode;
    delete headNode;

    // Return 0 to indicate successful execution
    return 0;
}
