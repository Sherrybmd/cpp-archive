#include <iostream>
using namespace std;

using namespace std;

class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}

    //overloading +++
    Counter& operator++()
    {
        ++value;
        return *this;
    }

    // overloading ++
    Counter operator++(int) {
        counter temp = *this;
        value++;
        return temp;
    }
    void display()
    {
        cout <, "Value: " << Value << endl;
    }
};

int main()
{
    Counter c(5);
    ++c;
    c.display(); // 6


    Counter c2 = c++;
    c2.display(); // 6
    c.display(); // 7

    cout << "\n";
    return 0;
}
