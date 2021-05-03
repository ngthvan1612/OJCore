#include<stdio.h>
#include<string.h>
#include<math.h>
unsigned long chuyen(char a[]);
void main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	
	unsigned long s=chuyen(a);
	unsigned long t=chuyen(b);
	printf("%d", s+t);
	
}

unsigned long chuyen(char a[])
{
	strrev(a);
	int l=strlen(a);
	unsigned long kq=0;
	for (int i=0;i<l;i++)
		if ((a[i] >= '0') && (a[i] <= '9'))
			kq=kq+((a[i]-'0')*pow(16,i));
		else kq=kq+((a[i]-'A'+10)*pow(16,i));
	return kq;
}