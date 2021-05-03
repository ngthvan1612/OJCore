#include<stdio.h>
#include<string.h>
#include<math.h>

void nhap(char A[])
{
	gets(A);
}

long tinhTong(char A[], char B[])
{
	int nA = strlen(A);
	int nB = strlen(B);
	long tong1 = 0;
	long tong2 = 0;
	strrev(A);
	strrev(B);
	for(int i =  0; i < nA; i++)
	{
		if(A[i] >= '0' && A[i] <= '9')
			tong1 += (A[i] - '0') * (long)pow(16, i);
		else
			tong1 += (A[i] - 55) * (long)pow(16, i);
	}
	for(i = 0; i < nB; i++)
	{
		if(B[i] >= '0' && B[i] <= '9')
			tong2 += (B[i] - '0') * (long)pow(16, i);
		else
			tong2 += (B[i] - 55) * (long)pow(16, i);
	}
	return tong1 + tong2;
}

void xuat(long kq)
{
	printf("%ld", kq);
}

void main()
{
	char A[200], B[200];
	nhap(A);
	nhap(B);
	long kq = tinhTong(A, B);
	xuat(kq);
}