#include<stdio.h>

void nhap(int A[], int &n);
int tinh_chan_le(int A[], int n);
void xuat(int kq);

void main()
{
	int A[1000], n;
	nhap(A, n);
	int kq=tinh_chan_le(A, n);
	xuat(kq);
}

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}

int tinh_chan_le(int A[], int n)
{
	int dem=0;
	for(int i=0; i<n-1; i++)
		if((A[i]%2==0 && A[i+1]%2!=0) || (A[i]%2!=0 && A[i+1]%2==0))
			dem++;
		else
		{
			int x=i+1;
			return  x;
		}
	if(dem==n-1)
		return -1;
}

void xuat(int kq)
{
	printf("%d", kq);
}