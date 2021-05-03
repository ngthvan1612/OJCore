# include <stdio.h>
# include <string.h>
#include <math.h>
void nhap(char a[], char b[]);
void xuat(int kq);
unsigned long ChuyenHe(char s[]);
unsigned long TongChuyenHe(char a[],char b[]);
void main()
{
	char A[100],B[100];
	nhap(A,B);
	unsigned long kq=TongChuyenHe(A,B);
	xuat(kq);
}
void nhap(char a[], char b[])
{
	gets(a);
	gets(b);
}
void xuat(int kq)
{
	printf("%d",kq);
}
unsigned long ChuyenHe(char s[])
{
	unsigned long k=0;
	int L;
	strrev(s);
	L=strlen(s);
	for (int i=0;i<L;i++) 
	{
		if (s[i]>='0' && s[i]<='9') k=k+(s[i]-'0')*pow(16,i);
		else k=k+(s[i]-'A'+10)*pow(16,i);
	}
	return k;
}
unsigned long TongChuyenHe(char a[],char b[])
{
	unsigned long tong;
	tong=ChuyenHe(a)+ChuyenHe(b);
	return tong;
}