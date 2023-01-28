/*
 *@author Andrew Pettus 
 *@date Jan 23 2023 
 */

import java.util.Random; //Import need for RNG
import java.util.Scanner; //Import need for user input

public class RNG {
    public static void main(String[] args) throws Exception {

        // Setup scanner object to get user input
        Scanner myScan = new Scanner(System.in);

        // Setup random number generator
        Random generator = new Random();

        // Setup variables
        int userLowerNumber;
        int userUpperNumber;
        int userNumberDelta;
        int randomNumber;
        String userName;

        // Prompt user for name
        System.out.print("Please enter your name: ");
        userName = myScan.nextLine();

        // Get user inputs for upper and lower numbers
        System.out.print("Enter the lower number: ");
        userLowerNumber = myScan.nextInt();

        System.out.print("Enter the upper number: ");
        userUpperNumber = myScan.nextInt();

        // Processing
        userNumberDelta = userUpperNumber - userLowerNumber;
        randomNumber = generator.nextInt(userNumberDelta) + userLowerNumber;

        System.out.println("Your name: " + userName);
        System.out.println(
                "A random number between " + userLowerNumber + " and " + userUpperNumber + " is: " + randomNumber);
    }
}
