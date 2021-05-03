#include<stdio.h>

#define SIZE 100
int tong(int A[][SIZE], int m, int n);
void nhap(int A[][SIZE], int &m, int &n);
int laNT(int x);
void xuat(int kq);
void main()
{
	int A[SIZE][SIZE], m, n;
	nhap(A,m,n);
	int kq=tong(A,m,n);
	xuat(kq);
}
void nhap(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
void xuat(int kq)
{
	printf("%d", kq);
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
int tong(int A[][SIZE], int m, int n)
{
	int min;
	for(int x=0;x<m;x++)
	{
		int tong=0;
		for(int b=0; b<n;b++)
		{
			if(laNT(A[x][b])==1)
				tong+=A[x][b];
		}
		if(tong!=0) min=tong;
		break;
	}

	for(int i=0; i<m;i++)
	{
		int tong=0;
		for(int j=0; j<n;j++)
			if(laNT(A[i][j])==1)
				tong=tong+A[i][j];
	

			if(tong <min)
				min=tong;
		
	}
	return min;

}