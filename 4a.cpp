/*
An election is contested by 5 candidates. The candidates are
numbered 1 to 5 and the voting is done by marking the candidate
number on the ballot paper. Develop an application to read the
ballots and count the votes cast for each candidate using an array
variable count. In case, a number read is outside the range 1 to 5, the
ballot should be considered as a 'spoilt ballot' and the program
should also count the number of spoilt ballots.
*/
#include <iostream>
using namespace std;

int main()
{
    const int TotalCandidates = 5;
    int count[TotalCandidates] = {0}; // 1st candidate corresponds to 0 index
    int spoiltVotes = 0;

    int choice = 0, totalVotes = 0;
    cout << "Enter the total number of votes: ";
    cin >> totalVotes;
    cout << "Enter the candidate number for each vote(1 to " << TotalCandidates << "): \n";
    for (int i = 0; i < totalVotes; i++)
    {
        cout << "Vote " << i + 1 << ": ";
        cin >> choice; // enter bw 1 to TotalCandidates
        if (choice > 0 && choice <= TotalCandidates)
        {
            count[choice - 1]++;
        }
        else
            spoiltVotes++;
    }
    cout << "\n-----------Election results-----------------\n";
    for (int i = 0; i < TotalCandidates; i++)
        cout << "Candidate " << i + 1 << " recieved " << count[i] << " votes.\n";
    cout << "Number of spoilt votes: " << spoiltVotes << " votes.\n";
    return 0;
}