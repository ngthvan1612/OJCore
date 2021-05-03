#include<stdio.h>
void nhap(int &n, int A[]);
void main()
{
	int n,A[100];
	nhap(n,A);
	printf("-1");
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
}