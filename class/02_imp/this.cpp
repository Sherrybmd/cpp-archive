#include <iostream>

using namespace std;

class Person
{
private:
    string name;

public:
    void setName(string name)
    {
        this->name = name; // variable of 'this'

    }

    void showName() {
        cout << "Name: " << name << endl;
    }

};


int main()
{
    Person p;
    p.setName("Ali");
    p.showName();


    return 0;
}
