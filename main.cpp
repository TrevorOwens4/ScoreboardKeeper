#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
  int periods;
  int teams;
  int row;
 vector < vector < int > >scoreboard;
 cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
   //make scoreboard and fill it with zeros
int score;
scoreboard.resize(teams);
for ( int row = 0; row < scoreboard.size(); row++)
{
scoreboard[row].resize(periods);
for (int col = 0; col < scoreboard[row].size(); col++)
scoreboard[row][col] = 0;
}


//once created, display the scoreboard
int currentScore = 0;
cout << "SCOREBOARD" << endl;

for ( int row = 0; row < scoreboard.size(); row++)
{
cout << "Player " << row + 1 << ": ";
for ( int col = 0; col < scoreboard[row].size(); col++)
{
cout << scoreboard[row][col] << "|";
}
cout << endl;
} 
 
 }

  return 0;
}
