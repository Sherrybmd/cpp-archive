#include <iostream>
#include <string>
using namespace std;



int main() {
	string a,b,c;
	
	bool IsTie = false;
	

	string bbc,h;
	
	cout << "player1: please choose between rock||paper||scissors" <<endl;
	
	cin >> bbc;
	
	cout << "player2: please choose between rock||paper||scissors" <<endl;
	
	cin >> h;
	
	if (bbc==h) {
		cout << "its equal please try again";
		IsTie = true;
		}
		
	
	if (bbc=="paper" & h=="rock") {
		cout << "player 1 win";}
		
	if (bbc=="rock" & h=="paper") {
		cout <<"player 2 win";}
	
	if (bbc=="scissors" & h=="rock") {
		cout <<"player 2 win";}
		
	if (bbc=="rock" & h=="scissors") {
		cout <<"player 1 win";}
		
	if (bbc=="scissors" & h=="paper") {
		cout <<"player 1 win";}
		
	if (bbc=="paper" & h=="scissors") {
		cout <<"player 2 win";}		
		
		


	cout << IsTie;


	
	
	return 0;
	
}
