#include<stdio.h>
#include<math.h>
void nhap(int A[100],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kt(int A[100],int n)
{
	int dem=0;
	for(int i=1;i<n;i++)
    if(abs(A[i]-A[i-1])%2==0)
		return i;
	return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kt(A,n);
	xuat(kq);
}
