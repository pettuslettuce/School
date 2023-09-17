//  main.cpp
//  Created by Kevin Roark on 11/3/22.
// Driver to demo the Person Class

#include <iostream>
#include "Person.cpp"

using namespace std;

int main()
{
    Person student("Kevin", "Read", "Roark");
    student.print();
    cout << endl;
    cout << student.getLastName();
    student.setLastName("Flintstone");
    cout << endl;
    student.print();
    cout << endl;
    Person studentTwo("Sam", "R.", "Smith");
    cout << endl;
    studentTwo.print();

    cout << endl;
    return 0;
}

