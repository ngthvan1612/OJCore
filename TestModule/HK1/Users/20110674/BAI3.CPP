#include<stdio.h>
void nhapMang(int A[], int &n);
int xuli(int A[], int n);
void main()
{
	int A[1000],n;
	scanf("%d", &n);
	nhapMang(A,n);
	int kt=xuli(A,n);
	printf("%d", kt);
}
void nhapMang(int A[], int &n)
{
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
int xuli(int A[], int n)
{
	int d=-1;
	for(int i=0;i<n-1;i++)
		if((A[i]%2==0)&&(A[i+1]%2==0))
			return i+1;
		if((A[i]%2!=0)&&(A[i+1]%2!=0))
			return i+1;
	return d;
}