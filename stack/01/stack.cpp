#include <iostream>
#define SIZE 100
using namespace std;

class stack {
    private:
        int stck[SIZE];
        int top;

    public:
        void init();
        void push(int i);
        int pop();

};

void stack :: push(int i)
{
    if(top == SIZE)
    {
        cout << "stack is full.";
    }
    else
{
        stck[top]=i;
        top++;
    }
}


int main()
{

    cout << std::endl;
    return 0;
}
