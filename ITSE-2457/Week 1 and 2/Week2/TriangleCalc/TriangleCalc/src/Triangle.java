/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Jan 27 2023
 * 
 * Triangle Calculator
 */


import java.util.Scanner;

public class Triangle {
    public static void main(String[] args) throws Exception {
        //setup variables
        double dblSide1 = 0;
        double dblSide2 = 0;
        double dblSide3 = 0;
        double dblHypo = 0;
        double dblSideSum = 0;
        double dblPerimeter = 0;
        double dblHalfPerim = 0;
        double dblArea = 0;
        String strUserName = "";
        //setup scanner object to get user input
		Scanner myScan = new Scanner(System.in);
        //prompt the user for their name
        System.out.println("Hello Triangle Traveler! Got Triangle Troubles? Let's Trinangularly Troubleshoot!");
        System.out.println("Please enter your name: ");
        strUserName = myScan.nextLine();
        //prompt the user for all three sides of triangle
        System.out.printf("Hi %s, please enter your triangle side lengths: \n", strUserName);
        System.out.println("Enter value for  first side of trianlge: ");
        dblSide1 = myScan.nextDouble();
        System.out.println("Enter value for  second side of trianlge: ");
        dblSide2 = myScan.nextDouble();
        System.out.println("Enter value for  third side of trianlge: ");
        dblSide3 = myScan.nextDouble();
        //Processing:
        //Perimeter and half perimeter processing
        dblPerimeter = dblSide1 + dblSide2 + dblSide3;
        dblHalfPerim = ((dblSide1 + dblSide2 + dblSide3)/2);
        //Find hypotenuse and create sum of other two sides
        if (dblSide1 > dblSide2 && dblSide1 > dblSide3){
            dblHypo = dblSide1;
            dblSideSum = dblSide2 + dblSide3;
        }
        else if (dblSide2 > dblSide1 && dblSide2 > dblSide3){
            dblHypo = dblSide2;
            dblSideSum = dblSide1 + dblSide3;
        }
        else if (dblSide3 > dblSide1 && dblSide3 > dblSide2){
            dblHypo = dblSide3;
            dblSideSum = dblSide1 + dblSide2;
        }
        //Compare hypotenuse to other two sides, warn user if triangle is impossible
        if (dblSideSum <= dblHypo){
            
            System.out.printf("Woah there %s, you entered side lengths that can't possibly form a triangle! \n", strUserName);
        }
        //If triangle possible, process area and outputs
        else if (dblSideSum > dblHypo){
            dblArea = (dblHalfPerim * (dblHalfPerim-dblSide1) * (dblHalfPerim-dblSide2) * (dblHalfPerim-dblSide3));
            System.out.printf("Hey %s, your triangle's area is %.2f units squared, and your triangle's perimeter is %.2f units! \n", strUserName, dblArea, dblPerimeter);
        }        
    }
}
