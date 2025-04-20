
#include <iostream>
#define SIZE 100

using namespace std;

class stack
{
    int stck[SIZE];
    int tos;
public:
    void init();
    int pop();
    void push(int i);

};

void stack :: init()
{
    tos = 0;
}

void stack::push(int i)
{
    if (tos == SIZE) {
        cout << "stack is full.";
        return ;
    }
    stck[tos] = i;
    tos++;
}

int stack :: pop()
{
    if(tos == 0)
    {
        cout << "stack underflow";
        return -1;
    }
    else{
        tos--;
        return stck[tos];
    }
}

int main()
{
    stack st1, st2;
    st1.init();
    st2.init();
    st1.push(1);
    st2.push(2);
    st1.push(3);
    st2.push(4);


    cout << st1.pop() << endl;
    cout << st1.pop() << endl;
    cout << st2.pop() << endl;
    cout << st2.pop() << endl;

    system("pause");
    return 0;
}
