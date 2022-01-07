///https://www.beecrowd.com.br/judge/en/problems/view/2763
#include <iostream>
#include<cstring>
using namespace std;

int main() {
	string date;
	int i;
	getline(cin, date);
	for(i=0; i<date.length(); i++){
        if(date[i]>='0' && date[i]<='9')
            cout<<date[i];
        else cout<<endl;
	}
	cout<<endl;
	return 0;
}

