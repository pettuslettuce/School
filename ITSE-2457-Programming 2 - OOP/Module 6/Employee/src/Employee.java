public class Employee {
    private String employeeID;
    private String firstName;
    private String lastName;
    private Benefits employeeBenefits;
    private Address employeeHomeAddress;

    public Employee(String employeeID, String firstName, String lastName, Benefits employeeBenefits, Address employeeHomeAddress) {
        this.employeeID = employeeID;
        this.firstName = firstName;
        this.lastName = lastName;
        this.employeeBenefits = employeeBenefits;
        this.employeeHomeAddress = employeeHomeAddress;
    }

    public String getEmployeeID() {
        return employeeID;
    }

    public void setEmployeeID(String employeeID) {
        this.employeeID = employeeID;
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

    public Benefits getEmployeeBenefits() {
        return employeeBenefits;
    }

    public void setEmployeeBenefits(Benefits employeeBenefits) {
        this.employeeBenefits = employeeBenefits;
    }

    public Address getEmployeeHomeAddress() {
        return employeeHomeAddress;
    }

    public void setEmployeeHomeAddress(Address employeeHomeAddress) {
        this.employeeHomeAddress = employeeHomeAddress;
    }

    public void PrintEmployeeInformation() {
        System.out.println("Employee ID: " + employeeID);
        System.out.println("First Name: " + firstName);
        System.out.println("Last Name: " + lastName);
        employeeBenefits.PrintBenefitsInfo();
        employeeHomeAddress.PrintAddressInformation();
    }
}