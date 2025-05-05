#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int number;
    // create the seed

    srand(time(0));

    // add +1 just so it's 1-100 instead of 0-99
    number = rand() % 100 + 1;
    cout << number << "\n";

    cout << "\n";
    return 0;
}
