#include <stdio.h>
void nhap(int A[][100],int &m,int &n);
int XuLy(int A[][100],int m,int n);
int nguyenTo(int a);
void xuat(int kq);
void main()
{
	int m,n;
	int A[100][100];
	nhap(A,m,n);
	int kq = XuLy(A,m,n);
	xuat(kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &A[i][j]);
}
int XuLy(int A[][100],int m,int n)
{
	int Tmp[100];
	int nTmp=0;
	for(int i=0;i<m;i++)
	{
		int s = 0;
		for(int j=0;j<n;j++)
		{
			if(nguyenTo(A[i][j]) == 1)
				s+=A[i][j];
		}
		Tmp[nTmp++] = s;
	}
	int min = Tmp[0];
	for(int k=1;k<nTmp;k++)
	{
		if(Tmp[k] < Tmp[k-1])
			min = Tmp[k];
	}
	return min;
}
int nguyenTo(int a)
{
	int d=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
			d++;
	}
	if(d==2)
		return 1;
	else
		return 0;
}
void xuat(int kq)
{
	printf("%d ", kq);
}
