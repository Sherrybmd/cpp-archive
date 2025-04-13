#include <iostream>

using std::cout, std::cin, std::endl, std::string;



int main()
{
    int x, *px;
    px = &x;
    x = 5;
    cout << px << "\n";

    *px = *px + 7;
    cout << x << "\n";
    cout << *px << "\n";   // *px == 12  and px == address
/*
    int y, *py;
    *py = y;
    y = 10;
    cout << py << "\n";
*/
    cout << endl;
    return 0;
}
