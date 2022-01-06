#include<iostream>
using namespace std;

int main()
{
    int i, j;
    for(i=1; i<=7; i++){
        for(j=1; j<=39; j++){
            if((i==1) || (i==7)){
                cout<<"-";
            }
            else{
                if((j==1)||(j==39)){
                    cout <<"|";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
