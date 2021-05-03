#include <stdio.h>
int Xuly(int A[][100], int m, int n);
void nhap(int A[][100], int &m, int &n);
void xuat(int kq);
int ngto(int a);

void main()
{
	int m,n, A[100][100];
	nhap(A,m,n);
	int kq = Xuly(A,m,n);
	xuat(kq);
}
void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int ngto(int a)
{
	if(a==2) return 1;
	else if(a>2) 
	{
		for (int i=2; i<a;i++)
			if(a%i == 0) return 0;
		return 1;
	}
	else return 0;
}
int Xuly(int A[][100], int m, int n)
{
	int min;
	for(int a=0;a<m;a++)
	{
		int tong =0;
		for(int b=0; b<n;b++)
		{
			if(ngto(A[a][b])==1)
				tong += A[a][b];
		}
		if(tong !=0) min = tong ;
		break;
	}
	for(int i=0;i<m;i++)
	{
		int tong =0;
		for(int j=0; j<n;j++)
		{
			if(ngto(A[i][j])==1)
				tong += A[i][j];
		}
		if(tong ==0) return 0;
		else if(tong < min)
			min = tong;
	}
	return min;
}

