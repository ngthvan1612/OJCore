#include<stdio.h>
void xuat(int k);
void nhapm(int A[] , int&n);
int test(int A[] , int&n);

void main()
{
	int A[100],n;
	nhapm(A,n);
	int k=test(A,n);
	xuat(k);
}
void nhapm(int A[] , int&n)
{
	scanf("%d ",&n);
	for ( int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int test(int A[] , int&n)
{
	for ( int i=0;i<n;i++)
	{
		if(((A[i]%2==0) && (A[i+1]%2==1))||((A[i]%2==1) && (A[i+1]%2==0)))
			return -1;
		else {
				return i;
				break;
			}
		if((A[i]%2==1)&& (A[i+1]%2==0))
				return 2;
		else {
				return i;
				break;
			}
	}
}
void xuat(int k)
{
	printf("%d" , k);
}

