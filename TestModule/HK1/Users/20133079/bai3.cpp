#include<stdio.h>

void nhap(int A[], int &nA)
{
	scanf("%d", &nA);
	for (int i = 0; i < nA; i++)
		scanf("%d", &A[i]);
}

int tinhToan(int A[], int nA)
{
	int dir;
	if (A[0] % 2 == 0)
		dir = 1;
	else
		dir = -1;
	for (int i = 1; i < nA; i++)
	{
		if ((A[i] % 2 == 0 && dir != 1) || (A[i] % 2 != 0 && dir == 1))
		{
			dir = dir*(-1);
		}
		else
			return i;
	}
	return -1;
}

void main()
{
	int A[100], nA;
	nhap(A, nA);
	int kq = tinhToan(A, nA);
	printf("%d", kq);
}