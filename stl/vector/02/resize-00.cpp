#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3};
    vec.resize(5);

    cout << "Vector elements after resize: " << "\n\n";
    for ( int v : vec)
        cout << v << '\n';

    cout << '\n';
    return 0;
}
