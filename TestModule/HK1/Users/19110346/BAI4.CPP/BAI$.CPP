#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
bool langto(int x);
int summin(int A[][100],int m,int n);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=summin(A,m,n);
	printf("%d",kq);

}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
bool langto(int x)
{
	int d=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		{
			d++;
		}
	}
	if(d==1)
		return true;
	else
		return false;
}

int summin(int A[][100],int m,int n)
{
	int B[100];
	for(int i=0;i<m;i++)
	{
		B[i]=0;
		for(int j=0;j<n;j++)
		{
			if(langto(A[i][j]))
			{
				B[i]=B[i]+A[i][j];
			}
		}
	}
	int min=B[0];
	for(int t=1;t<m;t++)
	{
		if(B[t]<min)
		{
			min=B[t];
		}
	}
	return min;
}

	
