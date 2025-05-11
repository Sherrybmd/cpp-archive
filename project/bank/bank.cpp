#include <any>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class bank
{
    class transactions { }; // failed attempt to make a log system om
    class accounts
    {
    public:
        int ids[20];

    };

public:
    const string currency = " Rial";

    bool isBanned();
    void Ban();
    void unBan();
    void accStat();


    bool validateTransaction();
    void deposit(long long unsigned int amount);
    void withdraw(long long unsigned int amount);
    void transfer(unsigned int targetID);
    int getBalance(unsigned int yourID);

    bank(unsigned int ID) : ID(0), balance(100000)
    {
        this->ID = ID;

    }
private:
    bool banStatus = 0;
    unsigned int ID;

    long long unsigned int balance;
    string firstName, lastName;
};

int main()
{

    cout << "\n";
    return 0;
}


