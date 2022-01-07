///https://www.beecrowd.com.br/judge/en/problems/view/2761

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int A;
    float B;
    char C;
    string D;
    cin>>A>>B>>C;
    cin.ignore();
    getline(cin, D);
    cout<<A<<fixed<<B<<C<<D<<endl;
    cout<<A<<"\t"<<fixed<<B<<"\t"<<C<<"\t"<<D<<endl;
    cout<<setw(10)<<A<<setw(10)<<fixed<<B<<setw(10)<<C<<setw(10)<<D<<endl;
    return 0;
}
