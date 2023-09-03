import java.util.Scanner;

public class ShipDriver {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt user for CargoShip attributes
        System.out.println("Enter the name of the CargoShip:");
        String cargoShipName = scanner.nextLine();

        System.out.println("Enter the year the CargoShip was built:");
        String cargoShipYearBuilt = scanner.nextLine();

        System.out.println("Enter the cargo capacity of the CargoShip (in tonnage):");
        int cargoShipCargoCapacity = scanner.nextInt();
        scanner.nextLine(); // consume newline

        // Create CargoShip object
        CargoShip cargoShip = new CargoShip(cargoShipName, cargoShipYearBuilt, cargoShipCargoCapacity);

        // Prompt user for CruiseShip attributes
        System.out.println("Enter the name of the CruiseShip:");
        String cruiseShipName = scanner.nextLine();

        System.out.println("Enter the year the CruiseShip was built:");
        String cruiseShipYearBuilt = scanner.nextLine();

        System.out.println("Enter the maximum number of passengers of the CruiseShip:");
        int cruiseShipMaxPassengers = scanner.nextInt();
        scanner.nextLine(); // consume newline

        // Create CruiseShip object
        CruiseShip cruiseShip = new CruiseShip(cruiseShipName, cruiseShipYearBuilt, cruiseShipMaxPassengers);

        // Output information of the CargoShip and CruiseShip
        System.out.println("\nCargo Ship Information:");
        System.out.println(cargoShip.toString());

        System.out.println("\nCruise Ship Information:");
        System.out.println(cruiseShip.toString());

        scanner.close();
    }
}
