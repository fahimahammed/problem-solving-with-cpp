#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    float A, B;
    double C, D;
    cin>>A>>B;
    cin>>C>>D;
    printf("A = %f, B = %f\n", A, B);
    printf("C = %f, D = %f\n", C, D);

    printf("A = %0.1f, B = %0.1f\n", A, B);
    printf("C = %0.1f, D = %0.1f\n", C, D);

    printf("A = %0.2f, B = %0.2f\n", A, B);
    printf("C = %0.2f, D = %0.2f\n", C, D);

    printf("A = %0.3f, B = %0.3f\n", A, B);
    printf("C = %0.3f, D = %0.3f\n", C, D);

    printf("A = %0.3E, B = %0.3E\n", A, B);
    printf("C = %0.3E, D = %0.3E\n", C, D);

    printf("A = %.0f, B = %.0f\n", A, B);
    printf("C = %.0f, D = %.0f\n", C, D);

    return 0;
}
