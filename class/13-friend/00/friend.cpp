#include <iostream>
                            //friends can access our private parts !
using namespace std;

class myclass {

    int a,b;
public:
    friend int sum(myclass x);
    void set_ab(int i, int j);
};


void myclass :: set_ab(int i, int j)
{
    a = i;
    b = j;
}

int sum(myclass x) { return x.a + x.b; }


int main()
{
    myclass n;
    system("clear");
    n.set_ab(5,8);
    cout << sum(n) << "\n";

    cout << "\n";
    return 0;
}
