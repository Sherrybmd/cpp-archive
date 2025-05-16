#include <iostream>
#include <string>

using namespace std;

class print
{
private:
    string text = "";
public:

    print& operator()()
    {
        cout << this << "\n";
    }

};


int main()
{
    print print;

    print("text");

    cout << "\n";
    return 0;
}
