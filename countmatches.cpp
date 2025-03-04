/*You are given an integer n, the number of teams in a tournament that has strange rules:If the current number of teams is even, each team gets 
paired with another team. A total of n / 2 matches are played, and n / 2 teams advance to the next round.If the current number of teams is odd, 
one team randomly advances in the tournament, and the rest gets paired. A total of (n - 1) / 2 matches are played, and (n - 1) / 2 + 1 teams 
advance to the next round. Return the number of matches played in the tournament until a winner is decided.
Example 1:
Input: n = 7
Output: 6
Explanation: Details of the tournament: 
- 1st Round: Teams = 7, Matches = 3, and 4 teams advance.
- 2nd Round: Teams = 4, Matches = 2, and 2 teams advance.
- 3rd Round: Teams = 2, Matches = 1, and 1 team is declared the winner.
Total number of matches = 3 + 2 + 1 = 6.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int match = 0;
    int team;
    cout<<"Enter the number of teams ";
    cin>>team;
    while (team > 1){
        cout<<team<<endl;
        if(team % 2 == 0){
            match = match + (team/2);
            cout<<"If team is even matches played are "<<match<<endl;
            team = (team/2);
            cout<<"Total Number of team if team number is even "<<team<<endl;
        }
        else{
            match = match + ((team - 1)/2);
            cout<<"TOtal number of match if team is even "<<match<<endl;
            team = (((team - 1) / 2) + 1);
            cout<<"Total number of team if team is odd "<<team;

        }
    }
    cout<<"Total number of matches played are "<<match<<endl;


    return 0;
}