/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Mar 18 2023
 * Module 6 Lab 2
 * this.Parking Permit
 */

import java.util.Random;

//Create a class called ParkingPermit. The Parking Permit will have the following attributes: 
public class ParkingPermit {
    private int permitID;       //Permit ID, random between 1000 and 9999
    private String carMake;     //Car Make (such as Honda, ford, etc.)
    private String carModel;    //Car Model (your choice - an example would be Mustang, Focus, Civic etc. )
    private String carYear;     //Car Year

    public ParkingPermit(String carMake, String carModel, String carYear) {
        Random rand = new Random();
        this.permitID = rand.nextInt(9000) + 1000; // random int between 0 and 8999; + 1000 shifts range to 1000-9999
        this.carMake = carMake;
        this.carModel = carModel;
        this.carYear = carYear;
    }

    // there will be a getter - but no setter as the computer will generate a random number)
    public int getPermitID() {
        return permitID;
    }

    public String getCarMake() {
        return carMake;
    }
    public void setCarMake(String carMake) {
        this.carMake = carMake;
    }

    public String getCarModel() {
        return carModel;
    }
    public void setCarModel(String carModel) {
        this.carModel = carModel;
    }

    public String getCarYear() {
        return carYear;
    }
    public void setCarYear(String carYear) {
        this.carYear = carYear;
    }

    public void printPermitInfo() {
        System.out.println("\n----- Parking Permit Information -----\n");
        System.out.println("Permit ID: " + permitID);
        System.out.println("Car Make: " + carMake);
        System.out.println("Car Model: " + carModel);
        System.out.println("Car Year: " + carYear);
    }
}