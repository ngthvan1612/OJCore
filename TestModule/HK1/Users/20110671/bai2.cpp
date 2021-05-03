#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[], char B[]);
void doi(char A[], char B[], long &x,long &y);
long tong(long x, long y);
void xuat(long x);
void main()
{
	long x;
	long y;
	char A[100];
	char B[100];
	nhap(A,B);
	doi(A,B,x,y);
	int kq=tong(x,y);
	xuat(kq);
}

void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}

void doi(char A[], char B[], long &x,long &y)
{
	x=0;
	y=0;
	int lena=strlen(A);
	int lenb=strlen(B);
	for(int i=0;i<lena;i++)
	{
		if(A[i]>'0' && A[i]<'9')
			x=x+(A[i]-'0')*(long)pow(16,lena-i-1);
		else
			x=x+(A[i]-55)*(long)pow(16,lena-i-1);
	}
	for(int j=0;j<lenb;j++)
	{
		if(B[j]>'0' && B[j]<'9')
			y=y+(B[j]-'0')*(long)pow(16,lenb-j-1);
		else
			y=y+(B[j]-55)*(long)pow(16,lenb-j-1);
	}

}
long tong(long x, long y)
{
	long s=0;
	s=x+y;
	return s;
}

void xuat(long x)
{
	printf("%ld",x);
}