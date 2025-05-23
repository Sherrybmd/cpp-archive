#include <iostream>

using namespace std;

int main()
{
    int *pNum = NULL;
    pNum = new int;

    *pNum = 21;
    cout << pNum << " " << *pNum << "\n";

    delete pNum;

    cout << "\n";
    return 0;
}
