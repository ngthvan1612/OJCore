#include<stdio.h>
#define size 100
void nhap(int &n, int A[]);
int kiemtrachanle(int n, int A[]);
void xuat(int kq);

void main()
{
	int n, A[size];
	nhap(n,A);
	int kq=kiemtrachanle(n,A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
int kiemtrachanle(int n, int A[])
{
	for(int i=0; i<n-1; i++)
	{
		if(A[i]*A[i+1]%2!=0)
			return i+1;
		else if(A[i]%2==0 && A[i+1]%2==0)
			return i+1;
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}

