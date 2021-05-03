#include<stdio.h>
#include<math.h>
int Ktra( int A[], int n);
void main()
{
	int A[100], n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);
	printf("%d", Ktra(A,n));
}
int Ktra( int A[], int n)
{
	for(int i=0;i<n-1;i++)
		if((A[i] % 2 == 0 && A[i+1] % 2 == 0) || (A[i+1] % 2 != 0 && A[i] % 2 != 0))
		{
			return i+1;
			break;
		}
		return -1;
}