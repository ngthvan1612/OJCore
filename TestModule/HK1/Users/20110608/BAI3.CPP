#include<stdio.h>

void Nhap(int A[], int &n);
int check(int A[], int n);
void Xuat(int x);

void main()
{
	int A[100];
	int n;
	int kq=check(A,n);
	Xuat(kq);
}

void Nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0;i<n;++i)
		scanf("%d", &A[i]);
}

int check(int A[], int n)
{
	for(int i=0;i<n;++i)
		if(A[i]%2 ==0)
			if(A[i+1]%2 !=0) 
				return -1;
			return i;
}
void Xuat(int x)
{
	printf("%d", x);
}

