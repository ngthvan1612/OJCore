#include<stdio.h>
void nhap(int A[], int &n);
int kt(int A[],int n);
void xuat(int kq);
void main()
{
	int A[1000],n;
	nhap(A,n);
	int kq=kt(A,n);
	xuat(kq);

}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
int kt(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(A[i]%2==0 && A[i+1]%2>0 )
			A++;
			return -1;
		if(A[i]%2>0 && A[i+1]%2==0)
			A++;
		    return -1;
		if(A[i]%2==0 && A[i+1]%2==0 || A[i]%2>0 && A[i+1]%2>0)
			return i;
}
void xuat(int kq)
{
	printf("%d",kq);
}