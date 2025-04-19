// issue is, needs to give value to ALL members of array, otherwise default value
#include <iostream>

using std::cout, std::cin, std::endl, std::string;



int main()
{
    int num [4];
    int *ptr;

    ptr = &num[0];

    cout << "enter 4 numbers!" << "\n";
    cin >> *(ptr)
        >> *(ptr+1)
        >> *(ptr+2)
        >> *(ptr+3);

    for(auto const s : num)
        cout << s;

    cout << endl;
    return 0;
}
