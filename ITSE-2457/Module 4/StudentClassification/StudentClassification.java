/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 13 2023
 * Module 4 Lab 2
 * Student Classification
 */

public class StudentClassification {
    // Variables
    private String studentFirstName;
    private String studentLastName;
    private int studentHours;

    // Constructor-Populated
    public StudentClassification(String studentFirstName, String studentLastName, int studentHours) {
        this.studentFirstName = studentFirstName;
        this.studentLastName = studentLastName;
        this.studentHours = studentHours;
    }

    // Constructor-Default
    public StudentClassification() {
        this.studentFirstName = "Unknown Student Name";
        this.studentLastName = "Unknown Student Name";
        this.studentHours = -1;
    }

    // GetterSetters
    public String getStudentFirstName() {
        return studentFirstName;
    }

    public void setStudentFirstName(String studentFirstName) {
        this.studentFirstName = studentFirstName;
    }

    public String getStudentLastName() {
        return studentLastName;
    }

    public void setStudentLastName(String studentLastName) {
        this.studentLastName = studentLastName;
    }

    public int getStudentHours() {
        return studentHours;
    }

    public void setStudentHours(int studentHours) {
        if (studentHours < 0) {
            System.out.println("You have entered negative hours so the hours were defaulted to 0. ");
            this.studentHours = 0;
        } else {
            this.studentHours = studentHours;
        }
    }

    public String getStudentClassification() {
        String classification = "No Classification Defined";
        if (studentHours >= 90) {
            classification = "Senior";
        } else if (studentHours >= 60) {
            classification = "Junior";
        } else if (studentHours >= 30) {
            classification = "Sophomore";
        } else if (studentHours >= 0) {
            classification = "Freshman";
        }
        return (classification);
    }

    public String PrintInfo() {
        String myReturn = "";
        myReturn = "\nWith " 
                + getStudentHours() 
                + " hours " 
                + getStudentFirstName() 
                + " " 
                + getStudentLastName()
                + " is a "
                + getStudentClassification()
                + ".\n";
        return myReturn;
    }
}
