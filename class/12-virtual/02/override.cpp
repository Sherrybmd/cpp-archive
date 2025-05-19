#include <iostream>

using namespace std;

class Base
{
public:
    virtual void show(int x)
    {
        cout << "base class " << x << endl;
    }
};

class Derived : public Base
{
public:
    void show(int x) override
    {
        cout << "derived class " << x << "\n";
    }
};

int main()
{
    Base* ptr;
    Derived object;
    ptr = &object;

    ptr->show(5);
    (*ptr).show(5);

    cout << "\n";
    return 0;
}
