#include<stdio.h>
#include <math.h>
#include <string.h>
void nhap( char A[]);
long doithapphan(char A[]);
void xuat (long kq);
void main()
{
	char A[20], B[20];
	nhap(A);
	nhap(B);
	long d= doithapphan(A);
	long kq= doithapphan(A)+ doithapphan(B);
	xuat(kq);
}
void nhap( char A[])
{
	gets(A);
}
long doithapphan(char A[])
{
	long t=0;
	int l = strlen(A);
	for (int i=0; i<l; i++)
		if(A[i]>='0' && A[i]<='9')
			t=t+ (A[i]-'0')*(long)pow(16,i);
		else
			t=t+ (A[i]-55)*(long)pow(16,i);
		return t;
}
void xuat (long kq)
{
	printf ("%ld", kq);
}