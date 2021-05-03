#include<stdio.h>
void nhap(int A[][200], int &n, int &m);
int laSoNguyenTo(int A);
void soNguyenTo(int A[][200], int n, int m);

void main()
{
	int A[200][200];
	int n,m;
	nhap(A,n,m);
	soNguyenTo(A,n,m);
}
void nhap(int A[][200], int &n, int &m)
{
	scanf("%d%d", &n,&m);
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d", &A[i][j]);

		}
	}
}
int laSoNguyenTo(int A)
{
	int dem =0;
	for(int i =1;i<=A; i++)
	{
		if(A%i==0)
			dem = dem +1;
	}
	if(dem==2)
		return 1;
	else
		return 0;
}
void soNguyenTo(int A[][200], int n, int m)
{
	int s;
	int max = 10000000;
	for(int i = 0;i<n; i++)
	{
		s =0;
		for(int j =0;j<m;j++)
		{
			if(laSoNguyenTo(A[i][j])==1)
				s = s +A[i][j];
			
		}
		if(s<max)
		{
			max = s;
		}
	}
	printf("%d", max);
}
