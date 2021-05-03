#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[]);
void xuat(long kq);
long doisangthapphan(char A[]);
void main()
{
	char A[100], B[100];
	nhap(A);
	nhap(B);
	long kq1=doisangthapphan(A);
	long kq2=doisangthapphan(B);
	long kq=kq1+kq2;
	xuat(kq);
}
void nhap(char A[])
{
	gets(A);
}
void xuat(long kq)
{
	printf("%ld",kq);
}
long doisangthapphan(char A[])
{
	long kq=0;
	int len=strlen(A);
	A=strrev(A);
	for(int i=0;i<len;i++)
	{
		if(A[i]>='0' && A[i]<='9')
			kq=kq+(A[i]-'0')*(long)(pow(16,i));
		else
			kq=kq+(A[i]-55)*(long)(pow(16,i));
	}
	return kq;
}