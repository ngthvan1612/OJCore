#include <stdio.h>
void nhap( int A[100][100], int m, int n);
int nguyento( int x);
void xuat( int A[100][100], int m, int n);
void main()
{
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int A[100][100];
	nhap(A,m,n);
	xuat(A,m,n);
}

void nhap( int A[100][100], int m, int n)
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
int nguyento( int x)
{
	int dem=0;
	if (x<=1)
		return 0;
	for( int i=1; i<=x; i++)
		if(x%i==0)
			dem=dem+1;
	if(dem==2)
		return 1;
	else
		return 0;
}

void xuat( int A[100][100], int m, int n)
{
	int B[100];
	for(int i=0; i<m; i++)
	{
		printf("Dong %d: ", i);
		int tong=0;
		for(int j=0; j<n; j++)
		{
			if(nguyento(A[i][j])==1)
			{
				tong=tong+A[i][j];
				printf("%d ", A[i][j]);
				if(i<(m-1))
					printf("+ ");
				else
					printf("= ");
			}
		}
		printf("%d", tong);
		B[i]=tong;
		printf("\n");
	}
	int min=B[0];
	for( i=2; i<m; i++)
		if(B[i]<min)
			min=B[i];
	printf("tong nho nhat la %d", min);

}
