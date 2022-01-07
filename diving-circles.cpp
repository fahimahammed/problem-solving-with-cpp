///https://www.beecrowd.com.br/judge/en/problems/view/2802
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n;
    long long int r = 0;

    cin >> n;

    r = 1 + (n * (n-1)) / 2 + (n * (n-1) * (n-2) * (n-3)) / 24;

    cout << r << endl;

    return 0;
}
