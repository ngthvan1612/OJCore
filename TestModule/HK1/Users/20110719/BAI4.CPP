#include <stdio.h>
void nhap( int A[][100], int m, int n);
int tongNTdong(int A[][100], int m, int n);
int laNT(int x);
void main ()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int A[100][100];
	nhap(A,m,n);
	int kq= tongNTdong(A,m,n);
	printf("%d",kq);
}
int tongNTdong(int A[][100], int m, int n)
{
	int tong;
	int min=100000;
	for( int i=0;i<m;i++)
	{
		tong=0;
		for( int j=0;j<n;j++)
		{
			if(laNT(A[i][j]))
				tong+=A[i][j];
		}
		if(tong<min)
			min=tong;
	}
	if(min!=100000)
		return min;
	else
		return 0;

}
int laNT(int x)
{
	int dem=0;
	for( int i=1;i<=x;i++)
		if(x%i==0)
			dem++;
    if(dem==2)
		return 1;
	return 0;
}

void nhap( int A[][100], int m, int n)
{
	for( int i=0;i<m;i++)
		for( int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
