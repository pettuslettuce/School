import java.util.Scanner;

public class EmployeeDriver {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // create variables  to hold a userID, first name and last name (all Strings)
        String userID, firstName, lastName;
        // output to the user Welcome to the Info system
        System.out.println("Welcome to the Info system:");
        // instantiate a Benefit object using the 3 argument constructor (your choice on the data). 
        Benefits benefits = new Benefits("Dental", 60,"Aetna");
        // instantiate an Address object using the 4 argument constructor (your choice on the data)
        Address address = new Address("1234 Bandera", "San Antonio", "TX", "78255");
        //prompt the user for userID, first name and last name and store in variables created earlier
        System.out.print("Enter user ID: ");
        userID = scanner.nextLine();
        System.out.print("Enter first name: ");
        firstName = scanner.nextLine();
        System.out.print("Enter last name: ");
        lastName = scanner.nextLine();
        // instantiate an Employee object using the 5 argument constructor...
        // providing it with the data form the user prompts AND the Benefit object, and Address object created earlier
        Employee employee = new Employee(userID, firstName, lastName, benefits, address);
        //output to the user the Employee data using your PrintEmployeeInformation method.
        employee.PrintEmployeeInformation();
        // close Scanner object
        scanner.close();
    }
}