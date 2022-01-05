#include<iostream>
using namespace std;

int main()
{
    int dec, bin[100], i;
    cout << "Enter a decimal number: ";

    cin >> dec;

    for(i=0; dec > 0; i++){
        bin[i] = dec%2;
        dec = dec/2;
    }

    cout << "\nBinary number is: ";
    for(i=i-1; i>=0; i--){
        cout << bin[i];
    }
    return 0;
}
