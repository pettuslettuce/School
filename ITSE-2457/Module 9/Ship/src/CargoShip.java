/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * CargoShip Class
 */

// CargoShip class representing a cargo ship, extending the Ship class
class CargoShip extends Ship {

    // A field for the cargo capacity in tonnage (an int)
    private int cargoCapacity;

    // A constructor...
    public CargoShip(String name, String yearBuilt, int cargoCapacity) {
        // Call the constructor of the base class (Ship) with the name and yearBuilt arguments
        super(name, yearBuilt);
        this.cargoCapacity = cargoCapacity;
    }

    //...and appropriate accessors...
    public int getCargoCapacity() {
        return cargoCapacity;
    }

    //... and mutators
    public void setCargoCapacity(int cargoCapacity) {
        this.cargoCapacity = cargoCapacity;
    }

    // A toString method that displays the ship's name, year built, and cargo capacity
    @Override
    public String toString() {
        // Call the toString method of the base class (Ship) and append the cargo capacity
        return super.toString() + ", Cargo Capacity: " + cargoCapacity;
    }
}