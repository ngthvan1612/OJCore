#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void Hoanvi(char &x, char &y);
void STRLWR(string &s);
int xuly(string s);
int Hammu(int coso, int somu);

void Hoanvi(char &x, char &y)
{
	char tam = x;
	x = y;
	y = tam;
}
void STRLWR(string &s)
{
	int n = s.length();
	for(int i = 0; i < n;i++)
	{
		Hoanvi(s[i],s[n-1-i]);

	}
}
int xuly(string s)
{
	int tong = 0;
	int n = s.length();
	for(int i = 0; i < n;i++)
	{
		if('A' <= s[i] && s[i] <= 'F')
			tong += (s[i] -55)*pow(16,i);
		if('0'<= s[i] && s[i] <='9')
			tong += (s[i]-'0')*pow(16,i);
	}
	return tong;
}
void main()
{
	string A,B;
	cin >> A>> B;
	cout << xuly(A) + xuly(B);
}
