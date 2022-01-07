///https://www.beecrowd.com.br/judge/en/problems/view/2766
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string names[10];
    for(int i=0; i<10; i++){
        cin>>names[i];
    }
    cout<<names[2]<<endl<<names[6]<<endl<<names[8]<<endl;
    return 0;
}
