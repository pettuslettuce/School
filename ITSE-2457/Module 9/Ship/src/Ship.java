// Ship class representing a basic ship with name and year built
class Ship {
    // Fields
    private String name; // Field for the name of the ship (a string)
    private String yearBuilt; // Field for the year that the ship was built (a string)

    // Constructor
    public Ship(String name, String yearBuilt) {
        this.name = name;
        this.yearBuilt = yearBuilt;
    }

    // Accessors (getters)
    public String getName() {
        return name;
    }

    public String getYearBuilt() {
        return yearBuilt;
    }

    // Mutators (setters)
    public void setName(String name) {
        this.name = name;
    }

    public void setYearBuilt(String yearBuilt) {
        this.yearBuilt = yearBuilt;
    }

    // toString method that displays the ship's name and year it was built
    @Override
    public String toString() {
        return "Ship Name: " + name + ", Year Built: " + yearBuilt;
    }
}



