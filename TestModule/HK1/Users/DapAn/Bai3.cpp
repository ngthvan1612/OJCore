#include<stdio.h>
#define SIZE 100
int kiemTraChanLe(int A[], int n);
void nhap(int A[], int &n);
void xuat(int x);
void main()
{
	int A[SIZE],n;
	nhap(A,n);
	int kq = kiemTraChanLe(A,n);
	xuat(kq);
}
int kiemTraChanLe(int A[], int n)
{
	int i=1;
	while (i<n && (A[i-1]+A[i])%2==1)
			i++;
	if (i==n)
		return -1;
	return i;
}
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}