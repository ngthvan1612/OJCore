#include <stdio.h>
#include <string.h>
#include <math.h>
#define size 100
long Tinh(char S[])
{
	long kq=0;
	int len=strlen(S);
	for (int i=0; i<len; i++)
	{
		if (S[i] >'0' && S[i] <'9')
			kq+=(S[i]-'0')* (long)pow(16,len-i-1);
		else kq+=(S[i]-55)* (long)pow(16,len-i-1);
	}
	return kq;
}
void main ()
{
	char A[size],B[size];
	gets(A);
	gets(B);
	printf("%ld",Tinh(A)+Tinh(B));
}
