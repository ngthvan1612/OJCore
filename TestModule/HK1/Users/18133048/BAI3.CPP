#include<iostream>
#include<string.h>
#define max 1000
using namespace std;

void nhap(char s[]);
int tinhTong(char s[]);
void xuat(int a);
int main()
{
	char s[max];
	nhap(s);
	int kq=tinhTong(s);
	xuat(kq);
	return 0;
}
void nhap(char s[])
{
	cin.getline(s, max);
}
int tinhTong(char s[])
{
	int tong=0;
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			tong+=s[i]-48;
		}
	}
	return tong;
}
void xuat(int a)
{
	cout<<a;
}