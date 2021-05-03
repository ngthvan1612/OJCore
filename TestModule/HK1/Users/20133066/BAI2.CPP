#include<stdio.h>
#include<string.h>
#include<math.h>
long DOI(char a[]);

void main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	long kq = DOI(a) + DOI(b);
	printf("%ld",kq);
}
long DOI(char a[])
{
	long kq = 0;
	int len = strlen(a);
	a = strrev(a);
	for(int i=0; i<len; i++)
		if( a[i] >='0' && a[i] <= '9')
			kq = kq + (a[i]-'0')*(long)pow(16,i);
		else
			kq = kq + (a[i] - 55)*(long)pow(16,i);
		return kq;
}
