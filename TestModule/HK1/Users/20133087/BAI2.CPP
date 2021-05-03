#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

int convert(char c)
{
	if ( c >= '0' && c <= '9' )
	{
		return c-48;
	}
	else if ( c == 'a' || c =='A')
	{
		return 10;
	}
	else if ( c == 'b' || c =='B')
	{
		return 11;
	}
	else if ( c == 'c' || c =='C')
	{
		return 12;
	}
	else if ( c == 'd' || c =='D')
	{
		return 13;
	}
	else if ( c == 'e' || c =='E')
	{
		return 14;
	}
	else if ( c == 'f' || c =='F')
	{
		return 15;
	}
}

long solve(string s)
{
	long res = 0;
	int k = 0;
	for (int i = s.size()-1; i >= 0 ; i--)
	{
		res = res + convert(s[i])*pow(16,k);
		k++;
	}
	return res;
}
int main()
{
	string a, b;
	cin >> a >> b;
	long num1 = solve(a);
	long num2 = solve(b);
	long kq = (long) num1 + num2;
	cout <<kq;
	return 0;
}