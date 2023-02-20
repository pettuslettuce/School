/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 12 2023
 * Module 4 Lab 1
 * Quiz Score
 */
import java.util.Scanner;

public class QuizScoreDriver {
    public static void main(String[] args) throws Exception {
        // Driver attributes
        String studentName;
        double scoreOne;
        double scoreTwo;
        double scoreThree;
        // Instantiate keyboard scanner
        Scanner userInput = new Scanner(System.in);
        // Instantiate default QuizScore constructor
        QuizScore studentOne = new QuizScore();
        // Collect student name from user
        System.out.println("Student Quiz Grader: \n\nPlease enter the student's name: ");
        studentName = userInput.nextLine();
        studentOne.setStudentName(studentName);
        // Collect three quiz scores from user:
        System.out.printf("Please enter %s's first quiz score:", studentOne.getStudentName());
        scoreTwo = userInput.nextDouble();
        studentOne.setScoreOne(scoreTwo);
        System.out.printf("Please enter %s's second quiz score:", studentOne.getStudentName());
        scoreOne = userInput.nextDouble();
        studentOne.setScoreTwo(scoreOne);
        System.out.printf("Please enter %s's third quiz score:", studentOne.getStudentName());
        scoreThree = userInput.nextDouble();
        studentOne.setScoreThree(scoreThree);
        // Output method for student and quiz information
        System.out.println(studentOne.PrintInfo());
        // Close Scanner
        userInput.close();

    }
}
