#include <iostream>
#include <iomanip>

using namespace std;

const double smallcost = 1.75;
const double mediumcost = 1.90;
const double largecost = 2.00;
char choice;
void tutorial(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);
void sales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);
void sizesSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);
void currentSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);
void totalCupsSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);
void totalSales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);

int main()
{
	int small = 0;
	int medium = 0;
	int large = 0;
	int totalSmall = 0;
	int totalMedium = 0;
	int totalLarge = 0;


	do {
		tutorial(small, totalSmall, medium, totalMedium, large, totalLarge);

		cout << "Do you want to run this program again? Enter Y for yes : ";
		cin >> runagain;

	} while (runagain == 'y' || runagain == 'Y');
}

void initialize(int & small, int & medium, int & large)
{
	small = 0;
	medium = 0;
	large = 0;
}

void tutorial(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	cout << fixed << setprecision(2) << endl;

	cout << "Please select which option you would like." << endl;
	cout << "1. Buy Coffee" << endl;
	cout << "2. Display the cups of coffee of each size sold" << endl;
	cout << "3. Display the total cups of coffee sold" << endl;
	cout << "4. Display the total amount of money earned" << endl;
	cout << "Your choice : ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case '1':
		sales(small, totalSmall, medium, totalMedium, large, totalLarge);
		currentSold(small, totalSmall, medium, totalMedium, large, totalLarge);
		break;
	case '2':
		sizesSold(small, totalSmall, medium, totalMedium, large, totalLarge);
		break;
	case '3':
		totalCupsSold(small, totalSmall, medium, totalMedium, large, totalLarge);
		break;
	case '4':
		totalSales(small, totalSmall, medium, totalMedium, large, totalLarge);
		break;
	default:
		cout << "Invalid number selection. Please select a number between 1 and 4." << endl;
	}

}
void sales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	cout << "Please read the menu, and select the number \nof each size of coffee that you would like to \npurchase.  If you would not like to purchase a certain \nsize of coffee, please enter '0'." << endl << endl;
	cout << "Small Cup........................ $" << showpoint << setprecision(3) << smallcost << endl;
	cout << "Medium Cup....................... $" << showpoint << setprecision(3) << mediumcost << endl;
	cout << "Large Cup........................ $" << showpoint << setprecision(3) << largecost << endl;
	cout << endl;
	cout << "Please enter the number of cups you would like to purchase : ";
	cout << endl;
	cout << "+ Small cups you would like to purchase : ";
	cin >> small;
	cout << "+ Medium cups you would like to purchase : ";
	cin >> medium;
	cout << "+ Large cups you would like to purchase : ";
	cin >> large;
	cout << endl;

	totalSmall += small;
	totalMedium += medium;
	totalLarge += large;
}

void sizesSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	cout << "Total number of small coffee cups sold : " << totalSmall << " ($" << (totalSmall * smallcost) << ")" << endl;
	cout << "Total number of medium coffee cups sold : " << totalMedium << " ($" << (totalMedium * mediumcost) << ")" << endl;
	cout << "Total number of large coffee cups sold : " << totalLarge << " ($" << (totalLarge * largecost) << ")" << endl;
	cout << endl;
}

void currentSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	double moneyMade = 0;
	moneyMade += small * smallcost;
	moneyMade += medium * mediumcost;
	moneyMade += large * largecost;

	int totalCoffeeSold = small + medium + large;
	cout << "The number of coffee cups sold is : " << totalCoffeeSold << endl;
	cout << "Money earned is : $" << showpoint << moneyMade << endl;
	cout << endl;

	small = 0;
	medium = 0;
	large = 0;
}

void totalCupsSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	int totalSold = totalSmall + totalMedium + totalLarge;
	cout << "The total number of coffee cups sold is : " << totalSold << endl;
	cout << endl;
}

void totalSales(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	double moneySales = 0;
	moneySales += totalSmall * smallcost;
	moneySales += totalMedium * mediumcost;
	moneySales += totalLarge * largecost;

	cout << "Total Sales are : $" << showpoint << moneySales << endl;
	cout << endl;
}