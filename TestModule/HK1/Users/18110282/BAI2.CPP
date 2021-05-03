#include <stdio.h>
#include <string.h>
#include <math.h>

long xuLi(char S[])
{
	long kq = 0;
	int len = strlen(S);
	for(int i = 0; i < len; i++)
		{
			if(S[i]>'0' && S[i] <'9')
			{ kq = kq + (S[i] - '0')*(long)pow(16,len-i-1);}
			else
			{ kq = kq + (S[i] - 55)*(long)pow(16,len-i-1);}
		}
	return kq;
}

void main()
{
	char A[10];
	char B[10];
	gets(A);
	gets(B);
	long kq = xuLi(A) + xuLi(B);
	printf("%ld", kq);
}