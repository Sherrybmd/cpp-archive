#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec= {0};
    cout << "initial capacity: " << vec.capacity() << '\n';

    vec.push_back(500);
    cout << "capacity now: " << vec.capacity() << '\n';
    cout << "size now: " << vec.size() << '\n';

    if (!vec.empty())
        cout << "not empty, emptying now" << "\n\n";

    vec.clear();
    if( vec.empty() )
        cout << "it's empty now" << '\n';

    cout << "capacity now: " << vec.capacity() << '\n';
    cout << "size now: " << vec.size() << "\n\n";

    cout << "value in 0 index: " << vec[0] << '\n';
    cout << "value in 1 index: " << vec[1];

    cout << '\n';
    return 0;
}
