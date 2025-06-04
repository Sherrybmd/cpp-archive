#include <iostream>

using namespace std;

int main()
{
    try {
        int a = 10;
        int b = 0;
    if (b == 0)
        throw "Division by zero!";

    int c = a / b;
    cout << c << "\n";
    }
    catch (const char* msg) {
        cerr << "error" << msg << "\n";
    }

    cout << "\n";
    return 0;
}
