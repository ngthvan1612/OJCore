#include<stdio.h>
void nhap(int A[],int&n);
int kiemtra(int A[],int n);
int kiemTraChanLe(int x);
void xuat(int kq);
void main()
{
	int A[200],n;
	nhap(A,n);
	int kq=kiemtra(A,n);
	xuat(kq);
}
void nhap(int A[],int&n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kiemtra(int A[],int n)
{
	int dem=0;
    for(int i=0;i<n;i++)
		{
			if(kiemTraChanLe(A[i])==1)
			{
				if(kiemTraChanLe(A[i+1])==0)
					dem++;
				else 
				{
					return(i+1);
				}
			}
			if(kiemTraChanLe(A[i])==0)
			{
				if(kiemTraChanLe(A[i+1])==1)
					dem++;
				else
				{
					return(i+1);
				}
			}
		}
		if(dem==n-1)
			return -1;
		return 0;
}
int kiemTraChanLe(int x)
{
	if(x%2==0)
		return 1;
	return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}


