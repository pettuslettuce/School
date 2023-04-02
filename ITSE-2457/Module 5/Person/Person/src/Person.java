/**
 * @author Kevin Roark
 * Person Class 
 * 	Class contains: First name, Last name, and age 
 * 
 * ITSE-2457; OOP Java; M/W 2pm
 * Amended by Andrew Pettus
 * March 5 2023
 * Module 5 Lab 3
 * Person Class
 */
public class Person {
	//Attributes/fields
	private String firstName;
	private String lastName;
	private int personAge;
	private String phoneNumber;
	private double GPA; 

	/**************************************
	 * Constructors
	 **************************************/
	//Constructors (Default)
	// Modify the default constructor to set phone number to "Unknown" and GPA to 0.0
	public Person()
	{
		firstName = "None";
		lastName = "None";
		personAge = 0;
		phoneNumber = "Unknown";
		GPA = 0.0;
	}
	//Constructors (Populates data with arguments)
	// Modify the other constructor (one with 3 arguments) that is already written to set phone number to "Unknown" and GPA to 0.0
	public Person(String pFirst, String pLast, int pAge)
	{
		setFirstName(pFirst);
		setLastName(pLast);
		setPersonAge(pAge);		
		setPhoneNumber("Unknown");
		setGPA(0.0);
	}
	// Create an additional constructor to accept all of the values passed as parameters - 
	// note this will be similar to the current constructor that takes parameters but has an additional 2 parameters passed to if for the new attributes. 
	public Person(String pFirst, String pLast, int pAge, String pPhone, double pGPA)
	{
		setFirstName(pFirst);
		setLastName(pLast);
		setPersonAge(pAge);		
		setPhoneNumber(pPhone);
		setGPA(pGPA);
	}
	/**************************************
	 * Getters/Setters
	 **************************************/	

	public String getFirstName() {
		return firstName;
	}

	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}

	public String getLastName() {
		return lastName;
	}

	public void setLastName(String lastName) {
		this.lastName = lastName;
	}

	public int getPersonAge() {
		return personAge;
	}
	public void setPersonAge(int personAge) {
		this.personAge = personAge;
	}
	public String getPhoneNumber(){
		return phoneNumber;
	}
	public void setPhoneNumber (String phoneNumber){
		this.phoneNumber = phoneNumber;
	}
	public double getGPA(){
		return GPA;
	}
	public void setGPA(double GPA){
		this.GPA = GPA;
	}
	/**************************************
	 * Methods 
	 **************************************/
	public String PrintData()
	{
		String myReturn = "";
		myReturn += "Name: " + getFirstName() + " " + getLastName();
		myReturn += ", Age: " + getPersonAge();
		myReturn += ", GPA: " +getGPA();
		myReturn += ", Phone: " +getPhoneNumber();
		return myReturn;
	}	

} // END Person Class