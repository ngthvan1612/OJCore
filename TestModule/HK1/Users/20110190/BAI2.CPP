#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap (char a[], char b[]);
long HexsangDec (char a[]);
double tinhtong(char a[], char b[], int &x, int &y);
void xuat (double kq);
void main()
{
	char a[30], b[30];
	int x, y;
	nhap (a, b);
	double kq=tinhtong(a, b, x, y);
	xuat (kq);
}
void nhap (char a[], char b[])
{
	gets(a);
	gets(b);
}
long HexsangDec (char a[])
{
	long t=0;
	int s=strlen(a);
	a=strrev(a);
	for (int i=0; i<s; i++)
		if (a[i]<='9' && a[i]>='0')
			t=t+(a[i]-'0')*(long)pow(16,i);
		else
			t=t+(a[i]-55)*(long)pow(16,i);
		return t;
}
double tinhtong(char a[], char b[], int &x, int &y)
{
	x=HexsangDec(a);
	y=HexsangDec(b);
	double kq=double (x)+y;
	return kq;
}
void xuat (double kq)
{
	printf("%.0lf", kq);
}
