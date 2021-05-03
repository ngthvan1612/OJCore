#include<stdio.h>
int KiemTraChanLe(int A[], int n);

int main()
{
	int A[100],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf ("%d",&A[i]);
	int kq=KiemTraChanLe(A,n);
	printf ("%d",kq);
	return 0;
}
int KiemTraChanLe(int A[], int n)
{
	int dem=0;;
	for (int i=0;i<n-1;i=i++)
		if ((A[i]+A[i+1])%2==0)
			return i+1;
	return -1;
}
