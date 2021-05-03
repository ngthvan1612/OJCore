#include <stdio.h>
#include <string.h>
#include <math.h>
int hex ( char s[]);
void xuat ( int kq1, int kq2);
void main ()
{
	char a[10], b[10];
	gets (a);
	gets (b);
	int kq1= hex (a);
	int kq2 =hex (b);
	xuat ( kq1, kq2);
}
int hex ( char s[])
{
	long kq= 0;
	int len = strlen (s);
	s= strrev (s);
	for (int i=0; i< len ; i++)
		if ( s[i] >= '0' && s[i] <= '9')
			kq= kq + (s[i] -'0')* (long)pow (16,i);
		else
			kq= kq + (s[i] - 55)* (long)pow ( 16,i);
		return kq;

}
void xuat ( int kq1, int kq2)
{
	int k= kq1 + kq2;
	printf ("%d", k);
}