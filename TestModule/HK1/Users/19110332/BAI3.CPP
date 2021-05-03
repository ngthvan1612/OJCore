#include<stdio.h>
int kt(int A[], int n);
int main()
{
	int n, vt=-1;
	int A[102];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
	printf("%d", kt(A, n));
	return 0;

}
int kt(int A[], int n)
{
	int temp=-1;
	for(int j =0; j<n-1; j++)
		if((A[j]%2==0 &&A[j+1]%2==0)||(A[j]%2!=0&&A[j+1]%2!=0))
			return j+1;
	return -1;
}
