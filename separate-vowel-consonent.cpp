#include<iostream>
#include<stdbool.h>
#include<cctype>
using namespace std;

bool isVowel(char e)
{
    e = tolower(e);
    if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u'){
        return true;
    }
    return false;
}

int main()
{
    string text;
    char vowel[100], consonent[100];
    int m=0, n=0;
    cout << "Enter a string: ";
    getline(cin, text);

    for(int i=0; i< text.length(); i++){
        if( isalpha(text[i]) && isVowel(text[i])){
            vowel[m] = text[i];
            m++;
        }
        else if(isalpha(text[i]) && !isVowel(text[i])){
            consonent[n] = text[i];
            n++;
        }
    }
    cout << vowel << "\n";
    cout << consonent << "\n";
    return 0;
}
