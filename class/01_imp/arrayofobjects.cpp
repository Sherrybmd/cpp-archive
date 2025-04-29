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
    myclass ob[3] = {1, 2, 3};
    myclass *p;
    int i;

    p = ob; // get start of array
    for(i=0; i<3; i++)
    {
        cout << p-> get_i() << endl;
        p++; // point to next object



    }

    return 0;
}
