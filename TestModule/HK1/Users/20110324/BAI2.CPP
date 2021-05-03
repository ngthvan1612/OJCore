#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
void xuat(unsigned long kq);
unsigned long tong(char A[], char B[]);
void main()
{
	char A[11],B[11];
	nhap(A,B);
	unsigned long kq=tong(A,B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
void xuat(unsigned long kq)
{
	printf("%d", kq);
}
unsigned long tong(char A[], char B[])
{
	strrev(A);
	strrev(B);
	int l=strlen(A);
	int m=strlen(B);
	unsigned long x=0;
	unsigned long y=0;
	unsigned long kq;
	for (int i=0;i<l;i++)
	{
		if(A[i]>='0'&&A[i]<='9')
			x=x+(A[i]-'0')*pow(16,i);
		else
			x=x+(A[i]-'A'+10)*pow(16,i);
	}
	for (int j=0;j<m;j++)
	{
		if(B[j]>='0'&&B[j]<='9')
			y=y+(B[j]-'0')*pow(16,j);
		else
			y=y+(B[j]-'A'+10)*pow(16,j);
	}
	kq=x+y;
	return kq;
}