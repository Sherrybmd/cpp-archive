#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>vectorname;

    vectorname.push_back(10);
    vectorname.push_back(20);
    vectorname.push_back(30);
    vectorname.push_back(40);
    vectorname.pop_back();

    for (int i = 0; i < vectorname.size(); i++)
        cout << vectorname[i] << '\n';

    cout << '\n';
    return 0;
}
