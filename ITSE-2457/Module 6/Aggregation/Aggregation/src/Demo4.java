/**
 * This program demonstrates the Course class.
 * Demo4
 */

public class Demo4 {
    public static void main(String[] args) {
        // Create an Instructor object.
        Instructor myInstructor = new Instructor("Roark", "Kevin", "MLH201");

        // Create a TextBook object.
        TextBook myTextBook = new TextBook("Starting Out with Java",
                "Gaddis", "Addison-Wesley");

        // Create a Course object.
        Course myCourse = new Course("Intro to Java", myInstructor,
                myTextBook);

        // Display the course information.
        System.out.println(myCourse);
    }
}