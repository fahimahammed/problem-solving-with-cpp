///https://www.beecrowd.com.br/judge/en/problems/view/2760
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    string A, B, C;
    int i;
    getline(cin, A);
    getline(cin, B);
    getline(cin, C);
    cout<<A<<B<<C<<"\n";
    cout<<B<<C<<A<<"\n";
    cout<<C<<A<<B<<"\n";
    i=0;
    while(A[i] != '\0' && i<10){
        cout<<A[i];
        i++;
    }
    i=0;
    while(B[i] != '\0' && i<10){
        cout<<B[i];
        i++;
    }
    i=0;
    while(C[i] != '\0' && i<10){
        cout<<C[i];
        i++;
    }
    cout<<"\n";
    return 0;
}
