#include<stdio.h>
#define S 100
void nhap(int &m, int &n, int A[][S]);
int tongnhonhat(int m, int n, int A[][S]);
void xuat(int kq);
int tongcuadong(int m, int n, int A[][S]);
void main()
{
	int m,n,A[S][S];
	nhap(m,n,A);
	int kq= tongnhonhat(m,n,A);
	xuat(kq);
}
void nhap(int &m, int &n, int A[][S])
{
	scanf("%d%d",&m,&n);
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",A[i][j]);
}
int tongnhonhat(int m, int n, int A[][S])
{
	int tong;
	for (int i=0; i<m; i++)
		tong=tongcuadong(m,n,A[i][j]);
		int min;
		min=tongcuadong(m,n,A[0][j]);
	for( i=0; i<m; i++)
	{
		if (tongcuadong(m,n,A[i+1][j])<tongcuadong(m,n,A[i][j]))
			tongcuadong(m,n,A[i+1][j]);
		else 
			tongcuadong(m,n,A[i][j]);
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}
int tongcuadong(int m, int n, int A[][S])
{
	int i=m;
	int tong=0;
		for(int j=0; j<n; j++)
			tong=tong+A[i][j];
		return tong;
}
			


