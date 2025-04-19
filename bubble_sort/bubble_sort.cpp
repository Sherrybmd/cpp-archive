#include <iostream>
#include <string>

using namespace std;

void bubble_sort(string [ ]);

int main()

{
    string name[5] = {"sara", "afsaneh", "babak", "saman", "naser" };

    bubble_sort(name);  //displays the sorted strings

    for(int i=0; i<5; ++i)
        cout << name[ i ] << endl;


    cout << endl;
    return 0;
}

void bubble_sort(string name [ ])
{
    string t;

    for(int i=0; i<4; ++i)
        for(int j=i+1; j<5; ++j)
            if(name[ i ].compare( name[ j ]) > 0)
            {// interchange the two strings
                t= name[ i ];
                name[ i ] = name[ j ];
                name[ j ] = t;
            }
    return;
}
