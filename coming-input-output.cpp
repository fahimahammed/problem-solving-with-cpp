///https://www.beecrowd.com.br/judge/en/problems/view/2765
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    for(int i=0; i<text.length(); i++){
        if(text[i] == ','){
            cout<<endl;
        }
        else cout<<text[i];
    }
    cout<<endl;
    return 0;
}
