#include <stdio.h>
#include <math.h>
#define size 100
void nhap(int A[],int &n);
int dem(int A[], int n);
void xuat (int kq);
void main ()
{
	int A[size];
	int n;
	nhap(A,n);
	int kq=dem(A,n);
	xuat (kq);
}
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int dem(int A[], int n)
{
	int demSL=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2!=0 && A[i+1]%2==0)
			demSL=demSL+1;
		//else if(A[i]%2==0 && A[i+1]%2!=0)
			//demSL=demSL+1;		
	}
	if(demSL==n/2)
		return -1;
	else 
		return i;
}
void xuat (int kq)
{
	printf ("%d",kq);
}