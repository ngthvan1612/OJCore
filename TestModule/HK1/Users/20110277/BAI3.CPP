#include<stdio.h>
void input(int A[], int &n);
int tinh(int A[], int n);
void main()
{
	int A[100], n;
	input(A, n);
	int value = tinh(A, n);
	printf("%d", value);
}
void input(int A[], int &n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}
int tinh(int A[], int n)
{
	if (A[0] % 2 == 0)
	{
		for (int i = 0; i < n; i += 2)
			if (A[i] % 2 != 0)
			{
				return i;
				break;
			}
		for (i = 1; i < n; i += 2)
			if (A[i] % 2 == 0)
			{
				return i;
				break;
			}
	}
	else 
	{
		for (int i = 0; i < n; i += 2)
			if (A[i] % 2 == 0)
			{
				return i;
				break;
			}
		for (i = 1; i < n; i += 2)
			if (A[i] % 2 != 0)
			{
				return i;
				break;
			}
	}
	return -1;
}