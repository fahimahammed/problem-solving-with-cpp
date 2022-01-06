#include<iostream>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    if(text.length()<=140)
        cout << "TWEET\n";
    else cout << "MUTE\n";
    return 0;
}
