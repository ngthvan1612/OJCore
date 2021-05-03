#include <stdio.h>
void nhap(int A[][100], int &m, int &n);
void main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
    int t=0;
	printf("%d",t);
}


void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}

