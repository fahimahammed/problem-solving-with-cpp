///https://www.beecrowd.com.br/judge/en/problems/view/2791
#include<iostream>
using namespace std;

int main()
{
    int c[4];
    for(int i=0; i<4; i++){
        cin>>c[i];
    }
    for(int i=0; i<4; i++){
        if(c[i] == 1){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
