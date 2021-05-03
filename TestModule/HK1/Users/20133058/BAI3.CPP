#include <stdio.h>
void nhap(int A[],int &n);
int chanle(int A[],int n);
void xuat(int d,int n,int A[]);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=chanle(A,n);
	xuat(kq,n,A);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&A[i]);
}
int chanle(int A[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			if(A[i+1]%2==1)
				d++;
		}
		if(A[i]%2==1)
		{
			if(A[i+1]%2==0)
				d++;
		}	
	}
	return d;
}
void xuat(int d,int n,int A[])
{
		if(d==n)
			printf("-1");
		else
		{
			int m=0;
			for(int i=0;i<n;i++)
			{
				if(A[i]%2==0)
				{
					if(A[i+1]%2==0)
					{
						m=i+1;
						printf("%d",m);
						break;
					}
				}
				if(A[i]%2==1)
				{
					if(A[i+1]%2==1)
					{
						m=i+1;
						printf("%d",m);
						break;
					}
				}
			}
		}
}