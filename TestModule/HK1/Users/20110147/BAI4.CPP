#include<stdio.h>
#define SIZE 200
void nhap(int A[][SIZE], int &m, int &n);
int SNT(int n);
int min(int A[][SIZE], int m, int n);
void xuat(int kq);
void main()
{
	int m,n;
	int A[SIZE][SIZE];
	nhap(A,m,n);
	int kq=min(A,m,n);
	xuat(kq);
}
void nhap(int A[][SIZE], int &m, int &n)
{
	scanf("%d%d",&m, &n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int SNT(int n)
{
	int t=0;
	for (int i=1;i<=n;i++)
		if (n%i==0)
			t++;
	if (t==2)
		return 1;
	else return 0;
}
int min(int A[][SIZE], int m, int n)
{
	int min=0;
	for (int j=0;j<n;j++)
		if (SNT(A[0][j])==1)
				min=min+A[0][j];
	for (int i=0; i<m;i++)
	{
		int t=0;
		for (int j=0;j<n;j++)
		{
			if (SNT(A[i][j])==1)
				t=t+A[i][j];
		}
		if (t<min)
			min=t;
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}
		

