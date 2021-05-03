#include<stdio.h>
int kiemtra(int A[], int n);
void nhap(int A[],int &n);
void xuat(int kq);
void main()
{
	int A[100], n;
	nhap(A,n);
	int kq=kiemtra(A,n);
	xuat(kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int kiemtra(int A[], int n)
{
	for(int i=0; i<n; i++)
		if((A[i]%2==0 &&( A[i+1]%2==1||A[i-1]%2==1))||(A[i]%2==1&&(A[i+1]%2==0||A[i-1]%2==0)))
			return -1;
		else if(A[i]%2==0&&(A[i-1]%2==0||A[i+1]%2==0))
			return i;
		return 0;
	
}

