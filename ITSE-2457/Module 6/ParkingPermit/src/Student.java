/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Mar 18 2023
 * Module 6 Lab 2
 * Parking Permit Student
 */

 //Create a class called Student. The Student Class will have the following attributes:
public class Student {
    private String firstName;               //Student First Name
    private String lastName;                //Student Last Name
    private Address address;                //Student Address (use the Address Class you created in Module 6 Lab1)
    private ParkingPermit parkingPermit;    //Parking Permit

    public Student(String firstName, String lastName, Address address, ParkingPermit parkingPermit) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.address = address;
        this.parkingPermit = parkingPermit;
    }

    public String getFirstName() {
        return firstName;
    }
    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }
    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public Address getAddress() {
        return address;
    }
    public void setAddress(Address address) {
        this.address = address;
    }

    public ParkingPermit getParkingPermit() {
        return parkingPermit;
    }
    public void setParkingPermit(ParkingPermit parkingPermit) {
        this.parkingPermit = parkingPermit;
    }

    public void printStudentInfo() {
        System.out.println("\n----- Student Information -----\n");
        System.out.println("Name: " + firstName + " " + lastName);
        System.out.println("Address: " + getAddress().getFullAddress());
    }
}