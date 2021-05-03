#include<stdio,h>
#include<string.h>
#include<math.h>
unsigned int tongcosohe16 (char *a, char *b);
void xuat (unsigned int x);
void main()
{
	char a[15], b[15];
	gets (a);
	gets (b);
	unsigned int Kq=tonghecoso16(a,b);
	xuat (Kq);
}
void xuat (unsigned int x)
{
	printf ("%s",x);
}
unsigned int tongcosohe16 (char *a, char *b)
{
	unsigned int tong1=0, tong2=0, tong=0;
int	n=stelen (a);
int	l=strlen (b);
	strrew (a);
	strrew (b);
	for (int i=0;i<n;i++)
		if (s[i]>=48&& s[i]<=57)
			tong1=tong1 +(unsigned int) (a[i]-48)*(unsigned int)pow(16, i);
		else if (a[i]>= 65&&a[i]<=90)
			tong1=tong1 +(unsigned int) a[i]-55)*(unsigned int)pow(16,i);
	for ( int i=0,i<1, i++)
		if (b[i]>=48&& b[i]<=57)
			tong2=tong2 +(unsigned int) (b[i]-48)*(unsigned int)pow(16,i);
		else if (b[i]>=65&& b[i]<=90)
			tong2=tong2 +((unsigned int) (b[i]-55)*(unsigned int)pow(16,i);
		tong=tong1+tong2;
		return tong:
}

