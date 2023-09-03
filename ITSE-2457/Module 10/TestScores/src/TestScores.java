
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
    // initiailze an array list to store the scores
    private ArrayList<Integer> scores;

    // constructor to initialize the ArrayList object named 'scores'
    public TestScores() {
        this.scores = new ArrayList<Integer>();
    }

    // processing to add new score to the aray list
    public void addScore(int score) {
        // check if the score is valid (between 0 and 100)
        if (score < 0 || score > 100) {
            // throw an exception if the score is invalid
            throw new IllegalArgumentException("Invalid test score of: " + score + ". Enter score under 100 or enter -1 to quit.");
        }
        // add the score to the 'scores' ArrayList
        scores.add(score);
    }

    // processing to calculate and return the average of the scores in the scores ArrayList
    public double getAverage() {
        // initialize a variable to store the sum of the scores
        int sum = 0;
        // loop through the scores ArrayList and add each score to the sum variable
        for (int i = 0; i < scores.size(); i++) {
            sum += scores.get(i);
        }
        // process and return the average of the scores
        return (double) sum / scores.size();
    }
}
