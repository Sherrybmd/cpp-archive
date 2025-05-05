#include <cstddef>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    //char let;
    string first, second, third;
    first = "first";
    second = "second";
    third = "third";


//    size_t pos = first.find("i");
//    cout << pos << "\n";

//    string subfirst = first.substr(pos, 3);
//    cout << subfirst << "\n";


//    cout << "resize !" << "\n";
//    first.resize(5);
//    cout << first << endl;


    string str;
    cout << "enter string to find in 'second'" << "\n>";
    cin >> str;

//    size_t found = second.find(str);
//    int finale = found + (str.length() - 1);
//    if (found != string::npos)
//    {
//        cout << "found " << str << " at " << found << " till " << finale << "\n";
//        cout << "replacing with 'cock'" << "\n";
//        second = second.replace(found, finale,  "cock");
//    }
//    else
//       cout << "ERR, not found..." << "\n";
    //out

    cout << second << "\n";


    //first.swap(second);
    //cout << "now first is: " << first << "\n" ;
    //cout << "now second is: " << second << "\n";


    // cout << "enter letter to find at second: " << "\n";
//     cin >> let;
    // size_t position = first.find_first_of(let);
    // if (position != string::npos)
    //     cout << "first " << let << " found at " << position << " position" << "\n";

    cout << "\n";
    return 0;
}
