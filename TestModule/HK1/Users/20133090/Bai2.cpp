#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap( char &A, char &B);

long doisangthapphan( char A, char B);
void xuat (int kq);
int tong (char A, char B);
void main()
{
	char A[100],B[100];
	nhap (A,B);
	long kt=doisangthapphan(A,B);
	int kq=tong(A,B);
	xuat (kq);
}
void nhap( char &A, char &B)
{
	gets(A,B);
}
long doisangthapphan( char A, char B)
{
	long kt=0;
	int len=strlen(A);
	int lon=strlen(B);
	{
		for(int i=0;i<len;i++)
		{
			if(A[i]>'0'&&A[i]<'9'
				kt=kt+(A[i]-'0')*(long)pow(16,len-i-1);
			else
				kt=kt+(A[i]-55)*(long)pow(16, len-i-1);
		}
		for(int i=0;i<lon;i++)
		{
			if(B[i]>'0'&&B[i]<'9'
				kt=kt+(B[i]-'0')*(long)pow(16,lon-i-1);
			else
				kt=kt+(B[i]-55)*(long)pow(16, lon-i-1);
		}
		return kt;
	}
int tong (char A, char B)
{
	int kq=(A+B);
	return kq;
}
void xuat (int kq)
{
	printf("%d",kq);
}
	
			