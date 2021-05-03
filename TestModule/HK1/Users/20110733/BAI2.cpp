#include<stdio.h>
#include<string.h>
#include<math.h>
unsigned long doi16sang10(char S[]);
void xuat(unsigned long kq);
void main()
{
	char S[11],T[11];
	gets(S);
	gets(T);
	unsigned long kq1=doi16sang10(S);
	unsigned long kq2=doi16sang10(T);
	unsigned long kq=kq1+kq2;
	xuat(kq);
}
unsigned long doi16sang10(char A[])
{
	strrev(A);
	int l=strlen(A);
	unsigned long kq=0;
	for(int i=0;i<l;i++)
		if(A[i]>='0'&&A[i]<='9')
			kq=kq+(A[i]-'0')*pow(16,i);
		else
			kq=kq+(A[i]-'A'+10)*pow(16,i);
	return kq;
}
void xuat(unsigned long kq)
{
	printf("%d",kq);
}