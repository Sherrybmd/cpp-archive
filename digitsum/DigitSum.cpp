#include <iostream>
#include <vector>
using namespace std;

class Num {
	public:

		int UserInput;
		int sum = 0;
		bool Error = false;
		vector<int> Digits;

		void GetUserInput() {

			cout << " enter the number \n>";
			cin >> UserInput;

			/*
			if ( typeid(UserInput).name() != "i" ) {
				cout << "ERROR!" << "\n" << "wrong input, enter a number only 0-9 digits" << "\n";
				Error = true;
				GetUserInput();
			}
			*/
		}

		void DigSum() {
			int num = UserInput;

			int Digit = 0;

			do {
				Digit = num % 10;
				sum += Digit;
				num = num / 10;

			}while (num > 0);
			cout << "sum of digits: " << sum;
		}

};

int main() {
	Num user;

	user.GetUserInput();
	user.DigSum();



	return 0;
}


/*
1_ start
2_receive decimal
3_ need to know how many digits there is ( count method needed)
-_ for ( int Dec = 1759;
4_ from highest digits, to lowest, separate numbers  ( 1759 => 1, 7, 5, 9 )  and store
5_ sum them up
6_ show sum
7_ end

i was wrong initially, i understood i need to delete the digits im done with from the main number, but i approached it in a very inefficient way.
i used T = 10, as my modifier for Num % T. so i kept multiplying T by 10, AND subtracted it by main num, THEN i divided result by 10...
weird way, i knew what i needed to do but didnt think enough about it just jumped in action and results were baaad.
*/
