// not done
#include <iostream>

using namespace std;

class
{
public:
    Complex operator+(const Complex& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        //stuff here
        return res;
    }

    void print() {}
};

int main()
{

    cout << "\n";
    return 0;
}

