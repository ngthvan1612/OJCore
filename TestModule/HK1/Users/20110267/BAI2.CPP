#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap( char s[]);
int xuly (char s[]);
void tinhtong( char a[] ,char b[]);
void main()
{
	char a[100],b[100];
	nhap(a);
	nhap(b);
	tinhtong(a,b);
}
void nhap( char e[])
{
	gets(e);
}
int xuly(char s[])
{
	int d=0;
	int h;
	int len=strlen(s);
	for(int i=0; i<len; i++)
	{
		if(s[i]>= 'A' && s[i]<=' Z')
			h=s[i]-55;
		else if(s[i]>='a' && s[i]<='z')
			h=s[i]-32-55;
		else
			h=s[i]-48;
		int u=strlen(s)-i-2;
	 d= d + h * pow(16,u);
	}
	return d;
	}
void tinhtong( char a[] ,char b[])
{
	int a;
	int b;
	a=(xuly(a));
	b=(xuly(b));
	int t;
	t=a+b;
	printf("%d",t);
}
