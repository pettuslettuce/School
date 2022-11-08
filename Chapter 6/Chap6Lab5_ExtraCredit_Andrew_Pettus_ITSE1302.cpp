//  Chap6Lab5.cpp
//  Written by Andrew Pettus on Nov/6/2022
/*
Note: -  cost of a coffee cup must be declared as named constants. You may use Global variables in this program. 
If you would like to earn extra credit (+50 points), try to complete this program without Global variables (call by reference parameters)
If you choose to take on this task - complete the program with Global variables first and submit your extra credit as an additional upload.
*/
#include <iostream>
#include <iomanip>
using namespace std;

const double smallCup = 1.75;
const double mediumCup = 1.90;
const double largeCup = 2.00;


void systemIntro();     //a function to show the user how to use the program,
void coffeePOS();       //a function to sell coffee, (Buy coffee in any size and in any number of cups.)
void displayMenu();     //a function to display the menu
void sizesSold();       //a function to show the number of cups of each size sold (At any time show the total number of cups of each size sold.)
void ouncesSold();      //a function to show the total amount of coffee sold (At any time show the total amount of coffee sold.)
void moneyMade();       //a function to show the total money made (assume the profit on all sales is 25%.) (At any time show the total money made.)
void shopProgram(int pUserSelection);      //program should be Menu Driven (Write a menu-driven program that will make the coffee shop operational.)

// Will require some type of loop to allow the user to continue to sell coffee until they enter some selection to quit the program. 
// Once the program is stopped, the day's sales totals will be displayed: Amount of money generated that day as well as a count of each size of coffee sold.

// small (9 oz) at $1.75, medium (12 oz) at $1.90, and large (15 oz) at $2.00. 
int main()
{
    char runagain;
	do {
		shopProgram();

		cout << "Do you want to continue selling coffee? (Y)Yes ";
		cin >> runagain;

	} while (runagain == 'y' || runagain == 'Y');
}

switch (userSelection)
{
case 1:
    //systemIntro();
    break;
case 2:
    coffeePOS();
    break;
case 3:
    //displayMenu(); 
    break;
case 4:
    //sizesSold(); 
    break;      
case 5:
    //ouncesSold();
    break;   
case 6:
    //moneyMade();
    break;    
default:
    cout << "Program exited." << endl;
    break;
}
}

//---------------------------------------------------------------------------------------------------
int shopProgram(int pUserSelection){
cout << " " << endl;    
cout << "******************************************" << endl;
cout << "*** 'Sam's Beach Coffee' Sales-System  ***" << endl;
cout << "******************************************" << endl;
cout << " " << endl;
cout << "Please make a selection: " << endl;
cout << "1) System Instructions" << endl;
cout << "2) Coffee Point of Sale" << endl;
cout << "3) Display The Menu" << endl;
cout << "4) Total Cups Sold" << endl;
cout << "5) Total Coffee Sold (ounces)" << endl;
cout << "6) Total Profit Made (profit = 25'%' of sales)"  << endl;
cout << "0) Exit the Program" << endl;

cin >> pUserSelection;

return pUserSelection;
}
//---------------------------------------------------------------------------------------------------
int coffeePOS(){

    int smallCount;
    int mediumCount;
    int largeCount;
    int sizeChoice;
    int countChoice;
    bool keepSelling = 1;

    while (keepSelling)
    {
        cout << "What size coffee would the customer like?" << endl;
        cout << "1) Small (9oz)" << endl;
        cout << "2) Medium (12oz)" << endl;
        cout << "3) Large (15oz)" << endl;
        cin >> sizeChoice;
        switch (sizeChoice){
            case 1:
                cout << "How many small coffees does the customer want?" << endl;
                cin >> countChoice;
                smallCount =  smallCount + sizeChoice;
                break;
            case 2:
                cout << "How many medium coffees does the customer want?" << endl;
                cin >> countChoice;
                mediumCount = mediumCount + sizeChoice;
                break;
            case 3:
                cout << "How many large coffees does the customer want?" << endl;
                cin >> countChoice;
                largeCount = largeCount + sizeChoice;
                break;  
            default:
                cout << "Program exited." << endl;
                break;
            }
    }
    

return 0;
}

//---------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------


