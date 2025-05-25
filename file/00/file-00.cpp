#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    float score;
    string name;

    ofstream outputFile("output.dat", ios::out);

    if( !outputFile)
    {
        cerr << "something went wrong during opening of file" << "\n";
        exit(1);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "enter name" << "\n";
        cin >> name;

        cout << "enter score: " << '\n';
        cin >> score;

        outputFile << name << " " << score << '\n';
    }
    outputFile.close();

    cout << "\n";
    return 0;
}
