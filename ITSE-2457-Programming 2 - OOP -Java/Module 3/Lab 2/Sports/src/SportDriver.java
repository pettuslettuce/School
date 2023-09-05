/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 10 2023
 * Module 3 Lab 2
 * SportDriver
 */
import java.util.Scanner;
public class SportDriver {
    public static void main(String[] args) throws Exception {
        //Driver variables:
        String teamName;
        int teamPlayers;
        int teamWins;
        int teamLosses;
        //Instantiate keyboard scanner
        Scanner userInput = new Scanner(System.in);
        //Instantiate default team constructor
        Sport mySportOne = new Sport();
        //Collect team name from user
        System.out.println("What is the team name?: ");
        teamName = userInput.nextLine();
        mySportOne.setTeamName(teamName);
        //Collect team players from user
        System.out.println("How many players on your team?: ");
        teamPlayers = userInput.nextInt();
        mySportOne.setTeamPlayers(teamPlayers);
        //Collect team wins from user
        System.out.println("How many wins does your team have?: ");
        teamWins = userInput.nextInt();
        mySportOne.setTeamWins(teamWins);
        //Collect team losses from user
        System.out.println("How many losses does your team have?: ");
        teamLosses = userInput.nextInt();
        mySportOne.setTeamLosses(teamLosses);
        System.out.println(mySportOne.PrintInfo());
        //Close Scanner
        userInput.close();
        //Instantiate populated team constructor
        Sport mySportTwo = new Sport("Bulverde Beavers", 17, 28, 7);
        System.out.println(mySportTwo.PrintInfo());
    }
}