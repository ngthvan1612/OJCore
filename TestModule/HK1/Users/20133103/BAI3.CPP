#include<stdio.h>

int kiemTraChanLeHayLeChan(int A[],int n);
void nhapMang(int A[],int &n);
void xuatMang(int A[],int n);
void xuat(int x);

void main()
{
	int A[100],n;
	nhapMang(A,n);
	int kt=kiemTraChanLeHayLeChan(A,n);
	xuat(kt);
}
int kiemTraChanLeHayLeChan(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0 && A[i+1]%2==0)
			return 2;
	}
	return -1;
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuatMang(int A[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}

