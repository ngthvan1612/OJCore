#include<stdio.h>
int ktra(int A[], int n);
void xuat(int kq);
int ktra(int A[], int n);
void nhap( int A[], int &n);
void main()
{
	int n, A[100];
	nhap(A,n);
	int kq=ktra(A,n);
	xuat(kq);
}
void nhap( int A[], int &n)
{
	scanf("%d",&n);
		for(int i=0; i<n ; i++)
			scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int ktra(int A[], int n)
{
	if(n==1)
		return 0;
	for(int i=1; i<n; i++)
	if((A[i]%2==0 && A[i-1]%2==0)||(A[i]%2==1 && A[i-1]%2==1))
		return i;
	return -1;
}

