#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;			
									
	//guessing game, by shahryar babamohammadi
	// ID: 403151015

class guessgame {
	public:
		string msg;
		void randomize(){
			
			srand(time(0));
			number = (rand() % 100) +1;
		}
		
		void SetTries(){
			char choice;
			
			cout << "===welcome to the number guessing game!===" << endl 
			
			<< "\nchoose the difficulty level by entering the options letter (a,b,c)" << "\n"
			<< "a_ easy (15 tries)\n" 
			<< "b_ medium (10 tries)\n"
			<< "c_ hard (5 tries)\n"
			<< ">";
		
			cin >> choice;
			
			switch(choice){
				
				case 'a':
					tries = 15;
					break;
				
				case 'b':
					tries = 10;
					break;
				
				case 'c':
					tries = 5;
					break;
			}
		}
		
		
		void GetGuess(){
			cout << "now, take a guess player!" << "\n" 
				 << ">";
			cin >> guess;
		}
		
		
		void GiveHint(int g, int n){
			
			// makes sure tries dont go to negative, and game ends right when tries == 0
			if (tries > 0){
				tries = tries - 1;
			}
			else {
				end = true;
				msg = "you are out of tries, better luck next time.";
				return;
			}
			
			
			// give user hints based on if guess is higher or lower than mystery number
			if (g>n){
				cout << "it's lower than " << guess << "\n";
				return;
			}
			
			else if (g<n){
				cout << "it's higher than " << guess << "\n";
				return;
			}
		
		}
		
		
		bool CheckGuess(){
			if (guess == number){
											// ends game when guess is right, if not gives hint 
				end = true;
				msg = "You win!";
				return true;
			}
			else {
				GiveHint(guess, number);
				return false;
			}
			
		}
		                              
		                            	
		void Play(){						// randomize num and set tries once, 
		                             		 // continously ask and compare guess to number, until we run out of tries
			randomize();
			SetTries();
			
			do {
				GetGuess();
				CheckGuess();
			}while( end == false );
			
			cout << ">>> " << msg << endl;
		}
		
		
	private:
		bool end = false;
		int tries = 0;
		int number = 0;
		int guess = 0;
};

int main() {
	
	guessgame game1;
	game1.Play();
		 
		 
	return 0;
}





/*
1_ start
2_ randomize the number
3_ ask for chances needed
4_ ask user for guess
5_ if guess == number -> user wins -> end
6_ reduce user chances by 1
7_ give hint:
	1_ start
	2_ if number > guess -> tell user its higher
	3_ elseif number < guess -> tell user its lower
	4_ break
8_ move to step 4
*/