#include<stdio.h>
void xuat(int x);
void nhap(int A[], int &n);
int tinh(int A[], int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=tinh(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int tinh(int A[], int n)
{
	int i,t=0;
	for(i=0;i<n;i++)
	{
		t=0;
		if(A[i]%2==0&&A[i+1]%2!=0) 
			t=-1;
		
	else
	if(A[i]%2!=0&&A[i+1]%2==0)
	{
		
			t=-1;
	}
			else 
				return  i;
		

	}
	return t;
}
void xuat(int x)
{
	printf("%d",-1);
}