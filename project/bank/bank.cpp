#include <any>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class bank
{
public:
    const string currency = " Rial";

    void Ban(bool ban = 1) { this->banStatus = ban; }
    void unBan() { Ban(0); }
    bool isBanned() { return banStatus; }
    void accStat() { }


    void addBalance() { }
    int getBalance() { return }


private:
    bool banStatus = 0;
    unsigned int id;

    long long unsigned int balance;
    string firstName, lastName;
};

int main()
{

    cout << "\n";
    return 0;
}
