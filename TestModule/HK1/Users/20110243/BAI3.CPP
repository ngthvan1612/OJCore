#include <stdio.h>
void nhap(int &n, int A[]);
int tinh(int A[], int n);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kq = tinh(A, n);
	printf("%d", kq);
}

void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

int tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if (A[i] % 2 == 0)
			{
				if (A[j] % 2 == 0)
					return j;
			}
			else
			{
				if (A[j] % 2 ==1)
					return j;
			}
			break;
		}
	}
	return -1;
}