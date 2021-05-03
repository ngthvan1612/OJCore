#include<stdio.h>
#define SIZE 100
void nhap(int A[],int &n);
void chanLe(int A[], int n );
void xuat(int x);
void main()
{
	int A[SIZE],n;
	nhap(A,n);
	chanLe(A,n);
}
void nhap(int A[],int &n)
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
}
void chanLe(int A[], int n )
{
	for (int i =0; i<n;i++)
	{
		
		if (A[i]%2==0 && A[i+1]%2==0){
			xuat(i);
			break;
		}
		if (A[i]%2==1 && A[i+1]%2==0){
			xuat(i);
			break;}
		else
			xuat(-1);
		
	}
}
void xuat(int x)
{
	printf("%d ", x);
}