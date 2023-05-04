/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * CruiseShip Class
 */

// CruiseShip class representing a cruise ship, extending the Ship class
class CruiseShip extends Ship {

     // Field for the maximum number of passengers (an int)
    private int maxPassengers;

    // A constructor...
    public CruiseShip(String name, String yearBuilt, int maxPassengers) {
        // Call the constructor of the base class (Ship) with the name and yearBuilt arguments
        super(name, yearBuilt);
        this.maxPassengers = maxPassengers;
    }

    //...and appropriate accessors...
    public int getMaxPassengers() {
        return maxPassengers;
    }

    //... and mutators
    public void setMaxPassengers(int maxPassengers) {
        this.maxPassengers = maxPassengers;
    }

    // toString method that displays the ship's name, year built, and maximum number of passengers
    @Override
    public String toString() {
        // Call the toString method of the base class (Ship) and append the maximum number of passengers
        return super.toString() + ", Maximum Passengers: " + maxPassengers;
    }
}
