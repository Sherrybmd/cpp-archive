#include <iostream>

using namespace std;
template <typename T>

T func(T data1, T data2)
{
    return data1 + data2;
}

int main()
{
    cout << func(5, 3) << "\n";


    cout << "\n";
    return 0;
}
