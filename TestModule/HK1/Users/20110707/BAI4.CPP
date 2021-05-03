#include <stdio.h>
void nhap(int &m, int&n, int A[][100]);
int xuly(int m,int n, int A[][100]);
void xuat(int kq);
int nt(int a);
void main()
{
	int m,n,A[100][100];
	nhap(m,n,A);
	int kq=xuly(m,n,A);
	xuat(kq);
}
void nhap(int &m, int&n, int A[][100])
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}
int xuly(int m,int n, int A[][100])
{
	int tong=0, dem=0;
	for (int k=0;k<n;k++)
		if(nt(A[0][k])==1)
			dem=dem+A[0][k];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(nt(A[i][j])==1)
				tong=tong+A[i][j];
		}
		if (tong<dem)
			dem=tong;
	}
	return dem;
}
void xuat(int kq)
{
	printf("%d", kq);
}
int nt(int a)
{
	int dem=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
			dem++;
	}
	if (dem==2)
		return 1;
	return 0;
}