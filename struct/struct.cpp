#include <iostream>
#include <string>

using std::cin, std::cout, std::string;

struct complex {
    float a;
    string b;
};

int main()
{
    complex x, y, z;

    cout << "enter 2 complex numbers" << "\n"
         << "first enter the numerical part, then the letter" << "\n>";

    cin >> x.a >> x.b;
    cout << "enter the next one now!\n";
    cin >> y.a >> y.b;

    //sum

    z.a = x.a + y.a;
    z.b = x.b + y.b;

    cout << "\n" << "heres the result of summing these two complex numbers!" << "\n>"
    << z.a << z.b << "\n";




    return 0;
}
