/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * Ship Class
 */

// Ship class representing a basic ship with name and year built
class Ship {
    // Field for the name of the ship (a string)
    private String name; 

    // Field for the year that the ship was built (a string)
    private String yearBuilt; 

    // A constructor...
    public Ship(String name, String yearBuilt) {
        this.name = name;
        this.yearBuilt = yearBuilt;
    }

    //...and appropriate accessors...
    public String getName() {
        return name;
    }
    public String getYearBuilt() {
        return yearBuilt;
    }

    //... and mutators
    public void setName(String name) {
        this.name = name;
    }
    public void setYearBuilt(String yearBuilt) {
        this.yearBuilt = yearBuilt;
    }

    // toString method that displays the ship's name and year it was built
    @Override
    public String toString() {
        return "Ship Name: " + name + ", Year Built: " + yearBuilt;
    }
}



