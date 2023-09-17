//  Created by Kevin Roark on 6-15-23
// Driver to demo the Person Class and Address class - Aggregation

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Address home("1 Donore Square", "San Antonio", "Texas", "78229");
    Person myPerson("Kevin", "Read", "Roark",  home);
    myPerson.print();       
    cout << endl;
    return 0;
}