/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Mar 18 2023
 * Module 5 Lab 2
 * Box Size
 */

//Create a class "Box" that will display the box length, height, shape, and shape type.
public class Box {

    private int length, width; // -length (int), -width (int)
    private char boxCharacter; // -boxCharacter(char)
    private String shape;      // -shape(String)
    // +Box()
    public Box() {
    }
    // +Box(int, int, char)
    public Box(int length, int width, char boxCharacter) {
        this.length = length;
        this.width = width;
        this.boxCharacter = boxCharacter;
    }
    // +getLength()
    public int getLength() {
        return length;
    }
    // +setLength(int)
    public void setLength(int length) {
        this.length = length;
    }
    // +getWidth()
    public int getWidth() {
        return width;
    }
    // +setWidth(int)
    public void setWidth(int width) {
        this.width = width;
    }
    // +getCharacter()
    public char getBoxCharacter() {
        return boxCharacter;
    }
    // +setCharacter(char)
    public void setBoxCharacter(char boxCharacter) {
        this.boxCharacter = boxCharacter;
    }
    // +getShapeType()
    //The getShapteType will return a string indicating if the box is a rectangle or a square
    public String getShapeType() {
        if (length == width) {
            shape = "square";
            return shape;
        } else {
            shape = "rectangle";
            return shape;
        }
    }
    // +DrawBox()
    //The DrawBox function will return a string of the Box display using the characters
    public String drawBox() {
        String box = "";
        for (int row = 0; row < width; row++) {
            for (int column = 0; column < length; column++) {
                box += boxCharacter;
            }
            box += "\n";
        }
        return box;
    }


}
