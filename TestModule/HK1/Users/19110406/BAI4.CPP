#include <stdio.h>
int laNguyenTo(int x);
void input(int A[][100],int &m,int &n);
int minSum(int A[][100],int m,int n);
int main()
{
	int A[100][100],n,m,flag;
	input(A,m,n);
	flag = minSum(A,m,n);
	printf("%d",flag);
	return 0;
}
int laNguyenTo(int x)
{
	if (x==2) return 1;
	for(int i=2;i<x;i++)
		if(x%i==0)
			return 0;
	return 1;
}
void input(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int minSum(int A[][100],int m,int n)
{
	int min=100*100,sum;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			
			if(laNguyenTo(A[i][j]))
			{
				sum+=A[i][j];
			}
			
		}
		if (sum<min)
		{
			min=sum;
		}
	}
	return min;
}