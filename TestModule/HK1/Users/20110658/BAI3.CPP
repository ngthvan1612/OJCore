#include<stdio.h>
void xuat(int kq);
void nhap(int A[], int &n);
int xemxet(int A[], int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq = xemxet(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}
int xemxet(int A[], int n)
{
	int t;
	if(A[0]%2 == 0)
	{
		for(int i = 0; i < n-1; i++)
		{
			if(A[i]%2 == 0 && A[i+1]%2 == 1)
				t = -1;
			else
			{
				t =	i;
				break;
			}
		}
	}
	if(A[0]%2 == 1)
	{
		for(int i = 0; i < n-1; i++)
		{
			if(A[i]%2 == 1 && A[i+1]%2 == 0)
				t = -1;
			else
			{
				t = i;
				break;
			}
		}
	}
	return t;
}
void xuat(int kq)
{
	printf("%d", kq + 1);
}