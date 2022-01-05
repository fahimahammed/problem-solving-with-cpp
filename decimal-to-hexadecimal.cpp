#include<iostream>
using namespace std;

int main()
{
    int dec, i;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hexNum = "";

    cout << "Enter a decimal number: ";

    cin >> dec;

    while(dec > 0){
        i = dec % 16;
        hexNum = hex[i] + hexNum;
        dec = dec/16;
    }

    cout << "\nHexadecimal number is: " << hexNum << "\n";
}
