#include<stdio.h>
int laNgTo(int x);
int tong(int A[][100], int m, int n);
void nhap(int A[][100], int &m, int &n);
void xuat(int x);
int main( )
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
	int kq=tong(A,m,n);
	xuat(kq);
	return 0;
}

int laNgTo(int x)
{
	if(x<2)
		return 0;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return 0;
	return 1;
}

int tong(int A[][100], int m, int n)
{
	int S[100];
	for(int i=0; i<m; i++)
	{
		int s=0;
		for(int j=0; j<n; j++)
			if(laNgTo(A[i][j])==1)
				s=s+A[i][j];
		S[i]=s;
	}
	
	int min = S[0];
	for(int k=1; k<m;k++)
		if(S[k]<min)
			min=S[k];
	return min;
}

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m;i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}

void xuat(int x)
{
	printf("%d",x);
}