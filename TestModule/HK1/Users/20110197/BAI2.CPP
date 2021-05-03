#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap ( char a[], char b[]);
void xuat ( int kq);
unsigned long sum ( char a[], char b[]);
unsigned long doi16sang10 (char str[]);



void main ()
{
	char a[100], b[100];
	nhap (a,b);
	unsigned long kq=sum (a,b);
	xuat (kq);
}

void nhap ( char a[], char b[])
{
	gets (a);
	gets (b);
}

void xuat ( unsigned long kq)
{
	printf ("%u", kq);
}

unsigned long doi16sang10 (char str[])
{
	strrev (str);
	int l=strlen(str);
	unsigned long kq=0;
	for (int i=0; i<l; i++)
	{
		if (str[i]>='0'&& str[i]<='9')
		{
			kq=kq+(str[i]-32)*pow(16,i);
		}
		else 
		{
			kq=kq+(str[i]-65 + 10) *pow(16,i);
			return kq;
		}
	}
}

unsigned long sum ( char a[], char b[])
{
	unsigned long sum=0;
	a=doi16sang10(a);
	b=doi16sang10(b);
	sum=a+b;
	return sum;
}