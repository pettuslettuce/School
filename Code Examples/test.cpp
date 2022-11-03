//
#include <iostream>
using namespace std;

void MyFunction();

int myGlobalNum = 10;

int main()
{
int myLocalToMain = 20;
cout << "My Global Variable: " << myGlobalNum << endl;
cout << "My Local Variable: " << myLocalToMain << endl;
MyFunction();

return 0;

}

void MyFunction()
{
    int myFunctionVariable = 30;
    cout << "Inside the MyFunction - the myFunctionVariable var: " << myFunctionVariable << endl;
}