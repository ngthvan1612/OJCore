#include <stdio.h>
#include <string.h>
#include <math.h>
long xuly(char S[]);
long tinhTong(char A[], char B[]);
void xuat(long kq);

void main()
{
	char A[256];
	char B[256];
	gets (A);
	gets (B);
	long kq=tinhTong(A,B);
	xuat(kq);
}

long xuly(char S[])
{
	long kq=0;
	int len=strlen(S);
	for(int i=0; i<len; i++)
	{
		if(S[i]>'0' && S[i]<'9')
			kq=kq+
		(S[i]-'0')*(long)pow(16,len-i-1);
		else 
			kq=kq+
		(S[i]-55)*(long)pow(16, len-i-1);
	}
	return kq;

long tinhTong(char A[], char B[])
{
	return decTobi(A)+ decTobi(B);
}

void xuat(long kq)
{
	printf("%d", kq);
}
