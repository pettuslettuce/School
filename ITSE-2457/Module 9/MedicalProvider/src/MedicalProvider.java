/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * MedicalSystem MedicalProvider Class
 */

// Medical Provider - Displays Provider Information and Office Location

// abstract class since it's not being instantiaed; PayrollExport being implemented and given to child classes
public abstract class MedicalProvider implements PayrollExport {
    private String firstName;
    private String lastName;
    private String employeeID;
    private OfficeLocation employeeOfficeLocation;
    
    //no arg constructor
    public MedicalProvider() {
        this.firstName = "";
        this.lastName = "";
        this.employeeID = "";
        this.employeeOfficeLocation = new OfficeLocation();
    }
    
    //populated constructor
    public MedicalProvider(String firstName, String lastName, String employeeID, OfficeLocation employeeOfficeLocation) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.employeeID = employeeID;
        this.employeeOfficeLocation = employeeOfficeLocation;
    }
    
    //gettersetters
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
    public String getEmployeeID() {
        return employeeID;
    }
    public void setEmployeeID(String employeeID) {
        this.employeeID = employeeID;
    }
    public OfficeLocation getEmployeeOfficeLocation() {
        return employeeOfficeLocation;
    }
    public void setEmployeeOfficeLocation(OfficeLocation employeeOfficeLocation) {
        this.employeeOfficeLocation = employeeOfficeLocation;
    }
    
    //MedicalProvider printInfo
    public void printInfo() {
        System.out.println("Employee ID: " + this.getEmployeeID());
        System.out.println("Name: " + this.getFirstName() + " " + this.getLastName());
        System.out.println("Office Location: " + 
                this.getEmployeeOfficeLocation().getAddress() + ", " +
                this.getEmployeeOfficeLocation().getCity() + ", " + 
                this.getEmployeeOfficeLocation().getState() + " " +
                this.getEmployeeOfficeLocation().getZip());
        
    }
    
}
