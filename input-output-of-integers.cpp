#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int A, B, C;
    cin>>A>>B>>C;
    cout << "A = "<<A<<", B = "<<B<<", C = "<<C<<"\n";
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    return 0;
}
