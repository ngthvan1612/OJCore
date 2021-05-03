#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
unsigned long doi16sang10(char S[]);
unsigned long tong (char A[], char B[]);
void xuat(unsigned long kq);
void main()
{
	char A[11], B[11];
	nhap(A,B);
	unsigned long kq=tong(A,B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
unsigned long doi16sang10(char S[])
{
	strrev(S);
	int l=strlen(S);
	unsigned long kq=0;
	for (int i=0;i<l;i++)
		if (S[i]>='0' && S[i]<='9')
			kq=kq+(S[i]-'0')*pow(16,i);
		else kq=kq+(S[i]-'A'+10)*pow(16,i);
	return kq;
}
unsigned long tong (char A[], char B[])
{
	int t=doi16sang10(A)+doi16sang10(B);
	return t;
}
void xuat(unsigned long kq)
{
	printf("%u",kq);
}
