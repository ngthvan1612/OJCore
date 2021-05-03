#include<stdio.h>

void nhap(int A[][100], int m, int n);
int timMin(int A[][100], int m, int n);
int laNT(int A);

int main()
{
	int A[100][100], m, n;
	scanf("%d%d", &m, &n);
	nhap(A, m, n);
	int kq = timMin(A, m, n);
	printf("%d", kq);
	
	return 0;
}
void nhap(int A[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
}
int timMin(int A[][100], int m, int n)
{
	int kq = 20000;
	for(int i = 0; i < m; i++)
	{
		int t = 0;
		for(int j = 0; j < n; j++)
			if(laNT(A[i][j]))
				t = t + A[i][j];
		if(t <= kq)
			kq = t;
	}
	return kq;
}
int laNT(int A)
{
	int d = 0;
	for(int i = 1; i <= A; i++)
		if(A % i == 0)
			d++;
	if(d == 2)
		return 1;
	return 0;
}
