// used: 1_node, 2_ structure, 3_ template, 4_ basic pointer usage
#include <iostream>

using std::cout,std::cin,std::endl,std::string;


template <typename T>
struct node
{
    using value_type = T;
    T data;
    node *next;
    node *prev;

};

int main()
{
    node<int> data1, data2, data3;

    data1.data = 5;
    data2.data = 6;
    data3.data = 7;

    data1.next = &data2;
    data1.prev = nullptr;

    data2.next = &data3;
    data2.prev = &data1;

    data3.next = nullptr;
    data3.prev = &data2;


    node<int> *current = &data1;
    int counter = 1;
    while(current != nullptr)
    {
        cout << "data " << counter << ": " << current->data << "\n";
        current = current->next;
        counter++;

    }


    cout << endl;
    return 0;
}
