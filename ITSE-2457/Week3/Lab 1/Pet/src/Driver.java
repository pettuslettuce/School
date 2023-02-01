public class Driver1 {

    public static void main(String[] args) {
        // Demo of using argument constructor
        Pet myPetOne = new Pet("Kevin", "Roark", 61);
        System.out.println(myPetOne.PrintInfo());

        // Demo of Default Constructor
        Person myPetTwo = new Pet();
        System.out.println(myPetTwo.PrintInfo());

        // Now using the setters - give the default constructor some values
        myPetTwo.setPetName("Liam");
        myPetTwo.setPetType("Dog");
        myPetTwo.setPetSound(11);

        // now output the myPersonTwo that now has data
        System.out.println(myPetTwo.PrintInfo());

    }

}