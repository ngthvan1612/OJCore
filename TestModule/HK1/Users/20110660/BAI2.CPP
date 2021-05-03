#include<stdio.h>
#include<string.h>
void nhap(char a[],char b[]);
int doi( char ch);
double tinh(char a[]);
void xuat(double x);
void main()
{
char a[100], b[100];
nhap(a,b);
double kq =tinh(a)+tinh(b);
xuat(kq);
}
void nhap(char a[],char b[])
{
	gets(a);
	gets(b);
}

int doi( char ch)
{
if (ch>='A' &&ch<='F')
return (int(ch)+10-int ('A'));
else 
return (int (ch)-int ('0'));
}

double tinh(char a[])
{
int n = strlen(a);
double  q=1;
double kq=0;
for (int i=n-1; i>=0;i--)
{
kq+=q*doi(a[i]);
q=q*16;
}
return kq;
}
void xuat(double x)
{
printf("%.0lf",x);
}