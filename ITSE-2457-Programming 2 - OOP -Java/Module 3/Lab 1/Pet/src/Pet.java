/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 6 2023
 * Module 3 Lab 1
 * Pet
 */
public class Pet {
    // class variables
    private String petName;
    private String petType;
    private String petSound;
    // constructors
    // Default constructor
    public Pet() {
        super();
        this.petName = "Unknown Pet Name";
        this.petType = "Unknown Pet Type";
        this.petSound = "Unknown Pet Sound";
    }
    // Populated constructor
    public Pet(String petName, String petType, String petSound) {
        super();
        this.petName = petName;
        this.petType = petType;
        this.petSound = petSound;
    }
    // getters setters
    public String getPetName() {
        return petName;
    }
    public void setPetName(String petName) {
        this.petName = petName;
    }
    public String getPetType() {
        return petType;
    }
    public void setPetType(String petType) {
        this.petType = petType;
    }
    public String getPetSound() {
        return petSound;
    }
    public void setPetSound(String petSound) {
        this.petSound = petSound;
    }
    // class methods - function creates a string with labels and object data
    public String PrintInfo() {
        String myReturn = "";
        myReturn = "Pet Name: " + this.getPetName() + "\n";
        myReturn += "Pet Type: " + this.getPetType() + "\n";
        myReturn += "Pet Sound: " + this.getPetSound() + "\n";
        return myReturn;
    }

}
