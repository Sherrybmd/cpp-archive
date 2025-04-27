#include <iostream>
using namespace std;

class BankAccount {

private:
    int balance;

public:

    BankAccount(int initial_balance)
    {
        balance = initial_balance;
    }


    void deposit(int amount)
    {

        if (amount > 0)
        {
            balance -= amount;
        }
    }


    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
    }


    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account(10000);
    account.deposit(500);
    account.withdraw(200);

    cout << "Balance: " << account.getBalance() << "\n";


    cout << "\n";
    return 0;
}
