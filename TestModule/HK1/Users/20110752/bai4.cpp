#include<stdio.h>
void input(int A[][100], int &nA, int &mA)
{
	scanf("%d%d",&nA,&mA);
	for(int i=0;i<nA;i++)
	{
		for(int j=0;j<mA;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
int IsPrimeNumber(int x)
{
	int m=0;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		m++;
	}
	if(m==0 && x>=2)
	return 1;
	return -1;
}
void SplitSum(int A[][100], int nA, int mA, int B[], int &nB)
{
	nB=0;
	for(int i=0;i<nA;i++)
	{
		int sum=0;
		for(int j=0;j<mA;j++)
		{
			if(IsPrimeNumber(A[i][j])==1)
			sum+=A[i][j];
		}
		B[nB++]=sum;
	}
}
int FindMin(int A[], int n)
{
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		min=A[i];
	}
	return min;
}
void output(int x)
{
	printf("%d",x);
}
void main()
{
	int A[100][100],nA,mA,B[100],nB;
	input(A,nA,mA);
	SplitSum(A,nA,mA,B,nB);
	output(FindMin(B,nB));
}