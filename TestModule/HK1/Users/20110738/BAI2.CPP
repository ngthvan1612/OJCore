#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap(char a[],char b[]);
void xuat (long kq);
long sum (char a[], char b[]);

void main ()
{
	char a[20],b[20];
	nhap(a,b);
	long kq=sum(a,b);
	xuat (kq);
}
void nhap(char a[],char b[])
{
	gets(a);
	fflush(stdin);
	gets(b);
}
void xuat (long kq)
{
	printf("%ld",kq);
}
long sum (char a[], char b[])
{
	long t=0;
	long x1=0;
	long x2=0;
	int i;
	int len1= strlen (a);
	int len2= strlen (b);
	for (i=0; i<len1; i++)
		if ((a[i]>='0') && (a[i]<='9'))
			x1=x1+(a[i]-'0')*(long)pow(16,len1-i-1);
		else
			x1=x1+(a[i]-55)*(long)pow(16,len1-i-1);
	for (i=0; i<len2; i++)
		if (b[i]>='0' && b[i]<='9')
			x2=x2+(b[i]-'0')*(long)pow(16,len2-i-1);
		else
			x2=x2+(b[i]-55)*(long)pow(16,len2-i-1);
	t=x1+x2;
	return t;
}


