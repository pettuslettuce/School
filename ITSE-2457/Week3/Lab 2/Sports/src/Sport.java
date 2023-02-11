/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 10 2023
 * Module 3 Lab 2
 * Employee
 */
public class Sport {
    // class variables
    private String teamName;
    private int teamPlayers;
    private int teamWins;
    private int teamLosses;
    //constructors
    // Default constructor
    public Sport() {
        super();
        this.teamName = "Unknown Team Name";
        this.teamPlayers = -1;
        this.teamWins = -1;
        this.teamLosses = -1;
    }
    // Populated constructor
    public Sport(String teamName, int teamPlayers, int teamWins, int teamLosses) {
        super();
        this.teamName = teamName;
        this.teamPlayers = teamPlayers;
        this.teamWins = teamWins;
        this.teamLosses = teamLosses;
    } 

    //Getters and setters
    public String getTeamName() {
        return teamName;
    }
    public void setTeamName(String teamName) {
        this.teamName = teamName;
    }
    public int getTeamPlayers() {
        return teamPlayers;
    }
    public void setTeamPlayers(int teamPlayers) {
        this.teamPlayers = teamPlayers;
    }
    public int getTeamWins() {
        return teamWins;
    }
    public void setTeamWins(int teamWins) {
        this.teamWins = teamWins;
    }
    public int getTeamLosses() {
        return teamLosses;
    }
    public void setTeamLosses(int teamLosses) {
        this.teamLosses = teamLosses;
    }
    public double getWinPercentage(int teamWins, int teamLosses){
        double dblTeamWins = (double) teamWins;
        double dblTeamLosses = (double) teamLosses;
        double teamPercentage = (double)(dblTeamWins/(dblTeamWins+dblTeamLosses));
        return (teamPercentage * 100);
    }
    // class methods - function creates a string with labels and object data
    public String PrintInfo() {
        String myReturn = "";
        myReturn = "Team Name: " + this.getTeamName() + "\n";
        myReturn += "Player Count: " + this.getTeamPlayers() + "\n";
        myReturn += "Win Count: " + this.getTeamWins() + "\n";
        myReturn += "Loss Count: " + this.getTeamLosses() + "\n";
        myReturn += "Win Percentage: " + this.getWinPercentage(teamWins, teamLosses) + "%\n";
        return myReturn;

}
}
/*
Create a  Class called Sport with the following attributes:
Name (Team Cowboys, Flyers, Giants, etc)
Number of Players
Season wins
Season Losses

Constructors:
1.Default
2.Four arguments

Notes:
The program will have getters and setters for all four variables.
The program will have a getter (no setter as it is a calculated value) for the win/Loss percentage

Program User prompts:
Driver Program inputs (main program)
Name
Number of Players
Number of Wins 
Number of Losses

Processing:
Method to compute Win/Loss percentage (this method should be in the class Sport)

Program outputs
Driver Outputs: (main program)
Name
Number of Players
Number of Wins 
Number of Losses
Win/Loss Percentage
*/