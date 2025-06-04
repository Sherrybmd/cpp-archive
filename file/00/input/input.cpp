#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    float score;
    string name;

    ifstream inputFile("output.dat", ios::in);


    if( !inputFile)
    {
        cerr << "something went wrong during opening of file" << "\n";
        exit(1);
    }

    for (int i = 0; i < 3; i++)
    {
        inputFile >> name;

        inputFile >> score;

        cout << "score: " << score << " name: " << name << "\n";
    }
    inputFile.close();
    cout << "\n";
    return 0;
}
