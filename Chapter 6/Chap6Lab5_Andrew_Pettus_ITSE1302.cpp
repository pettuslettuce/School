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
// small (9 oz) at $1.75, medium (12 oz) at $1.90, and large (15 oz) at $2.00. 
const double smallCup = 1.75;
const double mediumCup = 1.90;
const double largeCup = 2.00;
double moneyMade = 0;
int small = 0;
int medium = 0;
int large = 0;
int totalSmall = 0;
int totalMedium = 0;
int totalLarge = 0;
char userChoice;
//program should be Menu Driven (Write a menu-driven program that will make the coffee shop operational.

//a function to show the user how to use the program,
void mainMenu(); 
void showMenu();
//a function to sell coffee, (Buy coffee in any size and in any number of cups.)
void coffeeSales(); 
//a function to show the number of cups of each size sold (At any time show the total number of cups of each size sold.)
void sizesSold();
//a function to show the total amount of coffee sold (At any time show the total amount of coffee sold.)
void currentSold(); 
void totalCupsSold();
void totalOunceSold();
//a function to show the total money made (assume the profit on all sales is 25%.) (At any time show the total money made.)
void totalSales(); 
//------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    // Will require some type of loop to allow the user to continue to sell coffee until they enter some selection to quit the program. 
	do {
		mainMenu();
		cout << "Return to main menu? Enter (Y) for YES" << endl;
		cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');
    // Once the program is stopped, the day's sales totals will be displayed: Amount of money generated that day as well as a count of each size of coffee sold.
    totalSales();
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void mainMenu()
{
	cout << fixed << setprecision(2) << endl;
    cout << "*******************************************" << endl;
    cout << "***** Sam's Beach Coffee Sales System *****" << endl;
    cout << "*******************************************" << endl;
	cout << "Please select which option you would like." << endl;
	cout << "1) Sell The Customer Some Coffee" << endl;
    cout << "2) Display The Current Menu" << endl;
	cout << "3) Display Total Sizes Sold" << endl;
	cout << "4) Display Total Cups Sold" << endl;
    cout << "5) Display Total Ounces Sold" << endl;
	cout << "6) Display Today's Sales and Profit" << endl;
	cout << "Your choice : ";
	cin >> userChoice;
	cout << endl;
//-------------------------
	switch (userChoice)
	{
	case '1':
		coffeeSales();
		currentSold();
		break;
	case '2':
		showMenu();
		break;
	case '3':
		sizesSold();
		break;   
	case '4':
		totalCupsSold();
		break;
	case '5':
		totalOunceSold();
		break;
	case '6':
		totalSales();
		break;
	default:
		cout << "Please select a number between 1 and 6. " << endl;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void coffeeSales()
{
	cout << "Small Coffee: $" << showpoint << setprecision(2) << smallCup << endl;
	cout << "Medium Coffee: $" << showpoint << setprecision(2) << mediumCup << endl;
	cout << "Large Coffee: $" << showpoint << setprecision(2) << largeCup << endl;
	cout << endl;
	cout << "Please enter the number of each size the customer wants: ";
	cout << endl;
	cout << "Number of Small Coffee: ";
	cin >> small;
	cout << "Number of Medium Coffee: ";
	cin >> medium;
	cout << "Number of Large Coffee: ";
	cin >> large;
	cout << endl;
//---------------------
	totalSmall += small;
	totalMedium += medium;
	totalLarge += large;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void showMenu()
{
    cout << "***********************************" << endl;
    cout << "***** Sam's Beach Coffee Menu *****" << endl;
    cout << "***********************************" << endl;
	cout << "   Small Coffee:           $" << showpoint << setprecision(2) << smallCup << endl;
	cout << "   Medium Coffee:          $" << showpoint << setprecision(2) << mediumCup << endl;
	cout << "   Large Coffee:           $" << showpoint << setprecision(2) << largeCup << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void sizesSold()
{
	cout << "Total number of small coffee cups sold : " << totalSmall << endl;
	cout << "Total number of medium coffee cups sold : " << totalMedium << endl;
	cout << "Total number of large coffee cups sold : " << totalLarge << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void currentSold()
{
	
	moneyMade += small * smallCup;
	moneyMade += medium * mediumCup;
	moneyMade += large * largeCup;
//---------------------
	int totalCoffeeSold = small + medium + large;
	cout << "The number of coffee cups sold is : " << totalCoffeeSold << endl;
	cout << "Money earned is : $" << showpoint << moneyMade << endl;
	cout << endl;
//---------------------
	small = 0;
	medium = 0;
	large = 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void totalCupsSold()
{
    int totalSold = totalSmall + totalMedium + totalLarge;
	cout << "The total number of coffee cups sold is : " << totalSold << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void totalOunceSold()
{
    //            small (9 oz)     medium (12 oz)     large (15 oz)
	int ounces = (totalSmall*9) + (totalMedium*12) + (totalLarge*15);
	cout << "The total amount of coffee sold in ounces is: " << ounces << "oz." << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
void totalSales()
{
	double moneySales = 0;
	moneySales += totalSmall * smallCup;
	moneySales += totalMedium * mediumCup;
	moneySales += totalLarge * largeCup;
    //a function to show the total money made (assume the profit on all sales is 25%.)
	cout << "Total Sales $" << showpoint << moneySales << endl;
    cout << "Total Profit $" << showpoint << (moneySales*.25) << endl;
    cout << endl;
    int ounces = (totalSmall*9) + (totalMedium*12) + (totalLarge*15);
	cout << "The total amount of coffee sold in ounces is: " << ounces << "oz." << endl;
    int totalSold = totalSmall + totalMedium + totalLarge;
	cout << "The total number of coffee cups sold is : " << totalSold << endl;
    cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------