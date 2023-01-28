import java.util.Scanner;
import java.text.NumberFormat;

public class CashReg {
    public static void main(String[] args) throws Exception {
        double drawerValue = 0;
        int[] drawerCounts = {0,0,0,0,0,0,0,0};
        double[] cashValues = {20, 10, 5, 1, .25, .1, .05, .01};
        String[] cashNames = {"20 Dollar Bills", "10 Dollar Bills", "5 Dollar Bills", 
            "1 Dollar Bills", "Quarters", "Dimes", "Nickles", "Pennies"};
        NumberFormat fmt1 = NumberFormat.getCurrencyInstance();
        Scanner myScan = new Scanner(System.in);
        System.out.println("Hey there Register Registrar! Let's count some cash!");
        for (int i =0; i < 8; i++){
            System.out.println("How many " + cashNames[i] + " do you have?");
            drawerCounts[i] = myScan.nextInt();
        }
        for (int i =0; i < 8; i++){
            System.out.printf("You entered %dx %s\n", drawerCounts[i],cashNames[i]);
            System.out.println("That's " + fmt1.format(cashValues[i] * drawerCounts[i]));
            drawerValue = drawerValue + (cashValues[i] * drawerCounts[i]);
        }
        System.out.println("Your total register value is: " + fmt1.format(drawerValue));
    }
}