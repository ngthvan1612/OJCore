#include<stdio.h>

void nhap(int A[][100], int &m, int &n);
int tong_nguyen_to_min(int A[][100], int m, int n);
int laNguyenTo(int x);
void xuat(int kq);


void main()
{
	int A[100][100], m, n;
	nhap(A, m, n);
	int kq=tong_nguyen_to_min(A, m, n);
	xuat(kq);
}

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}

int tong_nguyen_to_min(int A[][100], int m, int n)
{
	int B[1000], nB=0, tong;
	for(int i=0; i<m; i++)
	{
		tong=0;
		for(int j=0; j<n; j++)
			if(laNguyenTo(A[i][j])==1)
				tong+=A[i][j];
		B[nB++]=tong;
	}
	int min=B[0];
	for(int k=0; k<nB; k++)
		if(B[k]<min)
			min=B[k];
	return min;
}

int laNguyenTo(int x)
{
	int dem=0;
	for(int i=1; i<=x; i++)\
		if(x%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}

void xuat(int kq)
{
	printf("%d", kq);
}