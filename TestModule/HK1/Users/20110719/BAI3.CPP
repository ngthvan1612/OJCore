#include <stdio.h>
void nhap(int A[], int n);
int chanLeXenKe(int A[], int n);
void main ()
{
	int n;
	scanf("%d",&n);
	int A[100];
	nhap(A,n);
	int kq=chanLeXenKe(A,n);
	printf("%d",kq);
}
int chanLeXenKe(int A[], int n)
{
    int dem=0;
	for(int i=0;i<n-1;i++)
	{
		if((A[i]%2==0 && A[i+1]%2!=0) || (A[i]%2!=0 && A[i+1]%2==0))
			dem++;
		else
			return i+1;
	}
	if(dem==n-1)
		return -1;
}

void nhap(int A[], int n)
{
	for( int i=0;i<n;i++)
		 scanf("%d",&A[i]);
}