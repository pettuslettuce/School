
/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * May 4 2023
 * May the 4th be with you
 * Module 10 Lab 1
 * TestScores Error Handler Driver
 */

// import scanner for user input
import java.util.Scanner;

public class TestScoresDriver {
    public static void main(String[] args) {
        // initialize scanner object as "userInput"
        Scanner userInput = new Scanner(System.in);
        // initilizate new TestScores oject as "testScores"
        TestScores testScores = new TestScores();
        // initizalie variable for test number on output
        int testNumber = 1;
        // continous while loop until terminated by user input break
        while (true) {
            // prompt user for specific test score
            System.out.printf("Enter the score for test #%d (or -1 to quit): ", testNumber);
            // take user input for specific test score
            int score = userInput.nextInt();
            // if score is -1, terminate while loop
            if (score == -1) {
                break;
            }
            // try to add score to array
            try {
                testScores.addScore(score);
            // if score is invalid, catch the exception thrown by TestScores.addScore() method
            } catch (IllegalArgumentException exception) {
                // print the error message to console
                System.out.println(exception.getMessage());
                // continue to the next iteration of the while loop
                continue;
            }
            // increment the test number for the next iteration of the while loop
            testNumber++;
        }
    // set average variable to testScores average with getter
    double average = testScores.getAverage();
    // format to 2 decimals and output average
    System.out.printf("The average of the test scores is %.2f", average);
    // close scanner
    userInput.close();
    }
}
