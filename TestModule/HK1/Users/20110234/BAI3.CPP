#include<stdio.h>
void nhap(int &n,int A[]);
int xuLi(int n,int A[]);
void xuat(int kq);
void main()
{
	int n,A[100];
	nhap(n,A);
	int kq=xuLi(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int xuLi(int n,int A[])
{
	int t=0,i;
	{
		for( i=0;i<n;i++)
		{
			if((A[i]%2==0 && A[i+1]%2!=0) || (A[i]%2!=0 && A[i+1]%2==0))
			{
				t=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
			if((A[i]%2==0 && A[i+1]%2==0))
			{
				t=i+1;
				return t;
				break;
			}
	}
	for(i=0;i<n;i++)
	{
				if((A[i]%2!=0 && A[i+1]%2!=0))
				{
					    t=i+1;
						return t;
						break;

				}
	}
	return t;
}
void xuat(int kq)
{
	printf("%d",kq);
}