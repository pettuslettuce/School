/*
Filename: Recursive_Functions.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 9 Templates and Recursion\Recursion_Lab_2\Recursive_Functions.cpp
Author: Andrew Pettus
Date Created: October 8, 2023
Date Modified:October 8, 2023
Description: Module 9 Recursion and Templates; Recursive_Functions.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

#include "Recursive_Functions.h"

int factorial(int n) {
    // Base case: when n is 0 or 1, the factorial is 1.
    if (n <= 1) {
        return 1;
    }

    /*
    Recursive case:
    The factorial of a number n is n multiplied by the factorial of (n-1).
    for each recursive call, we decrease the number by 1 and multiply.
    */
    return n * factorial(n - 1);
}

/*
Recursion Process for factorial:
If we take n = 3 as an example:
First Call:
Number: 3
3 * factorial(2)
    Recursive Call with 2:
    Number: 2
    2 * factorial(1)
        Base Case with 1:
        Returns 1
    Returns 2
Returns 6
*/

int fibonacci(int n) {
    // Base cases:
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    // Recursive case:
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
Recursion Process for fibonacci:
If we take n = 5 as an example:
First Call:
Term: 5
fibonacci(4) + fibonacci(3)
    Recursive Call with 4 (calculating the 4th term):
    fibonacci(3) + fibonacci(2)
        Recursive Call with 3:
        fibonacci(2) + fibonacci(1)
            Base Cases:
            Returns 1 and 0 respectively.
        Returns 1
        Recursive Call with 2:
        Returns 1
    Returns 2
    Recursive Call with 3 (calculating the 3rd term):
    Returns 1
Returns 3
*/

int sumOfNumbers(int n) {
    // Base case: if n is 1, return 1.
    if (n == 1) {
        return 1;
    }

    // Recursive case:
    return n + sumOfNumbers(n - 1);
}

/*
Recursion Process for the corrected sumOfNumbers:
If we take n = 5 as an example:
First Call:
Number: 5
5 + sumOfNumbers(4)
    Recursive Call with 4:
    Number: 4
    4 + sumOfNumbers(3)
        Recursive Call with 3:
        Number: 3
        3 + sumOfNumbers(2)
            Recursive Call with 2:
            Number: 2
            2 + sumOfNumbers(1)
                Base Case with 1:
                Returns 1
            Returns 3
        Returns 6
    Returns 10
Returns 15
*/
