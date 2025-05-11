#include <any>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class bank
{
    class transactions
    {
    protected:
        int log[20];
        int* logptr;
        transactions() : log(), logptr(&log[0])
        {

        }
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
