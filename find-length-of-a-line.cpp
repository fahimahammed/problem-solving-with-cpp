#include<iostream>

using namespace std;

int main()
{
    string text;
    cout << "Enter a string: ";
    getline (cin, text);
    cout << "Length: " << text.length();

    return 0;
}
