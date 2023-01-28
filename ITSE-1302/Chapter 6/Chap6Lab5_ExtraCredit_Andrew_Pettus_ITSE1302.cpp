//  Chap6Lab5_EXTRA_CREDIT.cpp
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
//program should be Menu Driven (Write a menu-driven program that will make the coffee shop operational.
//a function to show the user how to use the program,
void mainMenu(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup); 
void showMenu(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
//a function to sell coffee, (Buy coffee in any size and in any number of cups.)
void coffeeSales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
//a function to show the number of cups of each size sold (At any time show the total number of cups of each size sold.)
void sizesSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
//a function to show the total amount of coffee sold (At any time show the total amount of coffee sold.)
void currentSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
void totalCupsSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
void totalOunceSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
//a function to show the total money made (assume the profit on all sales is 25%.) (At any time show the total money made.)
void totalSales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup);  
// Once the program is stopped, the day's sales totals will be displayed: Amount of money generated that day as well as a count of each size of coffee sold.
int main()
{
	int small = 0;
	int medium = 0;
	int large = 0;
	int totalSmall = 0;
	int totalMedium = 0;
	int totalLarge = 0;
	const double smallCup = 1.75;
	const double mediumCup = 1.90;
	const double largeCup = 2.00;
	char userChoice;

    // Will require some type of loop to allow the user to continue to sell coffee until they enter some selection to quit the program. 
	do {
		mainMenu(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);

		cout << "Return to main menu? Enter (Y) for YES" << endl;
		cin >> userChoice;

	} while (userChoice == 'y' || userChoice == 'Y');
	totalSales(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void mainMenu(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
{
	char userChoice;
	cout << fixed << setprecision(2) << endl;
	cout << "Please select which option you would like." << endl;
	cout << "1) Coffee Sales System" << endl;
    cout << "2) Display Current Menu" << endl;
	cout << "3) Display Sizes Sold" << endl;
	cout << "4) Display Total Cups Sold" << endl;
    cout << "5) Display Total Ounces Sold" << endl;
	cout << "6) Display Today's Sales and Profit" << endl;
	cout << "Your choice : ";
	cin >> userChoice;
	cout << endl;

	switch (userChoice)
	{
	case '1':
		coffeeSales(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		currentSold(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		break;
	case '2':
		showMenu(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		break;
	case '3':
		sizesSold(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		break;   
	case '4':
		totalCupsSold(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		break;
	case '5':
		totalOunceSold(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		break;
	case '6':
		totalSales(small, totalSmall, medium, totalMedium, large, totalLarge, smallCup, mediumCup, largeCup);
		break;
	default:
		cout << "Please select a number between 1 and 6. " << endl;
	}

}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void coffeeSales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
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

	totalSmall += small;
	totalMedium += medium;
	totalLarge += large;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void showMenu(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
{
    cout << "***********************************" << endl;
    cout << "***** Sam's Beach Coffee Menu *****" << endl;
    cout << "***********************************" << endl;
	cout << "   Small Coffee:           $" << showpoint << setprecision(2) << smallCup << endl;
	cout << "   Medium Coffee:          $" << showpoint << setprecision(2) << mediumCup << endl;
	cout << "   Large Coffee:           $" << showpoint << setprecision(2) << largeCup << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void sizesSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
{
	cout << "Total number of small coffee cups sold : " << totalSmall << " ($" << (totalSmall * smallCup) << ")" << endl;
	cout << "Total number of medium coffee cups sold : " << totalMedium << " ($" << (totalMedium * mediumCup) << ")" << endl;
	cout << "Total number of large coffee cups sold : " << totalLarge << " ($" << (totalLarge * largeCup) << ")" << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void currentSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
{
	double moneyMade = 0;
	moneyMade += small * smallCup;
	moneyMade += medium * mediumCup;
	moneyMade += large * largeCup;

	int totalCoffeeSold = small + medium + large;
	cout << "The number of coffee cups sold is : " << totalCoffeeSold << endl;
	cout << "Money earned is : $" << showpoint << moneyMade << endl;
	cout << endl;

	small = 0;
	medium = 0;
	large = 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void totalCupsSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
{
	int totalSold = totalSmall + totalMedium + totalLarge;
	cout << "The total number of coffee cups sold is : " << totalSold << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void totalOunceSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
{
    //            small (9 oz)     medium (12 oz)     large (15 oz)
	int ounces = (totalSmall*9) + (totalMedium*12) + (totalLarge*15);
	cout << "The total amount of coffee sold in ounces is: " << ounces << "oz." << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void totalSales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge, const double & smallCup, const double & mediumCup, const double & largeCup) 
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
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------