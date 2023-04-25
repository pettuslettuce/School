/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * MedicalSystem OfficeLocation Class
 */

//Office Location - Displays Location information and Phone Number
class OfficeLocation {
    // Private instance variables
    private String officeName;
    private String address;
    private String city;
    private String state;
    private String zip;
    private String phone;

    //no arg constructor
    public OfficeLocation() {
    }

    //populated constructor
    public OfficeLocation(String officeName, String address, String city, String state, String zip, String phone) {
        this.officeName = officeName;
        this.address = address;
        this.city = city;
        this.state = state;
        this.zip = zip;
        this.phone = phone;
    }
    
    // gettersetters
    public String getOfficeName() {
        return officeName;
    }
    public void setOfficeName(String officeName) {
        this.officeName = officeName;
    }
    
    public String getAddress() {
        return address;
    }
    public void setAddress(String address) {
        this.address = address;
    }
    
    public String getCity() {
        return city;
    }
    public void setCity(String city) {
        this.city = city;
    }
    
    public String getState() {
        return state;
    }
    public void setState(String state) {
        this.state = state;
    }
    
    public String getZip() {
        return zip;
    }
    public void setZip(String zip) {
        this.zip = zip;
    }

    public String getPhone() {
        return phone;
    }
    public void setPhone(String phone) {
        this.phone = phone;
    }

    //OfficeLocation printInfo
    public void printInfo() {
        System.out.println(officeName);
        System.out.println(address);
        System.out.println(city + ", " + state + " " + zip);
        System.out.println(phone);
    }
}