#include <stdio.h>
void nhap(int A[], int &n);
int checkchanle( int A[], int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	printf("%d", checkchanle(A,n));

}
void nhap(int A[], int &n)
{	
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

}
int checkchanle( int A[], int n){
	
	for ( int i=1;i<n;i++)
	{
		if(A[i-1]%2==0&&A[i]%2==0) return i;
		if (A[i-1]%2!=0&&A[i]%2!=0) return i;
	}

	return -1;
}