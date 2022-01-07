#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char A, B, C;
    cin>>A>>B>>C;

    printf("A = %c, B = %c, C = %c\n",A,B,C);
    printf("A = %c, B = %c, C = %c\n",B,C,A);
    printf("A = %c, B = %c, C = %c\n",C,A,B);
    return 0;
}
