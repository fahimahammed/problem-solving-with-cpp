///https://www.beecrowd.com.br/judge/en/problems/view/2786
#include<iostream>
using namespace std;

int main()
{
    int l, c, fullSlab=0,halfSlab=0;
    cin>>l>>c;
    fullSlab = (l*c) + ((l-1)*(c-1));
    halfSlab = (2*(l-1))+(2*(c-1));
    cout<<fullSlab<<endl<<halfSlab<<endl;
    return 0;
}
