#include<stdio.h>

int xuly(int A[], int n);

int main()
{
	int n, A[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	int kq = xuly(A, n);
	printf("%d", kq);
		
	return 0;
}
int xuly(int A[], int n)
{
	for(int i = 0; i < n - 1; i++)
		if( (A[i] % 2 == 0 && A[i+1] % 2 == 0) || (A[i] % 2 != 0 && A[i+1] % 2 != 0) )
			return i + 1;
	return -1;		 
}
