/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 10 2023
 * Module 3 Lab 3
 * Employee
 */
public class Employee {
        //Variables:
        private String firstName;
        private String lastName;
        private int idNumber;
        private String department;
        private String position;
        //Default employee constructor
        public Employee() {
            super();
            this.firstName = "Unknown First Name";
            this.lastName = "Unknown Last Name";
            this.idNumber = -999;
            this.department = "Unknown Department";
            this.position = "Unknown Position";
        }
        //Populated employee constructor
        public Employee(String firstName, String lastName, 
        int idNumber, String department, String position) {
            super();
            this.firstName = firstName;
            this.lastName = lastName;
            this.idNumber = idNumber;
            this.department = department;
            this.position = position;
        }

        //GetterSetters
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
        public int getIdNumber() {
            return idNumber;
        }
        public void setIdNumber(int idNumber) {
            this.idNumber = idNumber;
        }
        public String getDepartment() {
            return department;
        }
        public void setDepartment(String department) {
            this.department = department;
        }
        public String getPosition() {
            return position;
        }
        public void setPosition(String position) {
            this.position = position;
        }

        public String PrintInfo() {
            String myReturn = "";
            myReturn = "\nEmployee " + this.getIdNumber() + " Information: \n";
            myReturn += "First Name: " + this.getFirstName() + "\n";
            myReturn += "Last Name: " + this.getLastName() + "\n";
            myReturn += "ID Number: " + this.getIdNumber() + "\n";
            myReturn += "Department: " + this.getDepartment() + "\n";
            myReturn += "Position: " + this.getPosition() + "\n";
            return myReturn;
        }
}
/*
Write a class named Employee that has the following fields:
firstName. The firstName field is a String object that holds the employee’s first name.
lastName. The lastName field is a String object that holds the employee’s last name.
idNumber. The idNumber is an int variable that holds the employee’s ID number.
department. The department field is a String object that holds 
    the name of the department where the employee works.
position. The position field is a String object that holds the employee’s job title.

Program User prompts:
Employee information from the user for one instance of the Employee

Program outputs
Data for the employees

Program Notes:
Use getters/setters for all of the attributes. 
For the output, you can create a method within the class to output the information. 
Please be sure to use appropriate labels. 

Requirements
Create 1 Object of Employee populating the data via a five-argument constructor
Create 1 Object of employee and populate data via user input */