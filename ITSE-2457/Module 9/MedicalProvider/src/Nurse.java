public class Nurse extends MedicalProvider {
    private String specialty;
    private double hourlyRate;
    private double hoursWorked;

    public Nurse() {
        super();
        this.specialty = "";
        this.hourlyRate = 0.0;
        this.hoursWorked = 0.0;
    }

    public Nurse(String firstName, String lastName, String employeeID, OfficeLocation employeeOfficeLocation, String specialty, double hourlyRate, double hoursWorked) {
        super(firstName, lastName, employeeID, employeeOfficeLocation);
        this.specialty = specialty;
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }

    public String getSpecialty() {
        return specialty;
    }

    public void setSpecialty(String specialty) {
        this.specialty = specialty;
    }

    public double getHourlyRate() {
        return hourlyRate;
    }

    public void setHourlyRate(double hourlyRate) {
        this.hourlyRate = hourlyRate;
    }

    public double getHoursWorked() {
        return hoursWorked;
    }

    public void setHoursWorked(double hoursWorked) {
        this.hoursWorked = hoursWorked;
    }

    @Override
    public String toPayrollString() {
        String payrollString = String.format("%s, %s, %s %s, %s, %s, %s, %s, %s",
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

    public double calculateWeeklyGrossPay() {
        double weeklyGrossPay = this.hourlyRate * this.hoursWorked;
        return weeklyGrossPay;
    }

    @Override
    public void printInfo() {
        super.printInfo();
        System.out.println("Type: " + this.getSpecialty());
        System.out.println("Hourly Rate: " + this.getHourlyRate());
        System.out.println("Hours Worked: " + this.getHoursWorked());
        System.out.println("Weekly Gross Pay: " + this.calculateWeeklyGrossPay());
    }
}
