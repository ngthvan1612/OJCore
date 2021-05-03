#include <stdio.h>
#include <string.h>
#include <math.h>

void xuat(long kq);
long To10(char S[]);

void main()
{
	char A[30],B[30];
	gets(A);
	gets(B);
	long a = To10(A);
	long b = To10(B);
	long kq = a + b;
	xuat(kq);
}
void xuat(long kq)
{
	printf("%ld",kq);
}
long To10(char S[])
{
	long a=0;
	int len = strlen(S);
	for(int i=0;i<len;i++)
		if(S[i]>='0' && S[i]<='9')
			a = a +(S[i] - '0')*(long)pow(16,len-i-1);
		else
			a = a +(S[i]-55)*(long)pow(16,len-i-1);
	return a;
}
