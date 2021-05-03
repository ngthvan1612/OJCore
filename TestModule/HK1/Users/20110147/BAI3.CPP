#include<stdio.h>
#define SIZE 2000
void nhap(int A[], int &n);
int xenke(int A[], int n);
void xuat(int kq);
void main()
{
	int n;
	int A[SIZE];
	nhap(A,n);
	int kq=xenke(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int xenke(int A[], int n)
{
	int t=0;
	for (int i=0;i<n-1;i++)
	{
		if (A[i]%2==1 && A[i+1]%2==0)
			t+=1;
		else if (A[i]%2==0 && A[i+1]%2==1)
			t+=1;
		else return(i+1);
	}
	if(t==n-1)
		return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}
