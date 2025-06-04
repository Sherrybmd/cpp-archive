#include <iostream>
#include <sched.h>
#include <string>
using namespace std;

class Books
{
private:
    unsigned int price;
    unsigned int id;
    string authorName;
public:
    void setPrice(unsigned int price);

    friend unsigned int getPrice(Books& book)
    {
        return book.price;
    }

};

void Books::setPrice(unsigned int price) {
    this->price = price;
}

int main()
{
    Books book;

    book.setPrice(500);
    cout << getPrice(book);

    cout << "\n";
    return 0;
}
