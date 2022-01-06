#include<iostream>
#include<string>
#include<string.h>
#include<strings.h>
using namespace std;

int main()
{
    int n;
    string question;
    cin>>n;
    for(int i=0; i<=n; i++){

        getline(cin, question);
        if(i!=0){
            cout << "I am Toorg!\n";
        }
    }
    return 0;
}
