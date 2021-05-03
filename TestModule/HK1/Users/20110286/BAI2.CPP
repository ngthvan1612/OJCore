#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void nhap(string &s);
int stoi(string h);
int gt(char k);
int htod(string a);

int main()
{
	string a,b;
	nhap(a);
	//nhap(b);
	cout<<htod(a);
	return 0;
}

void nhap(string &s)
{
	getline(cin,s);
}

int gt(char k)
{
	if (k=='A') return 10;
	if (k=='B') return 11;
	if (k=='C') return 12;
	if (k=='D') return 13;
	if (k=='E') return 14;
	if (k=='F') return 15;
	return int(k)-int('0');
}

int stoi(string h)
{
	int kq=0;
	for (int i=0; i<h.length();i++)
	{
		kq=kq+gt(h[i])*pow(10,h.length()-i);
	}
	return kq/10;
}

int htod(string a)
{
	int ha=0;
	for (int i=0; i<a.length(); i++)
	{
		ha=ha+gt(a[i])*pow(10,i);
	}
	return ha;
}
