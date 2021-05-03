#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap (char s[]);
int xuly(char s[]);
void tinh_tong(char a[],char b[]);
void xuat(int kq);
void main()
{
	char a[100],b[100];
	nhap(a);
	nhap(b);
	int kq=tinh_tong(a,b);
	xuat(kq);
}
void nhap (char s[])
{
	gets(s);
}
int xuly(char s[])
{
	int d=0,h;
	int len=strlen(s);
	for (int i=0;i<len;i++)
	{
		if (s[i]>='A' && s[i]<='Z'
		{
			h=s[i]-55;
		}
		else if (s[i]>='a' && s[i]<='z') 
		{
			h=s[i]-32-55;
		}
		else
			h=s[i]-48;
		int u=strlen(s)-i-2;
		d=d+h*pov(16,u);
	}
	return d;
}
void tinh_tong(char a[],char b[])
{
	int a;
	int b;
	a=(xuly(a));
	int t;
	t=a+b;
	return t;
}
void xuat(int kq)
{
	printf("%d",kq);
}
