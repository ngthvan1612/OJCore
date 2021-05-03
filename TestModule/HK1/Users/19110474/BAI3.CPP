#include <stdio.h>
#include <math.h> 
void nhap(int A[], int &n);  
int ketqua(int A[], int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ketqua(A,n);
	printf("%d",kq);
}
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
			scanf("%d",&A[i]);
}
int ketqua(int A[], int n)
{
	int kq;
	for (int i=0;i<n;i++)
	{
		if(A[i]%2==0 && A[i+1]%2==1 || A[i]%2==1 && A[i+1]%2==0)
			kq=-1;
		 if(A[i]%2==0 && A[i+1]%2==0 || A[i]%2==1 && A[i+1]%2==1)
			kq=i+1;
	}
	return kq;
}
