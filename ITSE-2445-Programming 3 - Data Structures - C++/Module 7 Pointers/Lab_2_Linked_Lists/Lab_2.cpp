/*
Filename: Lab_2_Linked_Lists.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 7 Pointers\Lab_2_Linked_Lists\Lab_2_Linked_Lists.cpp
Author: Andrew Pettus
Date Created: September 23, 2023
Date Modified:September 24, 2023
Description: Module 7 Lab 2; Lab_2_Linked_Lists.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

// define the ContactNode class
class ContactNode {

    // private data members
private:
    string contactName;         // Holds the name of the contact
    string contactPhoneNumber;  // Holds the phone number of the contact
    ContactNode* nextNodePtr;   // Holds the pointer to the next contact node in the list

    // public member functions
public:
    // constructor with parameters for name and phone number
    ContactNode(string name, string number) {
        contactName = name;             // Assigns the name argument to the contactName member
        contactPhoneNumber = number;    // Assigns the number argument to the contactPhoneNumber member
        nextNodePtr = nullptr;          // Initializes the next node pointer to nullptr
    }

    // getters
    string GetName() const {
        return contactName;  
    }
    string GetPhoneNumber() const {
        return contactPhoneNumber;
    }

    // function to insert a new contact node after the current node
    void InsertAfter(ContactNode* nodePtr) {
        ContactNode* tempPtr = nextNodePtr;  // sets the pointer to the next node
        nextNodePtr = nodePtr;               // sets the next node pointer to the new node
        nodePtr->nextNodePtr = tempPtr;      // sets the new node's next pointer to the original next node
    }

    // getter for the pointer to the next contact node
    ContactNode* GetNext() const {
        return nextNodePtr;  // Returns the pointer to the next contact node
    }

    // function to print the contact's information
    void PrintContactNode() const {
        cout << "Name: " << contactName << endl;
        cout << "Number: " << contactPhoneNumber << endl; 
    }
};

int main() {
    string name, number; 
    // Prompt the user to enter the second contact's information                
    cout << "Enter first contact name: ";
    getline(cin, name);                      
    cout << "Enter number for " << name << ": ";
    getline(cin, number);                  
    
    ContactNode* headNode = new ContactNode(name, number);  // Creates the first contact node
    // Prompt the user to enter the second contact's information
    cout << "Enter second contact name: ";  
    getline(cin, name);                     
    cout << "Enter number for " << name << ": ";
    getline(cin, number);                   
    ContactNode* secondNode = new ContactNode(name, number);  // Creates the second contact node

    // Prompt the user to enter the third contact's information
    cout << "Enter third contact name: ";
    getline(cin, name); 
    cout << "Enter number for " << name << ": ";
    getline(cin, number); 
    ContactNode* thirdNode = new ContactNode(name, number);  // Creates the third contact node

    // Link the contact nodes together to form a list
    headNode->InsertAfter(secondNode);  // inserts the second node after the first node
    secondNode->InsertAfter(thirdNode); // inserts the third node after the second node
    cout << "\nContact List:" << endl;  // print the contact list
    ContactNode* current = headNode;    // start with the head of the list
    while (current != nullptr) {        // continue until the end of the list is reached
        current->PrintContactNode();    // prints the current contact's information
        cout << endl;                   // newline between contacts
        current = current->GetNext();   // moves to the next contact in the list
    }

    // delete each contact node to prevent memory leaks
    delete thirdNode;
    delete secondNode;
    delete headNode;

    return 0;
}
