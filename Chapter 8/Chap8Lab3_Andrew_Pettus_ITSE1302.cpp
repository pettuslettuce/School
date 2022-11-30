//  Chap8Lab3.cpp
//  ITSE1302 NVC
//  Written by Andrew Pettus on Nov/26/2022
/*Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate. 
The program should then output each candidate’s name, the number of votes received, and the percentage of the total votes received by the candidate. 
Your program should also output the winner of the election. 
*/
#include <iostream>
#include <iomanip>
using namespace std;
const int ARRAY_SIZE = 5;
string candidateName[ARRAY_SIZE];
int candidateVotes[ARRAY_SIZE];
void electionResults (string candidateName[], int candidateVotes[]);
int main()
{
electionResults(candidateName,candidateVotes);
return 0;
}
void electionResults (string candidateName[], int candidateVotes[]){
    float totalVotes;
    float percentage;
    int winArraySpot; 
    // Collecting candidate names and votes as well as processing total vote sum
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Please enter the name of candidate # " << i + 1 << ": " << endl;
        cin.sync();
        getline(cin, candidateName[i]);
        cout << "Please enter the votes received for " << candidateName[i] << ": " << endl;
        cin >> candidateVotes[i];

        totalVotes += candidateVotes[i];
    }
    // Output program header 
    cout << endl;
    cout << "ELECTION RESULTS: " << endl;
    cout << "***************** " << endl;
    cout << setw(28) << left << "Candidate: " << setw(12) << left << "Votes: " << left << "Percentage of Total Vote: " << endl;
    // List candidates, votes, and percentages
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // setprecision for percentage decimals
        cout << showpoint << fixed << setprecision(2);
        // percentage processing
        percentage = ((candidateVotes[i]/totalVotes)*100);
        // actual line output
        cout << setw(28) << left << candidateName[i] << setw(12) << left << candidateVotes[i] << left << percentage << left << " %" << endl;
    }
    // Calculate Winner 
    int countVotes = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {        
        if (candidateVotes[i] > countVotes)
        {
            winArraySpot = i; 
        }
        countVotes = candidateVotes[i];
    }
    // Display total votes
    cout << endl;
    cout << noshowpoint << "Total Election Votes: " << int(totalVotes) << endl;
    // Display election winner
    cout << "Election Winner: " << candidateName[winArraySpot] << "!" << endl;
}


