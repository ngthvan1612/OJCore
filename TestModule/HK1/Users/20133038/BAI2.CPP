#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap (char A[]);
void xuat(long kq);
long xuli(char A[],char B[]);
void main()
{
	char A[100],B[100];
	nhap (A);
	nhap (B);
	long kq=xuli(A,B);
	xuat(kq);
}
void nhap (char A[])
{
	gets(A);
}
void xuat(long kq)
{
	printf("%ld",kq);
}
long xuli(char A[],char B[])
{
	int lenA=strlen(A);
	int lenB=strlen(B);
	long a=0;
	long b=0;
	long tong;
	int i,j;
	for (i=0;i<lenA;i++)
	{
		if (A[i]>='0' && A[i]<='9')
			a+=((A[i]-48)*(long)pow(16,lenA-1-i));
		else if (A[i]>='A' && A[i] <='Z')
			a+=((A[i]-55)*(long)pow(16,lenA-1-i));
	}
	for (j=0;j<lenB;j++)
	{
		if (B[j]>='0' && B[j]<='9')
			b+=((B[j]-48)*(long)pow(16,lenB-1-j));
		else if (B[j]>='A' && B[j] <='Z')
			b+=((B[j]-55)*(long)pow(16,lenB-1-j));
	}
	tong=a+b;
	return tong;
}