#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char s1[],char s2[]);
unsigned long doisang10(char s[]);
unsigned long tinhtong(char s1[], char s2[]);
void xuat(unsigned long s);
void main()
{
	char s1[100],s2[100];
	nhap(s1,s2);
	unsigned long kq=tinhtong(s1,s2);
	xuat(kq);
}
void nhap(char s1[],char s2[])
{
	gets(s1);
	gets(s2);
}
unsigned long doisang10(char s[])
{
	strrev(s);
	int l=strlen(s);
	unsigned long kq1=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			kq1=kq1+(s[i]-'0')*pow(16,i);
		else
		{
			kq1=kq1+(s[i]-'A'+10)*pow(16,i);
		}
	}
	return kq1;
}
unsigned long tinhtong(char s1[], char s2[])
{
	unsigned long s;
	s=doisang10(s1)+doisang10(s2);
	return s;
}
void xuat(unsigned long s)
{
	printf("%d",s);
}