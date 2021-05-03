#include<stdio.h>
#define SIZE 100
void nhap(int A[][SIZE],int &m,int &n);
int xuly(int m,int n,int B [][SIZE]);
int laNT(int x);
int timMin(int A[],int n);
void main()
{
	int A[SIZE][SIZE];
	int m,n;
	nhap(A,m,n);
	int kq=xuly(A,m,n);
	printf("%d",kq);
}

int xuly(int A[][SIZE],int m,int n)
{
	int sumNT[SIZE];
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
			if(laNT(A[i][j]))
				sum=sum+A[i][j];
	sumNT[i]=sum;
	}
	int min=timMin(sumNT,n);
	return min;
}

int laNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}

int timMin(int A[],int n)
{
	int min=A[0];
	for(int i=0;i<n;i++)
		if(A[i]<min)
			min=A[i];
	return min;
}
void nhap(int A[][SIZE],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}