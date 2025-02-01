#include <iostream>
#include <vector>
using namespace std;

vector<int> Digs;

int main() {
	int UserInput = 1759;
	int y = 10;
	int z = UserInput/y;
	int firstDig = UserInput - z*10;
	
	int T = 10;
	
	do {
		cout << UserInput % T;
		T = T*10;
		
		
		cout << endl;
		if ( UserInput % T == UserInput ) {
			cout << UserInput % T;
			break;
		}
		
	}while ( UserInput % T != UserInput );
	
	return 0;
	
}
