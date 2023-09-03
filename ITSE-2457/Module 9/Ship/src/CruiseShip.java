// CruiseShip class representing a cruise ship, extending the Ship class
class CruiseShip extends Ship {
    // Fields
    private int maxPassengers; // Field for the maximum number of passengers (an int)

    // Constructor
    public CruiseShip(String name, String yearBuilt, int maxPassengers) {
        // Call the constructor of the base class (Ship) with the name and yearBuilt arguments
        super(name, yearBuilt);
        this.maxPassengers = maxPassengers;
    }

    // Accessor (getter)
    public int getMaxPassengers() {
        return maxPassengers;
    }

    // Mutator (setter)
    public void setMaxPassengers(int maxPassengers) {
        this.maxPassengers = maxPassengers;
    }

    // toString method that displays the ship's name, year built, and maximum number of passengers
    @Override
    public String toString() {
        // Call the toString method of the base class (Ship) and append the maximum number of passengers
        return super.toString() + ", Maximum Passengers: " + maxPassengers;
    }
}
