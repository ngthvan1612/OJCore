#include <stdio.h>
#include <string.h>
#include <math.h>
long chuyen( char S[100]);
long tinhtong( char A[], char B[]);
void xuat( long kq);
void main()
{
	char A[100], B[100];
	gets(A);
	gets(B);
	long t=tinhtong(A,B);
	xuat(t);
}

long chuyen( char S[100])
{
	long kq=0;
	int len=strlen(S);
	S=strrev(S);
	for(int i=0;i<len; i++)
	{
		if(S[i]>='0' && S[i]<='9')
			kq=kq+(S[i]-'0')*(long)pow(16,i);
		else
			kq=kq+(S[i]-55)*(long)pow(16,i);
	}
	return kq;
}

long tinhtong( char A[], char B[])
{
	long t;
	t=chuyen(A)+chuyen(B);
	return t;
}

void xuat( long kq)
{
	printf("%ld", kq);
}
