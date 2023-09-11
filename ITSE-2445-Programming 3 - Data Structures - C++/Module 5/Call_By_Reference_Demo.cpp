#include <iostream>
using namespace std;


void CallByReference(int&, int&);

#include <iostream>
using namespace std;
int main()
{
    int firstNumber = 10;
    int secondNumber = 5;
    
    cout << "Before the Function Call " << endl;
    cout << "\t First Number: " << firstNumber << endl;
    cout << "\t Second Number: " << secondNumber << endl << endl;
    //now call the function and see the values inside the function
    CallByReference(firstNumber, secondNumber);
    //now lets look to see the valiable now:
    cout << "After (outside) the Function call (Call By Reference)" << endl;
    cout << "\t First Number: " << firstNumber << endl;
    cout << "\t Second Number: " << secondNumber << endl;
    cout << "Notice as it is a Call by Reference - the function actually changed the values ";
    
    return 0;
} 

void CallByReference(int& pNumOne, int& pNumTwo)
{
    //create a local variable as a holding location for swapping the values
    int temp;
    //now swap the values
    temp = pNumOne;
    pNumOne = pNumTwo;
    pNumTwo = temp;
    
    cout << "Inside the CallByReference function after switching: " << endl;
    cout << "\t First Number: " << pNumOne << endl;
    cout << "\t Second Number: " << pNumTwo << endl << endl;
}
