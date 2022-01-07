///https://www.beecrowd.com.br/judge/en/problems/view/2764
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[10];
    string date[3];
    int i=0;
    cin.getline(str, 10);

    char *ptr;
    ptr = strtok(str, "/");
    while (ptr != NULL)
    {
        date[i] = ptr;
        i++;
        ptr = strtok (NULL, "/");
    }

    cout<<date[1]<<"/"<<date[0]<<"/"<<date[2]<<endl;
    cout<<date[2]<<"/"<<date[1]<<"/"<<date[0]<<endl;
    cout<<date[0]<<"-"<<date[1]<<"-"<<date[2]<<endl;
    return 0;
}
