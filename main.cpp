#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
        int periods, row;
        int teams, col;
        int P_NUMBER = 1;
        vector < vector <int> > score_Board;

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
               score_Board.resize(teams);
               for( int row = 0; row < score_Board.size(); row ++)
               {
                    score_Board[row].resize(periods);
               }
               
               for(int row = 0; row < score_Board.size(); row ++)
                {
                        for(int col = 0; col < score_Board[row].size(); col ++)
                        {
                                score_Board [row][col] = 0;
                        }
                }

                for (int row = 0; row < score_Board.size(); row ++)
                { 
                        cout<< "Player : " << P_NUMBER<< " ";
                        for(int col = 0; col < score_Board[row].size(); col ++)
                        { 
                                cout<< score_Board[row][col];
                                cout<< "|";
                        }
                       P_NUMBER ++;
                       cout<<endl;
                }
                //make scoreboard and fill it with zeros

                //once created, display the scoreboard
        }
        return 0;
}
