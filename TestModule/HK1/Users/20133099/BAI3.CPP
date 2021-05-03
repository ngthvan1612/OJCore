#include<stdio.h>
void nhap( int A[], int &n);
int ktra( int A[], int n);
void xuat (int kq);
void main()
{
	int A[100], n;
	nhap(A,n);
		int kq= ktra(A,n);
		xuat(kq);
}
void nhap( int A[], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", & A[i]);
}
int ktra( int A[], int n)
{
	int d1=0;
	int d2=0;
	int vt1=-1;
	int vt2=-1;
	for (int i=0; i<n; i=i+2)
		if( A[i]%2==0)
		{
			d1++;
			vt1++;
		}
		else 
		{
			d2++;
			vt2++;
		}
		
	for (int j= 1; i<n; j=j+2)
		if (A[j] %2==0)
		{
			d1++;
			vt1++;
		}
		else 
		{
			d2++;
			vt2++;
		}
		if( (d1==(n)/2)) return -1;
	else return vt1+1;
	if( (d2==(n)/2)) return -1;
	else return vt2+1;
}
void xuat (int kq)
{
	printf ("%d", kq);
}