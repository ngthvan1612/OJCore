#include<stdio.h>
int kiemtra(int A[], int n)
{
	for (int i=1;i<n;i++)
		if ((A[i]%2==0 && A[i-1]%2==0) || (A[i]%2!=0 && A[i-1]%2!=0)) return i;
	return -1;
}
int main()
{
	int n,A[200];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
	int kq=kiemtra(A,n);
	printf("%d",kq);
	return 0;
}
