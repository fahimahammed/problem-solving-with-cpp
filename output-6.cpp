///https://www.beecrowd.com.br/judge/en/problems/view/2752
#include<iostream>
#include<string>
#include<string.h>
#include<strings.h>
using namespace std;


int main()
{
    string str;
	str="AMO FAZER EXERCICIO NO URI";
	printf("<% s>\n",str.c_str());
	printf("<% 30s>\n",str.c_str());
	printf("<% .20s>\n",str.c_str());
	printf("<% -20s>\n",str.c_str());
	printf("<% -30s>\n",str.c_str());
	printf("<% .30s>\n",str.c_str());
	printf("<% 30.20s>\n",str.c_str());
	printf("<% -30.20s>\n",str.c_str());
	return 0;
}
