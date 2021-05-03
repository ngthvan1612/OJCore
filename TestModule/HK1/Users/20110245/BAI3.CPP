#include <stdio.h>
#define SIZE 100

void nhap(int &n, int A[]);
int xuli(int n, int A[], int B[]);
void xuat(int kq);

void main()
{
	int A[SIZE],B[SIZE];
	int n;
	nhap(n,A);
	int kq = xuli(n,A,B);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int xuli(int n, int A[], int B[])
{
	for (int i=0;i<n;i++)
	{
		int dem=0;
		if (((A[i]%2==0)&&(B[i]%2!=0))||((A[i]%2!=0)&&(B[i]%2==0)))
		{
			dem++;
			return -1;
		}
		return dem;
	
	}
}
void xuat(int kq)
{
	printf("%d",kq);
}




