#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void nhapMang(int A[],int &n);
int ktChanLe(int A[],int n);
void xuat(int kq);
void main()
{
	int A[100]; int n;
	nhapMang(A,n);
	int kq=ktChanLe(A,n);
	xuat(kq);
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int ktChanLe(int A[],int n)
{
	for(int i=1;i<n;i=i+2)
	{
		if((A[i] %2 != 0 && A[i+1] %2 == 0) || (A[i] %2 == 0 && A[i+1] %2 !=0))
			return -1;
		else 
			return 2;
	}
}
void xuat(int kq)
{
	if(kq==-1)
		printf("-1");
	else
		printf("2");
}

