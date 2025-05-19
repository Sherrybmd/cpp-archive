#include <iostream>

using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "base class method" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "derived class methodi" << "\n";
    }
};

int main()
{
    Base* ptr;
    Derived object;
    ptr = &object;

    ptr->show();
    (*ptr).show();

    cout << "\n";
    return 0;
}
