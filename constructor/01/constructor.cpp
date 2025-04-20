#include <iostream>

using namespace std;

class test
{
    public:
        string name;
        int age;


        // constructor
        test(string n, int a)
        {
            cout << "constructor called" << endl;
            name = n;
            age = a;
        }


        // destructor
        ~test()
        {
            cout << "destructing" << endl;
        }


        void display()
        {
            cout << name << " " << age << "\n";
        }
};

int main()
{
    test t1("yo",15);
    t1.display();
    return 0;

} // destructed t1
