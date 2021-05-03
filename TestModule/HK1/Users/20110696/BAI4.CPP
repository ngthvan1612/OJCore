#include<stdio.h>
#define SIZE 200
void nhap(int &m,int &n,int A[SIZE][SIZE]);
void solve(int m,int n,int A[SIZE][SIZE]);
int ktsongto(int x);

void main()
{
	int m,n;
	int A[SIZE][SIZE];
	nhap(m,n,A);
    solve(m,n,A);
}
void nhap(int &m,int &n,int A[SIZE][SIZE])
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void solve(int m,int n,int A[SIZE][SIZE])
{
	int min=0;
	for (int j=0;j<n;j++)
		if (ktsongto(A[0][j])==1)
			min+=A[0][j];
	for (int i=0;i<m;i++)
	{
		int tong=0;
		for (int j=0;j<n;j++)
		{
			if (ktsongto(A[i][j])==1)
				tong+=A[i][j];
		}
		if (tong<min)
			min=tong;
	}
	printf("%d",min);
}


int ktsongto(int x)
{
	int dem=0;
	for (int i=1;i<=x;i++)
		if (x%i==0)
			dem++;
	if (dem==2)
		return 1;
}
