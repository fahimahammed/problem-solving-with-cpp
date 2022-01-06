#include<iostream>
using namespace std;

int main()
{
    int i, j=0, n, c, d=1;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    c = arr[0];

    for(j=0; j<n; j++){
        if(arr[j]<c){
            c = arr[j];
            d = j+1;
        }
    }
    cout << d << "\n";
    return 0;
}
