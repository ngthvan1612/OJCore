#include<stdio.h>
#define SIZE 100


void nhap(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}

void xuat(int x)
{
	printf("%d",x);
}

int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			d++;
		}
	}
	if(d==2)
	{
		return 1;
	}

	return 0;
}

/*int tong(int A[], int n)
{
	int S = 0;
	for(int i=1;i<n;i++)
	{
		if(laNT(A[i])==1)
		{
			S = S+A[i];
		}
	}
	return S;
}*/

int min(int A[],int n)
{
	int min = A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		{
			min = A[i];
		}
	}
	return min;
}

int demNT(int A[][SIZE],int m, int n)
{
	int B[SIZE]={0};
	int S = 0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(laNT(A[i][j])==1)
			{
				B[i]++;
			}
		}
		S = S + B[i];
	
	}
	return S;
}

void main()
{
	int A[SIZE][SIZE],m,n;
	nhap(A,m,n);
	int kq = demNT(A,m,n);
	xuat(kq);
}