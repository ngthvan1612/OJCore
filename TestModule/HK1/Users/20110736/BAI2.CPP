#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
long tong( long n1, long n2);
void chuyen( char A[100], long&n1);
void xuat( long t);
void nhap( char A[100], char B[100]);
void main()
{
	char A[100];
	char B[100];
	nhap(A,B);
	long n1,n2;
	chuyen(A,n1);
	chuyen(B,n2);
	long t=tong(n1,n2);
	xuat(t);
}
void nhap( char A[100], char B[100])
{
	gets(A);
	gets(B);
}
void xuat( long t )
{
	printf("%d", t);
}
void chuyen( char A[100], long&n1)
{
	int n = strlen(A);
	int e= n-1;
	n1=0;
	for( int i=0; i<n; i++)
	if ((int(A[i])>=48)&&(int(A[i])<=57))
	{
		 int t = int(A[i])-48;
         n1= n1+ long(t*pow(16,e));
		 e--;
	}
	   else
	   {
		 int t = int(A[i])-55;
         n1= n1+ long(t*pow(16,e));
		 e--;
	   }
}
long tong( long n1, long n2)
{
	long t= n1+n2;
	return t;
}
      
