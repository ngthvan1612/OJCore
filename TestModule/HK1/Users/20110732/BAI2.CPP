#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
unsigned long tinhTong( char A[], char B[]);
unsigned doicoso(char A[]);
void xuat(unsigned long kq);
void main()
{
	char A[100];
	char B[100];
	nhap(A, B);
	unsigned long kq=tinhTong(A, B);
	xuat(kq);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
unsigned long tinhTong( char A[], char B[])
{
	unsigned long tong1, tong2;
	unsigned long tong;
	tong1=doicoso(A);
	tong2=doicoso(B);
	tong=tong1+tong2;
	return tong;
}
unsigned doicoso(char A[])
{
	strrev(A);
	int m=strlen(A);
	unsigned long kq=0;
	for(int i=0; i<m; i++)
	{
		if(A[i]>='0'&&A[i]<='9')
			kq=kq+(A[i]-'0')*(unsigned long)(pow(16,i));
		else
			kq=kq+(A[i]-'A'+10)*(unsigned long)(pow(16,i));
	}
	return kq;
}
void xuat(unsigned long kq)
{
	printf("%d", kq);
}
