// CargoShip class representing a cargo ship, extending the Ship class
class CargoShip extends Ship {
    // Fields
    private int cargoCapacity; // Field for the cargo capacity in tonnage (an int)

    // Constructor
    public CargoShip(String name, String yearBuilt, int cargoCapacity) {
        // Call the constructor of the base class (Ship) with the name and yearBuilt arguments
        super(name, yearBuilt);
        this.cargoCapacity = cargoCapacity;
    }

    // Accessor (getter)
    public int getCargoCapacity() {
        return cargoCapacity;
    }

    // Mutator (setter)
    public void setCargoCapacity(int cargoCapacity) {
        this.cargoCapacity = cargoCapacity;
    }

    // toString method that displays the ship's name, year built, and cargo capacity
    @Override
    public String toString() {
        // Call the toString method of the base class (Ship) and append the cargo capacity
        return super.toString() + ", Cargo Capacity: " + cargoCapacity;
    }
}