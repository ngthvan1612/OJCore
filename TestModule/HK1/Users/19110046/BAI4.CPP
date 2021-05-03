#include<stdio.h>
#define SIZE 100

void Nhap(int A[][SIZE],int &m,int &n);
int Xuly(int A[][SIZE],int m,int n);
int TimMin(int B[],int n);

void main()
{
	int A[SIZE][SIZE],m,n;
	Nhap(A,m,n);
	int kq=Xuly(A,m,n);
	printf("%d",kq);
}


void Nhap(int A[][SIZE],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int SoNT(int x)
{
	int dem=0;
	for(int i=2;i<=x;i++)
	{
		if(x%i==0)
			dem=dem+1;
	}
	if(dem==1)
		return 1;
	else return 0;
}
int Xuly(int A[][SIZE],int m,int n)
{
	int B[SIZE];
	int s=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(SoNT(A[i][j]))
				s=s+A[i][j];
			else s=s+0;
		}
			B[i]=s;
			s=0;
	}
	int min=TimMin(B,m);
	return min;
}
int TimMin(int B[],int n)
{
	int min=B[0];
	for(int i=0;i<n;i++)
		if(B[i]<min)
			min=B[i];
	return min;
}