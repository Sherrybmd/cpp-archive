#include <iostream>
#include <stdexcept>
using namespace std;
class Account {
private:
    double balance;
public:
    Account( double b) : balance(b) {}

    void deposit(double amount) {
        if (amount < 0) {
            throw invalid_argument("Deposit val negative");
        }
        balance += amount;
    }

    void withdraw( double amount ) {
        if ( amount < 0) {
            throw invalid_argument("Withdraw is negative");
        }
        if ( amount > balance )
            throw invalid_argument("nice try retard");

        balance -= amount;
    }

};
int main()
{
    try{
        Account acc(2000);
        acc.withdraw(5000);
    }
    catch(const invalid_argument& e){
        cout << e.what() << '\n';
    }
    catch(const runtime_error& re){
        cout << re.what() << '\n';
    }


    try{
        Account acc(2000);
        acc.withdraw(-500);
    }
    catch(const invalid_argument& e){
        cout << e.what() << '\n';
    }
    catch(const runtime_error& re){
        cout << re.what() << '\n';
    }


    try{
        Account acc(2000);
        acc.deposit(-500);
    }
    catch(const invalid_argument& e){
        cout << e.what() << '\n';
    }
    catch(const runtime_error& re){
        cout << re.what() << '\n';
    }


    cout << "\n";
    return 0;
}
