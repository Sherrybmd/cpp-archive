#include <iostream>

using namespace std;

class test
{
    public:
        // constructor
        test()
        {
            cout << "constructor called" << endl;
        }
        // destructor

        ~test()
    {

        cout << "destructing" << endl;
    }
};

int main()
{
    test t1;  // constructor for t1 called
    int a = 1;

    if(a==1)
    {
        test t2; // constructor for t2 called

    } // destructed t2


    return 0;
} // destructed t1
