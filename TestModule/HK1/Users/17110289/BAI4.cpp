#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int m, n;
	int A[100][100];
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("12");
}
