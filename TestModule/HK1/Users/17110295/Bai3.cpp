#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int check(int A[], int n);

void main()
{
	int A[100], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);

	printf("%d", check(A,n));
}

int check(int A[], int n)
{
	for(int i = 1;i < n ;i++)
	{
		int a = A[i] + A[i -1];
		if(a%2 == 0)
		{
			return i;
		}
	}
	return -1;
}