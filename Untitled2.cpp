#include <iostream>
#include <string>
using namespace std;


int main() {
	int num = 1;
	int mult = 7;
	int N;
	
										
	cout << "enter the N" << endl;
	cin >> N;
	
	while(N > 0){                        
			
		num = num * mult;
		N = N-1;	
	}
	cout << num;
							
	return 0;
}

