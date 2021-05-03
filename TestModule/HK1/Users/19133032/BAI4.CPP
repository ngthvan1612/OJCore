#include <stdio.h>
int laNT (int n);
int tongDong (int A[][100], int m, int n);
int tongNhoNhat (int A[][100], int m, int n);
void main ()
{
	int A[100][100], m, n;
	scanf ("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf ("%d", &A[i][j]);
	int kq = tongNhoNhat (A, m, n);
	printf ("%d", kq);
}
int laNT (int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
		if (n%i == 0)
			d++;
	if (d == 2)
		return 1;
	return 0;
}
int tongDong (int A[][100], int m, int n)
{
	int S = 0;
	for (int j = 0; j < n; j++)
		if (laNT(A[m][j]))
			S = S + A[m][j];
	return S;
}
int tongNhoNhat (int A[][100], int m, int n)
{
	int kq = tongDong(A, 0, n);
	for (int i = 1; i < m; i++)
		if (tongDong(A, i, n) < kq)
			kq = tongDong (A, i, n);
	return kq;
}