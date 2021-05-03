#include <stdio.h>
#define SIZE 100
void nhap(int A[SIZE], int &n);
int xuli(int A[], int n);
void xuat(int kq);
void main()
{
	int A[SIZE], n;
	nhap(A,n);
	int kq= xuli(A,n);
	xuat(kq);
}
void nhap(int A[SIZE], int &n)
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
int xuli(int A[], int n)
{
	int i;
	for (i=0;i<n;i++)
		{
			if (A[i]%2==0 && A[i+1]%2==1 || A[i]%2==1 && A[i+1]%2==0)
				return -1;
			else 
				if (A[i]%2==1 && A[i+1]%2==1 || A[i]%2==0 && A[i+1]%2==0)
				return i;
			
		}
}
void xuat(int kq)
{
	printf("%d", kq);
}

	
