#include <iostream>

using std::cout, std::cin, std::endl, std::string;

int main() {

    int n;
    int tot = 0;
    int *ptx;

    cout << "enter the n:" << "\n>";
    cin >> n;

    ptx = new int [n];

    for (int i=0; i<n; i++)
    {
        cin >>  *(ptx+i);
        cout << "\n";
        tot += *(ptx+i);
    }

    cout << tot;

    delete[ ] ptx;

    cout << endl;
    return 0;
}
