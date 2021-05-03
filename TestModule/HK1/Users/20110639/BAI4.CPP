#include<stdio.h>
#define size 100
void nhap(int A[][size], int &m, int &n);
int SNT(int x);
int Tong(int A[][size], int m, int n);
int TimMin(int A[], int m);

int main()
{
	int A[size][size], m, n;
	nhap(A, m, n);
	int kq=Tong(A, m, n);
	printf("%d", kq);
	return 0;
}
void nhap(int A[][size], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
int SNT(int x)
{
	int d=0;
	for(int i=1; i<=x; i++)
		if(x%i==0)
			d++;
		if(d==2)
			return 1;
		return 0;
}
int Tong(int A[][size], int m, int n)
{
	int TSN[size], t=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(SNT(A[i][j]))
				t+=A[i][j];
		}
			TSN[i]=t;
	}
	int min=TimMin(TSN, m);
	return min;
}
int TimMin(int A[], int m)
{
	int min=A[0];
	for(int i=0; i<m; i++)
		if(A[i]<min)
			min=A[i];
		return min;
}