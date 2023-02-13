/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 12 2023
 * Module 4 Lab 1
 * Quiz Score
 */
 //Design a QuizScore class that has fields to hold three quiz scores.  
public class QuizScore {
   //quiz score fields
    private String studentName;
    private double scoreOne;
    private double scoreTwo;
    private double scoreThree;

    //The class constructor should accept three quiz scores as arguments 
    //-and assign these arguments to the quiz score fields.
    public QuizScore(String studentName, double scoreOne, double scoreTwo, double scoreThree) {
        this.studentName = studentName;
        this.scoreOne = scoreOne;
        this.scoreTwo = scoreTwo;
        this.scoreThree = scoreThree;
    }
    public QuizScore() {
        this.studentName = "Unknown Student Name";
        this.scoreOne = -1;
        this.scoreTwo = -1;
        this.scoreThree = -1;
    }

    //The class should also have accessor methods for the quiz score fields
    public String getStudentName() {
        return studentName;
    }
    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
    public double getScoreOne() {
        return scoreOne;
    }
    public double getScoreTwo() {
        return scoreTwo;
    }
    public double getScoreThree() {
        return scoreThree;
    }
    // If the user enters a grade less than 50, the setter function should be set to 50
    // If the user enters a grade above 100, the setter should be set the grade to 100
    public void setScoreOne(double scoreOne) {
        if (scoreOne < 50){
            scoreOne = 50;
            System.out.println("You entered a score below 50, so your score was defaulted to 50.");
        }
        else if(scoreOne > 100){
            scoreOne = 100;
            System.out.println("You entered a score above 100, so your score was defaulted to 100.");
        }
        this.scoreOne = scoreOne;
    }
    public void setScoreTwo(double scoreTwo) {
        if (scoreTwo < 50){
            scoreTwo = 50;
            System.out.println("You entered a score below 50, so your score was defaulted to 50.");
        }
        else if(scoreTwo > 100){
            scoreTwo = 100;
            System.out.println("You entered a score above 100, so your score was defaulted to 100.");
        }
        this.scoreTwo = scoreTwo;
    }
    public void setScoreThree(double scoreThree) {
        if (scoreThree < 50){
            scoreThree = 50;
            System.out.println("You entered a score below 50, so your score was defaulted to 50.");
        }
        else if(scoreThree > 100){
            scoreThree = 100;
            System.out.println("You entered a score above 100, so your score was defaulted to 100.");
        }
        this.scoreThree = scoreThree;
    }
    //a method that returns the average of the test scores
    //Class will have a method to return a double of the students grade average 
    public double getAverageTestScore(){
        return ((scoreOne + scoreTwo + scoreThree)/3);
    }
    //and a method that returns the letter grade assigned for the test score average
    //Class will have a method to return a character based on student’s letter grade
    public char getLetterGrade(double testAverage){
        char letterGrade = 'x';
        if (testAverage >= 90){
            letterGrade = 'A';
        }
        else if (testAverage >= 80 && testAverage <= 89){
            letterGrade = 'B';
        }
        else if (testAverage >= 70 && testAverage <= 79){
            letterGrade = 'C';
        }
        else if (testAverage >= 60 && testAverage <= 69){
            letterGrade = 'D';
        }
        else if (testAverage >= 50 && testAverage <= 59){
            letterGrade = 'F';
        }
        return (letterGrade);
    }
}




