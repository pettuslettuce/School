/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 3
 * Reused for Module 9 Lab 2
 * Benefits Class
 */


public class Benefits {

    private String type;
    private float cost;
    private String provider;

    public Benefits(String type, float cost, String provider) {
        this.type = type;
        this.cost = cost;
        this.provider = provider;
    }

    // For the aggregated classes (Benefit and Address), make sure you use a copy constructor to ensure you don’t have a by reference issue
    public Benefits(Benefits other) {
        this.type = other.type;
        this.cost = other.cost;
        this.provider = other.provider;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public float getCost() {
        return cost;
    }

    public void setCost(float cost) {
        this.cost = cost;
    }

    public String getProvider() {
        return provider;
    }

    public void setProvider(String provider) {
        this.provider = provider;
    }

    public void printBenefitsInfo() {
        System.out.printf("Benefit Type: %s%n", getType());
        System.out.printf("Benefit Cost: $%.2f%n", getCost());
        System.out.printf("Benefit Provider: %s%n%n", getProvider());
    }
}