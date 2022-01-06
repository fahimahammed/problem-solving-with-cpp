#include<iostream>
using namespace std;

int main()
{
    int p, j1, j2, r, a, win;
    cin>>p;
    cin>>j1;
    cin>>j2;
    cin>>r;
    cin>>a;
    int sum=j1+j2;
    if((sum%2==0 && p==1) || (sum%2==1 && p==0))
        win = 1;
    else win = 2;
    if((r==1 && a==0) || (r==0 && a==1))
        win = 1;
    else if(r==1 && a==1)
        win=2;
    cout <<"Jogador "<<win<<" ganha!\n";
    return 0;
}
