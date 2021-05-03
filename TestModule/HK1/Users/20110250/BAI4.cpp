#include<stdio.h>
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	scanf("%d", &A[i]);
}
int sam (int A[], int &n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if('tong A[i]>=tongA[n-1]')
		dem=dem-1;
		else
		dem=dem+1;                     
	}
	return dem;
}
int tong(int x)
{
	int sum=0;
	int z;
	while(x>0)
	{
		z=x%10;
		sum+=z;
		x=x/10;
	}
	return sum;
}
void xuat( int kq)
{
	printf("%d", kq);
}
 int main()
 {
 	int A[100],n;
 	nhap (A, n);
 	int kq=sam(A,n);
 	xuat(kq);
 }

