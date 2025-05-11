// Multilevel inheritnace

#include <iostream>

using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "this be a vehicle" << "\n";
    }
};


class FourWheeler : public Vehicle
{
public:
    FourWheeler()
    {
        cout << "this be a four WHILER" << "\n";
    }
};


class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "this be a Car" << "\n";
    }
};


int main()
{
    Car obj;

    cout << "\n";
    return 0;
}
