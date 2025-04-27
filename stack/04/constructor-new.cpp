#include <iostream>

using namespace std;


class MyClass
{

    int x;
    int y;
public:
    MyClass() : x(0), y(0) {

        cout << "Default Constructor" << "\n";
    }

    // parametr creator
    MyClass(int a, int b) : x(a), y(b) {
        cout << "Parametrized Constructor" << "\n";
    }


    MyClass(const MyClass &obj) : x(obj.x), y(obj.y) {
        cout << "Copy Coonstructor" << "\n";
    }

    void display() const {
        cout << "x: " << x << ", y: " << y << "\n";
    }
};

int main()
{
    MyClass obj1;          // default constructor
    obj1.display();
    cout << "\n";

    MyClass obj2(10, 20);  // parametr constructor
    obj2.display();
    cout << "\n";

    MyClass obj3 = obj2;   // copy constructor
    obj3.display();
    cout << "\n";


    cout << "\n";
    return 0;
}
