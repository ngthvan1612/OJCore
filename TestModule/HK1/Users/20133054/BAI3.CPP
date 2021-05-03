#include <stdio.h>
void nhap(int A[], int &n);
void xuat(int kq);
int chanle(int A[], int n);
void main()
{
	int n;
	int A[100];
	nhap(A,n);
	int kq=chanle(A,n);
	xuat(kq);
}

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}

void xuat(int kq)
{
	printf("%d", kq);
}


int chanle(int A[], int n)
{
    if (A[0]%2==0)
        for (int i=1; i<n;i++)
		{
			if (i%2==1 && A[i] %2==0)
				   return i;
			if (i%2==0 && A[i] %2==1)
				   return i;
		}
    if (A[0]%2==1)
		for (int i=1; i<n;i++)
		{
			if (i%2==1 && A[i] %2==1)
				   return i;
			if (i%2==0 && A[i] %2==0)
				   return i;
		}
		return -1;
}
