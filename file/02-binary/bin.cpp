#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float var;
    ifstream inputFile("yoyo.dat", ios::in | ios::binary);

    if (!inputFile)
    {
        ofstream outputFile("yoyo.dat", ios::out);
        outputFile << "poggers" << "\n";
    }

    inputFile.read(reinterpret_cast<char *>(&var), sizeof(float));

    cout << "\n";
    return 0;
}
