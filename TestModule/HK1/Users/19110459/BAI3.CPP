#include <stdio.h>
void xuat(int kq);
void nhap(int A[], int &n);
int Xuly(int A[], int n);

void main()
{
	int n, A[100];
	nhap(A,n);
	int kq = Xuly(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n;i++)
		scanf("%d", &A[i]);
}
int Xuly(int A[], int n)
{
	for(int i=0; i<n/2;i++)
	{
		if(A[0]%2==0)
		{
			if (A[2*i+1] %2 == 0) return 2*i+1;
			if(A[2*i+2] %2 != 0) return 2*i+2;
		}
		else if(A[0]%2 != 0)
		{
			if (A[2*i+1] %2 != 0) return 2*i+1;
			if(i!=n/2-1)  
				if(A[2*i+2] %2 == 0) return 2*i+2;
		}
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}
