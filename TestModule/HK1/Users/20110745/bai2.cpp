#include<stdio.h>
#include<math.h>
void nhap(char a[],char b[]);
void xuat(int x);
unsigned long doi(char a[],char b[]);
void main()
{
	char a[10];
	char b[10];
	nhap(a,b);
	unsigned long kq=doi(a,b);
	xuat(kq);
}
void nhap(char a[],char b[])
{
	gets(a);
	gets(b);
}
void xuat(int x)
{
	printf("%d",x);
}
unsigned long doi(char a[],char b[])
{
	strew(a,b);
	int n=strlen(a);
	int m=strlen(b);
	unsigned long kq=0;
	for(int i=0;i<n;i++)
		if(a[i]>='0'&&a[i]<='9')
			kq= kq+(a[i]-'0')*por(16,i);
		else
			kq=kq+(a[i]-'A'+10)*por(16,i);
			for(int i=0;i<m;i++)
		if(b[i]>='0'&&b[i]<='9')
			kq= kq+(b[i]-'0')*por(16,i);
		else
			kq=kq+(b[i]-'A'+10)*por(16,i);
		return kq;
}
