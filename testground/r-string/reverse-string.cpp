#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text, reverse_text, temp;
    int text_length = 0;

    reverse_text = "";

    cout << "enter a text to reverse: " << "\n";
    getline(cin, text);

    text_length = text.length();
    cout << "length: " << text_length << "\n";

    // append all characters from last char till
    // first char to our reverse_text string

    for( int i = 0; i < text_length; i++)
    {
        temp = text[(text_length - 1) - i];
        reverse_text.append(temp);
    }

    reverse_text.append(" c++");

    cout << "reversed text: " <<  reverse_text << "\n";

    cout << "\n";
    return 0;
}
