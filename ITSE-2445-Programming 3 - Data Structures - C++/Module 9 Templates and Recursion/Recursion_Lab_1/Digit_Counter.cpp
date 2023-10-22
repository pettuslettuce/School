/*
Filename: Digit_Counter.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 9 Templates and Recursion\Recursion_Lab_1\Digit_Counter.cpp
Author: Andrew Pettus
Date Created: October 8, 2023
Date Modified:October 8, 2023
Description: Module 9 Recursion and Templates; Digit_Counter.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

#include "Digit_Counter.h"

// DigitCount Function definition
int DigitCount(int number) {
   // Base case: if number is a single digit
   // This means our recursive process will stop when we have processed all digits of the number.
   if (number < 10) {
      return 1;
   }

   /*
   Recursive case: 
   We're effectively removing the last digit of the number by dividing it by 10. 
   The logic behind the recursion is that each time we do this division, we have identified one more digit in the number. 
   So, we add 1 to our count and then recursively call the function again with the shortened number.
   */

   return 1 + DigitCount(number / 10);
}

/*
Recursion Process: The recursion in DigitCount is counting how many times we can divide the number by 10 before reaching 0:
First Call:
Number: 345
345 / 10 = 34 (this division signifies we've identified one digit)
Recursive Call with 34:
Number: 34
34 / 10 = 3 (another digit identified)
Recursive Call with 3:
Number: 3
3 / 10 = 0 (another digit identified, but since the result is less than 10, we've hit our base case)
At this point, the recursion stops because the base case is triggered when the number is less than 10.
*/
