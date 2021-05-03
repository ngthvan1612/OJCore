#include <stdio.h>

void NhapMg(int A[], int& n)
{
	scanf("%d", &n);
	for ( int i=0; i<n; i++)
		scanf("%d", &A[i] );
}

int  ktras(int n, int A[100])
{
	int ktra;
	
	for (int i = 0; i < n; i++)
	{
		if (((A[i] % 2 == 0) && (A[i + 1] %2 == 0))|| ((A[i] % 2 != 0) && (A[i + 1] %2  != 0)))
			ktra = i;
		else
			ktra = -1;
	}
	return ktra;
}
void main ()
{
	int A[100], n;
	NhapMg(A, n);
	printf("%d", ktras(n, A));
}
