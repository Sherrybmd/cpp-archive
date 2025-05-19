#include <iostream>

using namespace std;

class User
{
public:
    virtual void showMessage()
    {
        cout << "mildly brown, normal access granted (U)" << "\n";
    }
};


class Admin : public User {
public:
    void showMessage() override {
        cout << "white skin tone, full privilage accessed (A)" << "\n";
    }
};

class Guest : public User
{
public:
    void showMessage() override {
        cout << "color too dark, limited access (G)" << "\n";
    }
};

void greet(User* user) {
    user -> showMessage();
}

int main()
{
    User usr;
    Admin adm;
    Guest gue;

    greet(&usr); // user
    greet(&adm); // admin
    greet(&gue); // guest

    cout << "\n";
    return 0;
}

