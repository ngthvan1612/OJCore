#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned int tonghe16 (char* a, char* b );
void xuat (unsigned int x);
void main ()
{
	char a[15],b[15];
	gets (a);
	gets(b);
	unsigned int kq=tonghe16(a,b);
	xuat (kq);
}
void xuat (unsigned int x)
{
	printf ("%d",x);
}
unsigned int tonghe16 (char* a, char* b )
{
	unsigned int sum1=0,sum2=0,sum=0;
int	n=strlen (a);
int	l=strlen (b);
	strrev(a);
	strrev(b);
	for ( int i=0;i<n;i++)
		if (a[i]>=48 && a[i]<=57)
			sum1=sum1+(unsigned int) (a[i]-48)*(unsigned int)pow(16,i);
		else if (a[i]>=65&&a[i]<=90)
			sum1=sum1+(unsigned int)(a[i]-55)*(unsigned int)pow(16,i);
	for ( i=0;i<l;i++)
	{
		if (b[i]>=48&& b[i]<=57)
			sum2=sum2+ (unsigned int) (b[i]-48)*(unsigned int)pow(16,i);
		else if (b[i]>=65 && b[i]<=90)
			sum2=sum2+(unsigned int)(b[i]-55)*(unsigned int)pow(16,i);
		}
		sum=sum1+sum2;
		return sum;
}