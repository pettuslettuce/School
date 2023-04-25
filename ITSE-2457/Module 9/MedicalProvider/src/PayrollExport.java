/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * MedicalSystem PayrollExport Interface Class
 */


import java.io.*;

/*Create an interface that writes the following example to a file called Medical.csv,
of a file that could be imported into a payroll system. 
(The interface will be called form the Doctor and Nurse class)

Example of one record:
D1234, Type (Doctor or Nurse), Joe Smith, 123 Main Street, San Antonio, Texas, 78229, 1056.88
(here you display all the records)
The record should  display EmployeeID, Employee type, Full Name, Address, City, State, Zip and Weekly pay */

//definitely googled help on this one!
abstract interface PayrollExport {
    default void exportPayroll(String filename) throws IOException {
        BufferedWriter writer = new BufferedWriter(new FileWriter(filename));
        writer.write("EmployeeID,EmployeeType,FullName,Address,City,State,Zip,WeeklyPay");
        writer.newLine();

        String payrollString = this.toPayrollString();
        writer.write(payrollString);
        writer.newLine();

        writer.close();
    }

    String toPayrollString();
}