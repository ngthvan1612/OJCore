#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void Bai3(int n, int A[]);

int main()
{
	int n;
	int A[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	Bai3(n, A);
	return 0;
}
void Bai3(int n, int A[])
{
	for(int i = 0; i < n; i++)
	{
		if(A[i] % 2 != 0 && A[i+1] % 2 != 0 && (i+1) < n)
		{
			printf("%d", i+1);
			return;
		}
		else if(A[i] % 2 == 0 && A[i+1] % 2 == 0 && (i+1) < n)
		{
			printf("%d", i+1);
			return;
		}
	}
	printf("-1");
}