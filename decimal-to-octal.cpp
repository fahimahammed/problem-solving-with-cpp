#include<iostream>
using namespace std;

int main()
{
    int dec, oct[100], i;
    cout << "Enter a decimal number: ";
    cin >> dec;

    for(i=0; dec > 0; i++){
        oct[i] = dec%8;
        dec = dec/8;
    }

    cout << "\nOctal number is: ";
    for(i=i-1; i>=0; i--){
        cout << oct[i];
    }
    return 0;
}
