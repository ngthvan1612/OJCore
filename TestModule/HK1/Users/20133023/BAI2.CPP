#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char S[]);
void xuat(long kq);
long doisang10(char S[]);

void main()
{
	char A[30],B[30];
	nhap(A);
	nhap(B);
	long a = doisang10(A);
	long b = doisang10(B);
	long kq = a + b;
	xuat(kq);
}
void nhap(char S[])
{
	gets(S);
}
void xuat(long kq)
{
	printf("%1d",kq);
}
long doisang10(char S[])
{
	long a=0;
	int len = strlen(S);
	for(int i=0;i<len;i++)
		if(S[i]>'0' && S[i]<='9')
			a = a + (S[i] - '0')*(long)pow(16,len-i-1);
		else
			a = a + (S[i]-55)*(long)pow(16,len-i-1);

		return a;
}