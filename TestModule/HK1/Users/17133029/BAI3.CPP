#include<stdio.h>
int Tinh(int A[], int n);
void xuat(int a);


void main()
{
	int A[100], n;
	int i=0;
	scanf("%d",&n);
	for(i; i<n;i++ )
		scanf("%d",&A[i]);
	int kq=Tinh(A,n);
	xuat(kq);
}
int Tinh(int A[], int n)
{
	int j=1;
	while(j<n-1)
	{
		if(A[j]>A[j+1] && A[j]>A[j-1] || A[j]<A[j+1] && A[j]<A[j-1])
			j++;
		else 
			return j;
	}
	if(j==n-1)
		return -1;
}
void xuat(int a)
{
	printf("%d",a);
}

