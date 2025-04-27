#include <iostream>

using namespace std;

class Car {
    string brand;
    string model;
    int year;
public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayinfo() {
        cout << "Brand: " << brand
             << ", Model: " << model
             << ", Year: " << year << "\n";
    }
};

int main()
{
    Car car1("Toyota", "Corolla", 2020);
    car1.displayinfo();

    cout << "\n";
    return 0;
}

