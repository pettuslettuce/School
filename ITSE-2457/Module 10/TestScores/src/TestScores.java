
/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * May 4 2023
 * May the 4th be with you
 * Module 10 Lab 1
 * TestScores Error Handler Class
 */

// import ArrayList object to allow for dynamic sized array
import java.util.ArrayList;

public class TestScores {
    // Declare an ArrayList object to store the test scores
    private ArrayList<Integer> scores;

    // Constructor: initializes the scores ArrayList object
    public TestScores() {
        this.scores = new ArrayList<Integer>();
    }

    // Method to add a new score to the scores ArrayList
    public void addScore(int score) {
        // Check if the score is valid (between 0 and 100)
        if (score < 0 || score > 100) {
            // Throw an exception if the score is invalid
            throw new IllegalArgumentException("Invalid test score of: " + score + ". Enter score under 100 or enter -1 to quit.");
        }
        // Add the score to the scores ArrayList
        scores.add(score);
    }

    // Method to calculate and return the average of the scores in the scores ArrayList
    public double getAverage() {
        // Initialize a variable to store the sum of the scores
        int sum = 0;
        // Loop through the scores ArrayList and add each score to the sum variable
        for (int i = 0; i < scores.size(); i++) {
            sum += scores.get(i);
        }
        // Calculate and return the average of the scores
        return (double) sum / scores.size();
    }
}
