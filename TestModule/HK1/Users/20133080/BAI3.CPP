#include<stdio.h>

void nhap(unsigned int A[], int &n);
int xuly(unsigned int A[], int n);
void xuat(int kq);

void main()
{
	unsigned int A[100];
	int n;
	nhap(A, n);
	int kq=xuly(A, n);
	xuat(kq);
}
void nhap(unsigned int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int xuly(unsigned int A[], int n)
{
	
	for(int i=n-1; i>=2; i--)
	{
		if((A[i]%2==0 && A[i-1]%2!=0) || (A[i]%2!=0 && A[i-1]%2==0))
			return -1;
	}
	int vt;
	for(int j=0; j<n; j++)
	{
		if((A[j]%2==0 && A[j+1]%2==0) ||(A[j]%2!=0 && A[j+1]%2!=0))
			vt=j+1;
	}
	return vt;
}