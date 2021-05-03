#include <stdio.h>

void nhapMang(int A[][100],int &m,int &n);
int tinhTongCacSoNguyenToTrongDong(int A[][100],int i, int n);
int laNT(int n);
void main()
{
	int m,n;
	int A[100][100];
	nhapMang(A,m,n);
	int kq = tinhTongCacSoNguyenToTrongDong(A,0,n);
	for(int i = 1;i < m ; i ++)
	{
		int temp = tinhTongCacSoNguyenToTrongDong(A,i,n);
		if(temp < kq)
		{
			kq = temp;
		}
	}
	printf("%d",kq);
}
int tinhTongCacSoNguyenToTrongDong(int A[][100],int i, int n)
{
	int kq = 0;
	for(int j = 0;j < n; j++)
	{
		if(laNT(A[i][j]) == 1)
		{
			kq = kq + A[i][j];
		}
	}
	return kq;
}
int laNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem=dem+1;
	if(dem==2)
		return 1;
	return 0;
}

void nhapMang(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i = 0 ; i < m; i++)
	{
		for(int j = 0;j < n; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
