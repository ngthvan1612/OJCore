#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap (char a[], char b[]);
long doihesoa( char a[]);
long doihesob( char b[]);
int tong (char a[], char b[]);
void xuat (int kq);
void main ()
{
	char a[100],b[100];
	nhap (a,b);
	long kq=tong (a,b);
	xuat (kq);
}
void nhap (char a[], char b[])
{
	gets(a);
	gets(b);
}
long doihesoa( char a[])
{
	long t=0;
	int s=strlen (a);
	a=strrev(a);
	for (int i =0;i<s;i++)
		if (a[i] <= '9' && a[i] >= '0')
			t = t + (a[i]-'0')*(long)pow(16,i);
		else
			t=t+ (a[i] - 55)*(long)pow(16,i);
	return t;
}
long doihesob( char b[])
{
	long h=0;
	int s=strlen (b);
	b=strrev(b);
	for (int i =0;i<s;i++)
		if (b[i] <= '9' && b[i] >= '0')
			h = h + (b[i]-'0')*(long)pow(16,i);
		else
			h=h+ (b[i] - 55)*(long)pow(16,i);
	return h;
}
int tong (char a[], char b[])
{
	int kq;	int s=strlen (a);
			kq = doihesoa(a) + doihesob(b);
	return kq;
}
void xuat (int kq)
{
	printf ("%ld",kq);
}
