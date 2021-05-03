#include<stdio.h>
void nhapMang(int A[], int &n);
int ktChanLe(int A[],int n);
void xuat(int kq);
void main()
{
	int A[100],n;
	nhapMang(A,n);
	int kq=ktChanLe(A,n);
	xuat(kq);
}
void nhapMang(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int ktChanLe(int A[],int n)
{
	int vt;
	int dem=0;
	for(int i=0;i<n-1;i++)
	{
		if((A[i]+A[i+1])%2==1)
			dem=dem+1;
		else
		{
			vt=i+1;
			break;
		}
	}
	if(dem==n-1)
		return -1;
	else
		return vt;
}
void xuat(int kq)
{
	printf("%d",kq);
}