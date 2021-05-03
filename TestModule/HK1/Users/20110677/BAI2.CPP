#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>

unsigned long doi16sang10s1(char s1[]);
unsigned long doi16sang10s2(char s2[]);
using namespace std;

void main()
{
	char s1[100], s2[100];
	gets(s1); gets(s2);
	unsigned long a=doi16sang10s1(s1);
	unsigned long b=doi16sang10s2(s2);
	unsigned long kq=a+b;
	cout<< kq;
}

unsigned long doi16sang10s1(char s1[])
{
	unsigned long kq=0;
	int l=strlen(s1);
	for(int i=0; i<l; i++)
		if(s1[i]>='0' && s1[i]<=9)
			kq=kq+(s1[i]-'0')*pow(16,i);
		else 
			kq=kq+(s1[i]-'A'+11)*pow(16,i);
	return kq;
}
unsigned long doi16sang10s2(char s2[])
{
	unsigned long kq;;
	int l=strlen(s2);
	for(int i=0; i<l; i++)
		if(s2[i]>='0' && s2[i]<=9)
			kq=kq+(s2[i]-'0')*pow(16,i);
		else 
			kq=kq+(s2[i]-'A'+11)*pow(16,i);
	return kq;
}