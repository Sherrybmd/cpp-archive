#include <stdlib.h>
#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

struct students {
    string name;
    int id;
    float grade_avg;
};

void set_student();
//void save_file();
//void read_file();

//main
int main()
{
    set_student();

    cout << "\n\n";
    return 0;
}


void set_student()
{

    int rep = 0;
    int *prep;
    prep = &rep;

    students *ptr = new students[40];   // max is 40 students, not sure how to
                                        // increase without vector

    bool stop = false;
    while (stop == false)
    {
        system("clear");

        cout << "enter thy name:" << "\n>";
        cin >> ptr[*prep].name;

        cout << "enter thy number (please):" << "\n>";
        cin >> ptr[*prep].id;

        cout << "enter thy grade:" << "\n>";
        cin >> ptr[*prep].grade_avg;

        ++*prep;

        system("clear");
        char choice;
        cout << "continue?: y/n" << "\n";
        cin >> choice;


        if (choice == 'n' || choice == 'N')
        {
            stop = true;

            system("clear");
            cout << "proccess stopped" << "\n";
        }

    }

    cout << "\n" << "OUTPUT: " << "\n";

    cout << "===================" << "\n";

    for(int i=0; i<*prep; i++)
    {
        //TODO: add write to file
        cout << "------------------" << "\n"
             << i+1 << "\n"
             << "> name: " << ptr[i].name << "\n"
             << "> id: " << ptr[i].id << "\n"
             << "> avg grade: " << ptr[i].grade_avg << "\n";
    }
    cout << "===================" << "\n";

//free mem
    delete [] ptr;
    return;
}
