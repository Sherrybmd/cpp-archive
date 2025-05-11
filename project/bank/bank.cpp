#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class bank
{

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

    bank(string fname, string lname, unsigned int ID) : ID(0), balance(100000)
    {
        this->ID = ID;
        this->firstName = fname;
        this->lastName = lname;

        if( ID ==0 )
            cout << "id of 0 !" << "\n";
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


