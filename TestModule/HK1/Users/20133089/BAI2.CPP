#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap ( char &A, char &B);
long doisangthapphan( char A, char B);
int tong (char A, char B);
void xuat (int kq);
void main ()
{
	char A,B;
	nhap (A,B);
	long kt=doisangthapphan(A,B);
	int kq=tong(A,B);
	xuat (kq);
}
void nhapMang ( char &A, char &B)
{
	scanf("%c%c",&A, &B);
}
long doisangthapphan( char A, char B)
{
	long kt=0;
	int len=char(A);
	for (int i=0;i<len;i++)
	{
		if ((A[i]>'0')&& (A[i]<'9'))
			kt=kt+(A[i]-'0')*(long)pow(16,len-i-1);
		else
			kt =kt +(A[i]-55)*(long)pow(16,len-i-1);
	}
	int lon=char(B);
	for (int j=0;j<lon;j++)
	{
		if ((B[j]>'0') && (B[j]<'9'))
			kt=(kt+(B[j]-'0')*(long)pow(16,lon-j-1));
		else
			kt=(kt +(B[j]-55)*(long)pow(16,lon-j-1));
	}
	return kt;
}
int tong (char A, char B)
{
	int kq =(A+B);
	return kq;
}
void xuat (int kq)
{
	printf ("%d",kq);
}






