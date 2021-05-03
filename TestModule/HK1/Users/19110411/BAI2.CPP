#include<stdio.h>
#include<string.h>
#include<math.h>
void nhapchuoi(char A[], char B[]);
void xuat(long D);
long doi(char A[], char B[]);
void main()
{
	char A[50], B[50];
	nhapchuoi(A, B);
	long D= doi(A, B);
	xuat(D);
}
void nhapchuoi(char A[], char B[])
{
	gets(A);
	gets(B);
}
void xuat(long D)
{
	printf("%d",D);
}
long doi(char A[], char B[])
{
	long a=0;
	int len =strlen(A);
	for(int i=0;i<len;i++)
	{
		if(A[i]>'0'&&A[i]<'9')
			a= a+ (A[i]-'0')*(long)pow(16,len-i-1);
		else
			a= a+ (A[i]-55)*(long)pow(16,len-i-1);
	}
	return a;
	long b=0;
	int len =strlen(B);
	for(int i=0;i<len;i++)
	{
		if(B[i]>'0'&&B[i]<'9')
			b= b+ (B[i]-'0')*(long)pow(16,len-i-1);
		else
			b= b+ (B[i]-55)*(long)pow(16,len-i-1);
	}
	return b;
	int D=0;
	D= D + a + b;
}


