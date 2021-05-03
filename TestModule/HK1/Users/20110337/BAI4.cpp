#include<stdio.h>
int tong_hang_nho_nhat(int A[100][100], int m, int n);
int min(int B[], int m);
void nhapMang(int A[100][100], int &m, int &n);
void xuat(int x);
int la_NT(int x);

void main()
{
	int A[100][100], m, n;
	nhapMang(A,m,n);
	int kq = tong_hang_nho_nhat(A,m,n);
	xuat(kq);
}
int tong_hang_nho_nhat(int A[100][100], int m, int n)
{
	int B[100];
	for(int i=0; i<m; i++)
	{
		int t = 0;
		for(int j=0; j<n; j++)
		{
			if(la_NT(A[i][j]))
			{
				t = t + A[i][j];
			}
			B[i]=t;
		}
	}
	int kq = min(B,m);
	return kq;
}
int min(int B[], int m)
{
	int t = B[0];
	for(int i=1; i<m; i++)
		if(t > B[i])
			t=B[i];
	return t;
}
void nhapMang(int A[100][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&A[i][j]);
}
void xuat(int x)
{
	printf("%d",x);
}
int la_NT(int x)
{
	int d = 0;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
			d++;
	}
	if(d==2)
		return 1;
	return 0;
}
