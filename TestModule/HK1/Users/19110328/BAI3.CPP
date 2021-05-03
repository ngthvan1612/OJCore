#include<stdio.h>
void nhapMang(int A[], int&n);
int ketQua(int A[], int n);
void xuat( int kq);



void main()
{
	int A[100],n;
	nhapMang(A,n);
	int kq=ketQua(A,n);
	xuat(kq);
}
void nhapMang(int A[], int&n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
}
int ketQua(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		if((A[i]%2==0) && (A[i+1]%2==1))
			return -1;
		else 
		{ 
			return i;
			break;
		}
		if((A[i]%2==1) && (A[i+1]%2==0))
			return -1;
		else
		{
			return i;
			break;
		}
	}
}
void xuat(int kq)
{
	printf("%d", kq);
}