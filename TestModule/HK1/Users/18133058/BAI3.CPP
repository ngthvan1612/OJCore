#include<stdio.h>
void nhap(int A[], int &n);
int laChanLe(int A, int B);
void chanLe(int A[], int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	chanLe(A,n);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i =0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
}
int laChanLe(int A, int B)
{
	if( (A%2==0) && (B%2==0))
		return 0;
	return 1;
	if( (A%2!=0) && (B%2!=0))
		return 0;
	return 1;		
}
void chanLe(int A[], int n)
{
	int x;
	int coChanLe =0;
	for(int i = n-1;i>=1;i--)
	{
		if(laChanLe(A[i],A[i+1])==1)
		{
			coChanLe = 1;
			x =-1;
		}
	}
	if(coChanLe ==0)
		printf("%d",A[0]);
	else
		printf("%d", x);
}