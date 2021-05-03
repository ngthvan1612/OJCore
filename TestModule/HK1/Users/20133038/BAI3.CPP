#include<stdio.h>
void nhap(int A[],int &n);
void xuat(int kq);
int xuli(int A[],int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=xuli(A,n);
	xuat(kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int xuli(int A[],int n)
{
	int kq=-1;
	for (int i=0;i<n-1;i++)
	{
		int t=A[i]+A[i+1];
		if (t%2==0)
		{
			kq=i+1;break;
		}
	}
	return kq;
}