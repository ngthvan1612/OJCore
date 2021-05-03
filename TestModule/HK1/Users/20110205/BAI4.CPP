#include <stdio.h>
 int tongNT (int A[][100],int m, int n ,int &B[]);
void nhapMang (int A[][100],int &m, int &n);
int laNT(int n);
void xuat (int x);
void main ()
{
	int A[100][100],B[100];
	int m,n;
	nhapMang(A,m,n);
	int kq=tongNT(A,m,n,B);
	xuat (kq);
}
void nhapMang (int A[][100],int &m, int &n)
{
	scanf ("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf ("%d",&A[i][j]);
}
void xuat (int x)
{
	printf ("%d",x);
}
int laNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		{
			if (n%i==0)
			dem++;
		}
	if (dem==2) return 1;
	return 0;
}
int tongNT (int A[][100],int m, int n, int &B[] )
{
	int k=0;
	int sum=0;
	for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
				if (laNT(A[i][j])==1)
							B[k++]+=A[i][j];
		}
int min=B[0];
	for (k=0;k<m;k++)
		{
			if (B[k]<B[k+1])
			min=B[k+1];
			return min;
		}


}