#include <stdio.h>

bool check(int x)
{
	if(x<2)
		return false;
	else
	{
		for(int i=2;i<x;i++)
			if(x%i==0)
				return false;
			return true;
	}
}

int Min(int a,int b)
{
	if(a>b)
		return b;
	return a;
}

int main()
{
	int m,n,A[111][111];
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	int c[111];
	for(i=0;i<m;i++)
	{
		int t=0;
		for(j=0;j<n;j++)
		{
			if(check(A[i][j])==true)
			{
				t=t+A[i][j];
			}
		}
	}
	int min=c[0];
	for(i=0;i<m;i++)
		min=Min(min,c[i]);
	printf("%d",min);
	return 0;
}