#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<math.h>
using namespace std;
void Hoanvi(char &x,char &y)
{
	char tam=x;
	x=y;
	y=tam;
}
void STR(string &s)
{
	long n=s.length();
	for (int i=0;i<n/2;i++)
	{
		Hoanvi(s[i],s[n-1-i]);
	}
}
long doi(string s)
{	long l;
	STR(s);
	long tong =0;
	for(int i=0;i<s.length();i++)
	{
		if ('A'<=s[i]&& s[i]<'Z')
			tong += (s[i]-55) * pow(16, i);
		if	('0'<=s[i]&&s[i]<='9')
			tong += (s[i]-'0') * pow(16, i);
	}
	return tong;
}
int main()
{	string a,b;
	cin>>a;
	cin>>b;
	long c=doi(a);
	long d=doi(b);
	cout<<c+d;
	return 0;
}

