/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * MedicalSystem Doctor Class
 */

//Displays Doctor information to include the PrintInfo from the parent class
//Displays Weekly Gross Pay (note this is calculated based on Annual Salary)

public class Doctor extends MedicalProvider {
    private String specialty;
    private String licenseNumber;
    private String roomNumber;
    private double yearlySalary;

     //no arg constructor
    public Doctor() {
        super();
        this.specialty = "";
        this.licenseNumber = "";
        this.roomNumber = "";
        this.yearlySalary = 0.0;
    }

    //populated constructor
    public Doctor(String firstName, String lastName, String employeeID, OfficeLocation employeeOfficeLocation, String specialty, String licenseNumber, String roomNumber, double yearlySalary) {
        super(firstName, lastName, employeeID, employeeOfficeLocation);
        this.specialty = specialty;
        this.licenseNumber = licenseNumber;
        this.roomNumber = roomNumber;
        this.yearlySalary = yearlySalary;
    }

    //gettersetters
    public String getSpecialty() {
        return specialty;
    }
    public void setSpecialty(String specialty) {
        this.specialty = specialty;
    }

    public String getLicenseNumber() {
        return licenseNumber;
    }
    public void setLicenseNumber(String licenseNumber) {
        this.licenseNumber = licenseNumber;
    }

    public String getRoomNumber() {
        return roomNumber;
    }
    public void setRoomNumber(String roomNumber) {
        this.roomNumber = roomNumber;
    }

    public double getYearlySalary() {
        return yearlySalary;
    }
    public void setYearlySalary(double yearlySalary) {
        this.yearlySalary = yearlySalary;
    }


    //calculate weekly gross
    public double calculateWeeklyGrossPay() {
        double weeklyGrossPay = this.yearlySalary / 52.0;
        return weeklyGrossPay;
    }

    //overriding abstract function from PayrollExport interface
    public String toPayrollString() {
        String payrollString = String.format("%s, %s, %s %s, %s, %s, %s, %s, %.2f",
                this.getEmployeeID(),
                this.getSpecialty(),
                this.getFirstName(),
                this.getLastName(),
                this.getEmployeeOfficeLocation().getAddress(),
                this.getEmployeeOfficeLocation().getCity(),
                this.getEmployeeOfficeLocation().getState(),
                this.getEmployeeOfficeLocation().getZip(),
                this.calculateWeeklyGrossPay()
        );
        return payrollString;
    }
    
    //overriding printInfo class from abstracted MedicalProvider class
    @Override
    public void printInfo() {
        super.printInfo();
        System.out.println("Specialty: " + this.getSpecialty());
        System.out.println("License Number: " + this.getLicenseNumber());
        System.out.println("Room Number: " + this.getRoomNumber());
        System.out.println("Yearly Salary: " + this.getYearlySalary());
        System.out.println("Weekly Gross Pay: " + this.calculateWeeklyGrossPay());
    }
}
