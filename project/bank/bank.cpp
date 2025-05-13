#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class bank
{

public:

    bool isBanned() { return banStatus; }
    void Ban() { banStatus = 1; }
    void unBan() { banStatus = 0; }


    bool checkPassword()
    {
        int enteredPin = 0;
        cout << "enter thy password:\n>";
        cin >> enteredPin;
        cin.ignore();

        if (enteredPin != pin)
            return 0;

        // password is correct
        return 1;
    }
    void deposit( long int amount)
    {
        if ( isBanned() )
        {
            cout << "account not accessible" << "\n";
            return; }

        if (checkPassword())
            balance += amount;


    }


    void withdraw( long int amount)
    {
        if ( isBanned() )
        {
            cout << "account not accessible" << "\n";
            return; }

        if (checkPassword())
            balance -= amount;
    }


    int getBalance() { return balance; }

    int randomizeID()
    {
        srand(time(0));
        long int ID = rand();

        if( this->ID == ID )
            return randomizeID();
        return ID;
    }

    int getID() { return ID; }
    string getName() { return ( firstName +" "+ lastName ); }


    //constructor
    bank(string fname, string lname, int password) : ID(randomizeID()), balance(100000), pin(password)
    {
        firstName = fname;
        lastName = lname;
    }

private:
    bool banStatus = 0;
    int ID;
    long int balance;
    int pin=0;
    string firstName, lastName;
};

int main()
{
    bank account("shahryar", "baba", 2020);
    account.deposit(50000);
    account.withdraw(25000);

    cout << "balance: " << account.getBalance() << "\n"
        << "ban status: " << account.isBanned() << "\n";

    // set ban status to 1 from 0
    account.Ban();
    cout << "ban status: " << account.isBanned() << "\n";

    cout << "id is: " << account.getID() << "\n";
    cout << "name is: " << account.getName() << "\n";

    cout << "\n";
    return 0;
}
