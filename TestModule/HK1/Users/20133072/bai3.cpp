#include<stdio.h>
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int kt(int A[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0 && A[i+1]%2!=0)
			dem++;
		else if(A[i]%2!=0 && A[i+1]%2==0)
			dem++;
		else if((A[i]%2!=0 && A[i+1]%2!=0) || (A[i]%2==0 && A[i+1]%2==0))
			return i+1;
	}
	return -1;
}
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kt(A,n);
	xuat(kq);
}