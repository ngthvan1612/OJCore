#include<stdio.h>
void nhap(int A[100],int &n);
void xuat(int kq);
int vitrihople(int A[],int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=vitrihople(A,n);
	xuat(kq);
}
void nhap(int A[100],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int vitrihople(int A[],int n)
{
	int kq=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if((A[i]%2==0 && A[j]%2==0)||(A[i]%2!=0 && A[j]%2!=0))
				kq=i;
			else 
				kq=-1;
		}
	}
	return kq;
}