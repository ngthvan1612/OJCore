#include <iostream>
#include <string>
#include <cmath>
#include <string.h>
using namespace std;
void Hoanvi(char &x,char &y)
{
	char tam = x;
	x = y;
	y = tam;
}
void Strlwr(char s[])
{
	int n = strlen(s);
	for(int i = 0;i < n/2;i++)
		Hoanvi(s[i],s[n-1-i]);
}
int XuLy(char s[])
{
	int tong = 0;
	for(int i = 0;i < strlen(s);i++)
	{
		if('A' <= s[i] && s[i] < 'Z')
			tong += (s[i] - 55)*pow(16,i);
		if('0' <= s[i] && s[i] <= '9')
			tong += (s[i] - '0')*pow(16,i);
	}
	return tong;
}
int main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	Strlwr(a);
	Strlwr(b);
	cout<<XuLy(a)+XuLy(b);
	return 0;
}
