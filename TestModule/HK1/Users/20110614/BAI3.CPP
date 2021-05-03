#include<stdio.h>
void nhap(int A[],int&n);
int kiemtra(int A[],int n);
void xuat(int kq);
void main()
{
	int A[100],n;
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
	int dem;;
	for(int i=0;i<n-1;i++)
	{
		if((A[i]%2==0 && A[i+1]%2!=0)||(A[i]%2!=0 && A[i+1]%2==0))
			dem=-1;
		else if((A[i]%2==0 && A[i+1]%2==0)||(A[i]%2!=0 && A[i+1]%2!=0))
		{
			dem=i+1;
			break;
		}

	}
	return dem;
}
void xuat(int kq)
{
	printf("%d",kq);
}

