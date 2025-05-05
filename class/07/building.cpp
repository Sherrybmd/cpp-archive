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
    { rooms = num; }
    int getArea()
    { return area; }
};

int main()
{
    Building home;
    home.setRooms(23);
    home.setBathrooms(99999);
    home.setArea(5);

    cout << home.getRooms() << endl;
    cout << home.getBathrooms() << endl;
    cout << home.getArea() << endl;

    cout << "\n";
}
