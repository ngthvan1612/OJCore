#include<string.h>
#include<stdio.h>
#include<math.h>
unsigned long doi16sang10(char S[]);
int tinhTong(char A[],char B[]);
void xuat(int kq);
void main()
{
	char A[50],B[50];
	gets(A);
	gets(B);
	int kq=tinhTong(A,B);
	xuat(kq);
}
unsigned long doi16sang10(char S[])
{
	strrev(S);
	int l=strlen(S);
	unsigned long kq=0;
	for(int i=0;i<l;i++)
		if(S[i]>='0' && S[i]<='9')
			kq = kq+(S[i]-'0')*pow(16,i);
		else
			kq = kq+(S[i]-'A'+10)*pow(16,i);
	return kq;
}
int tinhTong(char A[],char B[])
{
	int t;
	t= doi16sang10(A) + doi16sang10(B);
	return t; 
}
void xuat(int kq)
{
	printf("%d",kq);
}
