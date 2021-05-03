#include "iostream"
#include "string.h"
#include "stdio.h"
#include "cmath"
void nhap(char s[]);
void xuat(long int x);
long int doi(char s[]);
void main()
{
	char a[11],b[11];
	nhap(a);
	nhap(b);
	long int x=doi(a);
	long int y=doi(b);
	long int z=x+y;
	xuat(z);
	system("pause");
}
void nhap(char s[])
{
	gets(s);
}
void xuat(long int x)
{
	printf("%ld",x);
}
long int doi(char s[])
{
	long int kq=0;
	int l=strlen(s);
	s=strrev(s);
	for (int i=0;i<l;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			kq+=(s[i]-'0')*(double)pow(16,i);
		}
		else kq+=(s[i]-55)*(double)pow(16,i);
	}
	return kq;
}

