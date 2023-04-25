import java.io.*;

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