#include <iostream>

using namespace std;
template <typename T, typename U>

auto func(T data1, U data2)
{
    return data1 + data2;
}

int main()
{
    cout << func(5, 3.5) << "\n";


    cout << "\n";
    return 0;
}
