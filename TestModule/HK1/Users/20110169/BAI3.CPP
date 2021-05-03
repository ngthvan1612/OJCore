#include<stdio.h>
#define SIZE 100
void nhapMang(int A[], int &n);
void xuat(int x);
int xenKe(int A[], int n);
void main()
{
	int A[SIZE], n;
	nhapMang(A,n);
	int kq=xenKe(A,n);
	xuat(kq);
}
void nhapMang(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n;i++)
		scanf("%d", &A[i]);
}
void xuat(int x)
{
	printf("%d", x);
}
int xenKe(int A[], int n)
{
	int t=0;
	for(int i=0;i<n-1;i++)
	{
		if ((A[i]+A[i+1])%2==0)
		{
			t=i+1;
			return t;
		}

	}
	return -1;
}
	



	