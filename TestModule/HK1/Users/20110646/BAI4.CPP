#include <stdio.h>
void nhap(int A[100][100],int n, int m);
int ktraSNT(int n);
int demso(int A[100][100], int n,int m);
int ktra(int A[100][100],int n,int m);
void xuat(int kq);
void main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int A[100][100];
	nhap(A,n,m);
	int kq=ktra(A,n,m);
	xuat(kq);
}
void nhap(int A[100][100],int n, int m)
{
	for (int i=0;i<n.i++)
	{
		for (int j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
	}
}
int ktraSNT(int n)
{
	int dem=0;
	for (int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if (dem==2)
	{
		return 1;
	}
	else return 0;
}
int demso(int A[100][100], int n,int m)
{
	int demSNT=0;
	for (int j=0;j<m;j++)
	{
		if (ktraSNT(A[i][j]==1)
		{
			demSNT++;
	}
}
	return demSNT;
}
int ktra(int A[100][100],int n,int m)
{
	int vitri=0;
	int dem=0;
	for (int i=0;i<n;i++)
	{
		dem=demso(A,i,m);
		vitri=i;
	}
    return vitri;
}
void xuat(int kq)
{
	printf("%d",kq);
}


