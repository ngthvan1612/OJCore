#include<stdio.h>
#include<string.h>
#include<math.h>
int 16sang10(char A[]);
int 16sang10(char B[]);
void xuat(int kq);
void main()
{
	char A[200],B[200];
	gets(A);
	gets(B);
	int kq1=16sang10(A);
	int kq2=16sang10(B);
	int kq=kq1+kq2;
	xuat(kq);
}
int 16sang10(char A[])
{
	int kt=0;
	int s=strlen(A);
	A=strrev(A);
	for(int i=0;i<s;i++)
		if(A[i]<='9' && A[i]>='0')
			kt=kt+(A[i]-'0')*(int)pow(16,i);
		else
			kt=kt+(A[i]-55)*(int)pow(16,i);
	return kt;
}
int 16sang10(char B[])
{
	int kt=0;
	int s=strlen(B);
	B=strrev(B);
	for(int i=0;i<s;i++)
		if(B[i]<='9' && B[i]>='0')
			kt=kt+(B[i]-'0')*(int)pow(16,i);
		else
			kt=kt+(B[i]-55)*(int)pow(16,i);
	return kt;
}

void xuat(int kq)
{
	printf("%ld",kq);
}