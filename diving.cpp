#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    while(n--){
        string name;
        float a[7], sum=0.00, deg;
        cin >> name;
        cin >> deg;
        for(i=0; i<7; i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+7);
        sum = sum-a[0];
        sum = sum-a[6];
        sum = sum*deg;
        cout << name <<" ";
        printf("%0.2f\n",sum);
    }
    return 0;
}
