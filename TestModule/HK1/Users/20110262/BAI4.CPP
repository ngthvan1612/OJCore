#include <stdio.h>
#include <math.h>
#define N 100
void input (int &m, int &n, int a[][N]);
void output (int m, int n, int a[][N]);

int main ()
{
	int m, n, a[N][N];
	input (m, n, a);
	output (m, n, a);
	return 0;
}

void input (int &m, int &n, int a[][N])
{
	scanf ("%d %d", &m, &n);
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++)
			scanf (" %d", &a[i][j]);
}

void output (int m, int n, int a[][N])
{
	int b[N];
	for (int i=1; i<=m; i++)
	{
		int s=0;
		for(int j=1; j<=n; j++)
		{
			int t=0;
			for (int k=1; k<=a[i][j]; k++)
				if (a[i][j]%k==0)
					t++;
				if (t==2)
					s=s+a[i][j];
		}
		b[i]=s;
	}
	int min=b[1];
	for (int k=1; k<=m; k++)
		if (b[k]<min)
			min=b[k];
	printf ("%d", min);
}