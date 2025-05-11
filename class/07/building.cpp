#include <iostream>

using namespace std;

class Building
{

private:
    int rooms;
    int bathrooms;
    int area;

public:
    void setRooms(int num)
    { rooms = num; }
    int getRooms()
    { return rooms; }

    void setBathrooms(int num)
    { bathrooms = num; }
    int getBathrooms()
    { return bathrooms; }

    void setArea(int num)
    { area = num; }
    int getArea()
    { return area; }
};

int main()
{
    Building home;
    home.setRooms(3);

    home.setBathrooms(3);

    home.setArea(25);

    cout << "rooms \n> ";
    cout << home.getRooms() << endl;

    cout << "bathrooms \n> ";
    cout << home.getBathrooms() << endl;

    cout << "area \n> ";
    cout << home.getArea() << endl;

    cout << "\n";
}
