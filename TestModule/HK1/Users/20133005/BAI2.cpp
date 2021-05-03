#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
char tong(char a[], char b[], char c[])
long doithapphan(char c[]);
void nhap(char a[],char b[]);
void xuat(long kq);
void main()
{
	char a[30];
	char b[30];
	nhap(a,b);
	long kq = doithapphan(c);
	xuat kq;
}
char tong(char a[], char b[],char c[])
{
	c[60] = a[30] + b[30];
	return c[60];
}
long doithapphan(char c[])
{
	long kq = 0;
	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
			kq = kq + (c[i] - '0') * (long)pow(16, len - i - 1);
	}
	else
	kq= kq + (c[i] - '55') * (long)pow(16, len - i - 1);
	return kq;
}
void nhap(char A[], char B[])
{
	cin.getline(A,30);
	cin.getline(B, 30);
	
}
void xuat(long kq)
{
	cout << kq;
}