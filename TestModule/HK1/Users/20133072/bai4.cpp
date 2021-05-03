#include<stdio.h>
int sont(int A[][100],int j)
{
	int dem=0;
	for (int z=2;z<A[0][j];z++)
	{	if(A[0][j]%z==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}
int sont(int A[][100],int i,int j)
{
	int dem=0;
	for (int z=2;z<A[i][j];z++)
	{	if(A[i][j]%z==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}
int tinh(int  A[][100],int m,int n)
{
	int min;
	for(int j=0;j<n;j++)
	{	if(sont(A,0,j))
			min=min+A[0][j];
	}
	int tong=0;
	for(int i=1;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(sont(A,i,j))
			tong=tong+A[i][j];
		}
		if (min>tong)
			min=tong;
	}
	return min;
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=tinh(A,m,n);
	xuat(kq);
}