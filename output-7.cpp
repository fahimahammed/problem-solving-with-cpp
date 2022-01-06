///https://www.beecrowd.com.br/judge/en/problems/view/2753
#include<iostream>
using namespace std;

int main()
{
    int i, value=97;
    for(i=1; i<=26; i++){
        cout <<value<<" e ";
        printf("%c\n",value);
        value++;
    }
    return 0;
}
