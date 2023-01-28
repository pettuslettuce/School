import java.util.*;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        String strName = "";
        double dblGradeOne = 0.0;
        double dblGradeTwo = 0.0;
        double dblGradeThree = 0.0;
        double dblGradeAverage = 0.0;

        // set up Scanner object to get User input
        Scanner myScan = new Scanner(System.in);

        // Get users name
        System.out.print("What is your name? ");
        strName = myScan.nextLine();

        // Get user grades
        System.out.print("Enter your first grade: ");
        dblGradeOne = myScan.nextDouble();
        System.out.print("Enter your second grade: ");
        dblGradeTwo = myScan.nextDouble();
        System.out.print("Enter your third grade: ");
        dblGradeThree = myScan.nextDouble();

        // Calculate Grade
        dblGradeAverage = (dblGradeOne + dblGradeTwo + dblGradeThree) / 3;
        System.out.println(strName + ", your grade average is " + dblGradeAverage);
        myScan.close();
    } // end Main

} // end class
