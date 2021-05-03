#include<stdio.h>
#include<string.h>
#include<math.h>
long doisangthapphan(char S[]);
void nhap(char S[]);
void xuat(long kq, long kq1);
void main()
{
	char S[30];
	char B[30];
	nhap(S);
	nhap(B);
	long kq = doisangthapphan(S);
	long kq1 = doisangthapphan(B);
	xuat(kq,kq1);
}
long doisangthapphan(char S[])
{
	long kq =0;
	int len = strlen(S);
	S=strrev(S);
	for(int i = 0; i < len ;i++)
		if (S[i] >='0' && S[i] <= '9' )
			kq =kq +(S[i] -'0')*(long)pow(16,i);
		else 
			kq =kq +(S[i] -55 ) *(long)pow(16,i);
	return kq;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(long kq,long kq1)
{
	printf("%ld", kq + kq1);
}
