#include <iostream>
#include <cstdlib>
#include <map>
#include <ctime>		
using namespace std;

class TicTacToe {
	public:
		string PlayerOne, PlayerTwo;
		bool PlayerOneWin = PlayerTwoWin = 0;
		map <string, bool> players = { {PlayerOne, PlayerOneWin}, {PlayerTwo, PlayerTwoWin} };
		
		int PlayerNumber = 0;
		int board[3][3] =  {
							{0, 0, 0},
							{0, 0, 0},
							{0, 0, 0}
							};
		
		void DecidePlayerTurn () {
			srand(time(0));
			PlayerNumber = (rand() % 2) + 1;
			return;
		}
		
		void ChangePlayerTurn () {
			
			switch(PlayerNumber) {
				case 1:
					PlayerNumber = 2;
					break;
				case 2:
					PlayerNumber = 1;	
					break;
				default:
					cout << "ERROR, unexpected player turn, " << PlayerNumber << endl;
					break;
						
			}
			return;
		}
		
		bool IsDraw () {
			return true;	
		}
		
		bool IsWinner () {
			if same row values, row value owner wins
			
			if diagonal same values, diag owner wins (harder)
			
			if column same values, column value owner wins
			
		}
		
		void GetMove () {
			int row, column, occupied = 0;
			
			cout << "enter row and then column to place token \n";
			cin >> row;
			cin >> column;
			
			if ( board[row-1][column-1] == occupied) {
				cout << "occupied, make a different move" << endl;
				GetMove();
			} else {
				board[row-1][column-1] = 1;
			  }
			
			if ( IsWinner() == true){
				MovedPlayer won
				return
					
			}
			elseif ( IsDraw() == true ) {
				Game is Drawn
				return
			}
			
			else { 
				ask next player for GetMove
			}
			
			
		}
		
		
	
};
