#include <iostream>

using namespace std;

class Base {
public:
    int data;
    void func(int input) {
        cout << "execute base func" << "\n";
    }
};

class Derived : public Base {
public:
    void func(int input) {
        cout << "exec derived func" << "\n";
        cout << input << "\n";
    }
};


int main()
{

    cout << "\n";
    return 0;
}
