#include<iostream>
#include<cmath>
#include<string>
#include<string.h>
using namespace std;

long hexToDec(string s);
void tinhTong(string a, string b);

int main()
{
	string a,b;
	cin >> a >> b;
	tinhTong(a,b);
	return 0;
}
long hexToDec(string s)
{
	long kq =0;
	int len = s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i] >= '0' && s[i] <='9')
		{
			kq = kq + (s[i] - '0') * (long)pow(16, len-i-1);
		}
		else
			kq = kq + (s[i] -55) * (long)pow(16,len-i-1);
	}
	return kq;
}
void tinhTong(string a, string b)
{
	long sum =0;
	long x = hexToDec(a);
	long y = hexToDec(b);
	sum = x+y;
	cout << sum << endl;
}
