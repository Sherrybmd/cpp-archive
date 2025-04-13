#include <iostream>
using namespace std;
int main() {

    int n;
    float *ptr, tot = 0.0;
    cout << "enter a value for n = " << endl;
    cin >> n;
    ptr = new float [0];
    for (int j=0; j<n; ++j)
    {
        cin >> *(ptr + j);
        cout << "\n";
    }

    for (int j=0; j<=n-1; ++j)
        tot += *(ptr + j);
    cout << tot;


    delete[ ] ptr;

    cout << endl;
    return 0;
}
