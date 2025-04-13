#include <iostream>
#include <string>
using namespace std;

// name.append()

int main()
{
    string str = "Hello";
    str.append(", World!");
    cout << "Appended string: > " << str << "\n";

    // or use +=
    str += " How are you?";
    cout << "Updated string: > " << str << endl;

    cout << "\n";
    return 0;
}
