#include<stdio.h>
void main()
{
	int A[100][100];
	int m,n;
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n ;j++)
			scanf("%d", &A[i][j]);
	}
	printf("0");
}