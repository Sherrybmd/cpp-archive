#include <iostream>

using namespace std;


class myclass {
    int i;
                            //faulty here
public:
    void set_i(int j) {i=j;}
    int get_i() {return i;}

};


int main()
{
    system("clear");
    myclass ob[3];
    ob[2].set_i(0);
    ob[0] = ob[1] = ob[2];

    myclass *p;

    p = ob; // get start of array
    for(int i=0; i<3; i++)
    {
        cout << p-> get_i() << endl;
        p++; // point to next object
    }

    return 0;
}
