#include<stdio.h>

void nhapMang(int A[],int &n);
void xuatMang(int A[],int n);
int kiemtraChanLe(int A[],int n);
int laSoChan(int x);
void main()
{
	int n;
	int A[100];
	nhapMang(A,n);
	int kq = kiemtraChanLe(A,n);
	printf("%d",kq);
}
int kiemtraChanLe(int A[],int n)
{
	int kq = -1;
	for(int i = 0; i < n - 1;i ++)
	{
		if(laSoChan(A[i])==1)
		{
			if(laSoChan(A[i+1])==1)
			{
			     kq = i + 1;
			     break;
			}
		}
		else
		{
			if(laSoChan(A[i+1])==0)
			{
				kq=i+1;
				break;
			}
		}
	}
	return kq;
}
int laSoChan(int x)
{
	if(x % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
