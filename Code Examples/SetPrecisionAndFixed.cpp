// 
// setprecision and fixed example
// sourced from: https://cplusplus.com/reference/iomanip/setprecision/
// Sep 8 2022
//

#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

using namespace std;

int main () 
{
    
double z =3.14159;

cout << setprecision(5) << z << '\n';
cout << setprecision(9) << z << '\n';

cout << fixed;
cout << setprecision(5) << z << '\n';
cout << setprecision(9) << z << '\n';

return 0;
}