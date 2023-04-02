/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 27 2023
 * Module 5 Lab 1
 * Launch Counter
 */
public class launchCounter {
    public static void main(String[] args) throws Exception {
        int doCounter = 10;
        int whileCounter = 10;
        // Do While
        do {
            System.out.printf("T- Minus: %d \n", doCounter);
            doCounter--;
            Thread.sleep(1000);
            if (doCounter == 0) {
                System.out.printf("T- Minus: %d \n", doCounter);
                System.out.printf("WE HAVE IGNITION! \n");
                Thread.sleep(1000);
                System.out.printf("PAD LIFTOFF! \n");
                Thread.sleep(1000);
                System.out.printf("Vechile is nominal! \n");
                Thread.sleep(1000);
                System.out.printf("Do While Loop Example Complete! \n");
                Thread.sleep(2000);
            }
        } while (doCounter > 0);
        // For Loop
        for (int i = 10; i > -1; i--) {
            System.out.printf("T- Minus: %d \n", i);
            Thread.sleep(1000);
            if (i == 0) {
                System.out.printf("WE HAVE IGNITION! \n");
                Thread.sleep(1000);
                System.out.printf("PAD LIFTOFF! \n");
                Thread.sleep(1000);
                System.out.printf("Vechile is nominal! \n");
                Thread.sleep(1000);
                System.out.printf("For Loop Example Complete! \n");
                Thread.sleep(2000);
            }
        }
        // While Loop
        while (whileCounter > 0) {
            System.out.printf("T- Minus: %d \n", whileCounter);
            whileCounter--;
            Thread.sleep(1000);
            if (whileCounter == 0) {
                System.out.printf("T- Minus: %d \n", whileCounter);
                System.out.printf("WE HAVE IGNITION! \n");
                Thread.sleep(1000);
                System.out.printf("PAD LIFTOFF! \n");
                Thread.sleep(1000);
                System.out.printf("Vechile is nominal! \n");
                Thread.sleep(1000);
                System.out.printf("While Loop Example Complete! \n");
                break;
            }
        }
    }
}
