public class Pet {
    //class variables
    private String petName;
    private String petType;
    private String petSound;

    //constructors
    public Pet(String petName, String petType, String petSound){
        super();
        this.petName = petName;
        this.petType = petType;
        this.petSound = petSound;
    }

    public Pet(){
        super();
        this.petName = "Unknown Pet Name";
        this.petType = "Unknown Pet Type";
        this.petSound = "Unknown Pet Sound";
    }

    //getters setters
    public String getPetName(){
        return petName;
    }
    public void setPetName(String petName) {
        this.petName = petName; 
    }
    public String getPetType(){
        return petType;
    }
    public void setPetName(String petType) {
        this.petType = petType; 
    }
    public String getPetSound(){
        return petSound;
    }
    public void setPetName(String petSound) {
        this.petSound = petSound; 
    }

    //class methods - function creates a string with labels and object data

    public String PrintInfo()
    {
        String myReturn = "";
        myReturn = "Name: " + this.getPetName() + " " + this.getPetType() + " "

    }

}
