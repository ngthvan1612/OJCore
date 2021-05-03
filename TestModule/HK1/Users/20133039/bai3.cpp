#include<stdio.h>
void nhapMang(int &A[], int &n);
void xuatMang(int A[], int n);
int tinh(int A[], int n);
void xuat(int x);
void main()
{
	int A[100],n;
	nhap A[],n;
	nhapMang(A,n);
	xuatMang(A,n);
	int kq=tinh(A,n);
	xuat(kq);
}
void nhapMang(int &A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",A[i]);
}
void xuatMang(int A[], int n)
{
	for(int i=0;i<n-1;i++)
		printf("%d",A[i]);
}
int tinh(int A[], int n)
{
	int s=-1;
		for(int i=1;i<n-1;i++)
		if(A[i]+(A[i+1])%2)
			return s;
}
void xuat(int x)
{
	printf("%d",x);
}

