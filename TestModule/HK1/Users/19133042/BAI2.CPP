#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap(char s[]);
void xuat(long x);
long HexToDec(char s[]);
void main()
{
	char s1[50];
	char s2[50];
	nhap(s1);
	nhap(s2);
	long kq = HexToDec(s1) + HexToDec(s2) ;
	xuat(kq);
}
long HexToDec(char s[])
{
	long kq = 0 ;
	int len  = strlen(s);
	s = strrev(s);
	for(int i = 0 ; i < len ; i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
			kq = kq + (s[i] - '0')*(long)pow(16,i);
		else
			kq = kq + (s[i] - 55)*(long)pow(16,i);
	}
	return kq;
}
void xuat(long x)
{
	printf("%ld",x);
}
void nhap(char s[])
{
	gets(s);
}