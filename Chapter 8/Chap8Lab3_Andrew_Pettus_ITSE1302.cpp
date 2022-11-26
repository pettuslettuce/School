//  Chap8Lab3.cpp
//  ITSE1302 NVC
//  Written by Andrew Pettus on Nov/14/2022
/*Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate. 
The program should then output each candidate’s name, the number of votes received, and the percentage of the total votes received by the candidate. 
Your program should also output the winner of the election. 

A sample output is:

Candidate                       Votes Received          % of Total Vote

Faye Kitt-Knightley                 5000                    25.91
Benedict Tryntobenicer              4000                    20.73
Arthur Anymoredonuts                6000                    31.09
Oswald Thatendswald                 2500                    12.95
Lars Lars Pantsonfars               1800                     9.33
Collin Th'Marines                      0                     0.00
Total

*/
#include <iostream>
#include <iomanip>
using namespace std;
const int ARRAY_SIZE = 6;
string candidateName[ARRAY_SIZE] = {"Faye Kitt-Knightley ", "Benedict Tryntobenicer", "Arthur Anymoredonuts ", "Oswald Thatendswald ", "Lars Lars Pantsonfars", "Collin Th'Marines"};
int candidateVotes[ARRAY_SIZE] = {5000,4000,6000,2500,1800,900};
void electionResults (string candidateName[], int candidateVotes[]);
int main(){
electionResults(candidateName,candidateVotes);
return 0;
}
void electionResults (string candidateName[], int candidateVotes[]){
    float totalVotes;
    float percentage;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        totalVotes += candidateVotes[i];
    }
    cout << totalVotes << endl;
    cout << "Candidate:                 Votes:                      Percentage:                " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << showpoint << fixed << setprecision(2);
        percentage = ((candidateVotes[i]/totalVotes)*100);
        cout << candidateName[i] <<"                   " << candidateVotes[i] <<"                     " << percentage << "%" << endl;
    }

}


