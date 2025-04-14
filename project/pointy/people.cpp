#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

struct students {
    string name;
    int id;
    float grade_avg;
}x,*ptr;

void set_student(string *, int *, float *);

int main()
{
    students *ptr = new students;  //weewoo weewoo !!

    cout << ptr << "\n";

    bool stop = false;
    while (stop == false)
    {
        cout << "enter thy name:" << "\n>";
        cin >> ptr -> name;

        cout << "enter thy number (please):" << "\n>";
        cin >> ptr -> id;

        cout << "enter thy grade:" << "\n>";
        cin >> ptr -> grade_avg;


        stop = true;
    }

    cout << "your name is: " << ptr -> name << "\n"
         << "your id is: " << ptr -> id << "\n"
         << "your grade is: " << ptr -> grade_avg << "\n"
         << endl;

    cout << ptr << "\n";

    delete ptr;

    cout << endl;
    return 0;
}

void set_student(string name, int id, float grade_avg)
{
    return;
}
