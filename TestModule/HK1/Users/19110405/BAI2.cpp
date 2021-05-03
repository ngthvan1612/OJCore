#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned long tinh(char a[],char b[]);
void main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	unsigned long kq=tinh(a,b);
	printf ("%u",kq);
}
unsigned long tinh(char a[],char b[])
{
	int i=0;
	int na=strlen(a);
	int nb=strlen(b);
	unsigned long suma=0;
	unsigned long sumb=0;
	for (i;i<na;i++)
	{
		if (a[i]>='0' && a[i]<='9')
		{
			 suma=suma+((int)a[i]-(int)'0')*pow(16,na-1-i);
		}
		else
		{
			suma=suma+((int)a[i]-(int)'A'+10)*pow(16,na-1-i);
		}
	}
	
	for (i=0;i<nb;i++)
	{
		if (b[i]>='0' && b[i]<='9')
		{
			 sumb=sumb+((int)b[i]-(int)'0')*pow(16,nb-1-i);
		}
		else
		{
			sumb=sumb+((int)b[i]-(int)'A'+10)*pow(16,nb-1-i);
		}
	}
	
	unsigned long sum=suma+sumb;
	return sum;
}