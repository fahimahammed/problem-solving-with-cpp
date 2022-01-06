#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    int s, s1, b, b1, a, a1,i, n;
    double sumS=0.00, sumS1=0.00, sumB=0.00, sumB1=0.00, sumA=0.00, sumA1=0.00, ansS, ansB, ansA;
    string name;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> name;
        cin>>s>>b>>a;
        cin>>s1>>b1>>a1;
        sumS+=s; sumB+=b; sumA+=a;
        sumS1+=s1; sumB1+=b1; sumA1+=a1;
    }
    ansS=(sumS1/sumS)*100.00;
    ansB=(sumB1/sumB)*100.00;
    ansA=(sumA1/sumA)*100.00;
    printf("Pontos de Saque: %0.2lf %%.\n",ansS);
    printf("Pontos de Bloqueio: %0.2lf %%.\n",ansB);
    printf("Pontos de Ataque: %0.2lf %%.\n",ansA);
    return 0;
}
