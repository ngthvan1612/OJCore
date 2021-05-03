#include<stdio.h>
void nhapMang(int A[][100],int m,int n);
int checkSNT(int n);
void xuliDulieu(int A[][100],int m,int n);
int timMinMang(int B[],int n);
void main() {
	int A[100][100];
	int m = 0,
		n = 0;
	scanf("%d %d",&m,&n);
	nhapMang(A,m,n);
	xuliDulieu(A,m,n);		
}
void nhapMang(int A[][100],int m,int n)
{
	for(int i= 0; i < m ;i++)
	{
		for(int j = 0;  j < n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
void xuliDulieu(int A[][100],int m,int n)
{
	int B[100] = {0},
		nB = 0;
	
	for(int i = 0;i < m;i++)
	{
		int sum = 0;
		for(int j = 0; j < n; j++)
		{
			if(checkSNT(A[i][j]) == 1)
			{
				sum+= A[i][j];
			}
		}
		B[nB] = sum;
		nB++;
	}
	int kq = timMinMang(B,nB);
	printf("%d",kq);
}
int checkSNT(int n)
{
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		if (n % i == 0)
			sum+=1;
	}
	if(sum == 2)
		return 1;
	else
		return 0;
}
int timMinMang(int B[],int n)
{
	int min = B[0];
	for(int i =0;i < n;i++)
	{
		if(B[i]	< min)
			min = B[i];
	}
	return min;
}