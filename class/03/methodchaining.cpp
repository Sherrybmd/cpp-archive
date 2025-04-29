#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person* setName(string name) {
        this->name = name;
        return this; //return pointer to object

    }

    Person* setAge(int age) {
        this->age = age;
        return this; // return pointer to object itself
    }

    // these return the first address of object

    void showInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


int main()
{
    Person p;
    p.setName("Ali")->setAge(25)->showInfo(); // chaining methods

    return 0;
}
