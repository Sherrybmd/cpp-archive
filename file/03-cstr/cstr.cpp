#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    char *buf;
    string str1 = "ali";
    string str2 = "ahmad";
    string str3 = "mohamad";
    int size1 = (str1.size());
    int size2 = (str2.size());
    int size3 = (str3.size());

    ofstream output("output.txt", ios::out | ios::binary);
    if (!output)
        cerr << "cant open file!" << "\n";


    HALF FINISHED
    cout << "\n";
    return 0;
}

