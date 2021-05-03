#include <stdio.h>
void nhap (int A[], int &n);
int tinhle ( int A[], int n);
void xuat (int x);
void main ()
{
	int A[100], n;
	nhap (A,n);
	int kq= tinhle (A,n);
	xuat (kq);
}
void nhap (int A[], int &n)
{
	scanf ("%d", & n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
int tinhle ( int A[], int n)
{
	int a= A[0];
	for (int i=1; i<n; i++)
	{
		if ( (a + A[i]) %2 ==0)
			return i;
		else
			a= A[i];
	}
	return -1;
}
void xuat (int x)
{
	printf ("%d", x);
}