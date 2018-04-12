#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;
void printScoreboard(vector < vector <int> >);
int randomBetween(int, int); 

int main()
{
  int periods;
  int teams;
  vector<vector<int> > scoreKeeper; 

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
   scoreKeeper.resize(teams); 
   for (int r= 0; r < scoreKeeper.size(); r++) 
   {
     scoreKeeper[r].resize( periods ); 
   }
   

   for (int r=0; r < scoreKeeper.size(); r++) 
   { 
     for (int c= 0; c < scoreKeeper[r].size(); c++) 
     {
       scoreKeeper[r][c] = 0; 
     }
   } 

    printScoreboard(scoreKeeper); 
 
   for (int r=0; r < scoreKeeper.size(); r++) 
   { 
     for (int c= 0; c < scoreKeeper[r].size(); c++) 
     {
       scoreboard[r][c] = randomBetween(0,9); 
     }
   } 

 

  } 
  return 0; 
 } 

  void printScoreboard(vector< vector<int> > grid) 
  {
    cout<<"SCOREBOARD\n"; 

   for (int r = 0; r < grid.size(); r++)
   { 
     cout<< "Player " << r + 1<< ": "; 
     for (int c = 0; c < grid[r].size(); c++) 
     { 
       cout << grid[r][c] << "|";
     }
     cout << endl; 
   }
 } 
 
 int randomBetween(int , int) 
   //make scoreboard and fill it with zeros
  
   //once created, display the scoreboard
 
