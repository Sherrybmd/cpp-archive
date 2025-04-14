#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

struct students {
    string name;
    int id;
    float grade_avg;
}x, *ptr;

void set_student(string *, int *, float *);

int main()
{

    int n;

    ptr = &x;

    bool stop = false;
    while (stop == false)
    {
        cout << "enter thy name:" << "\n>";

        cin >> ptr -> name;

        cout << ptr -> name << "\n";
    }



    delete[ ] ptr;

    cout << endl;
    return 0;
}

void set_student(string name, int id, float grade_avg)
{

}
