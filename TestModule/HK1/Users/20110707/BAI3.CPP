#include <stdio.h>
void nhap(int &n, int A[]);
int xuly(int n, int A[]);
void xuat(int kq);
int cl(int n);
void main()
{
	int n,A[100];
	nhap( n, A);
	int kq=xuly(n,A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
int xuly(int n, int A[])
{
	int dem=0;
	int vt=0;
	for(int i=0;i<n;i=i++)
	{
		while (cl(A[i])!=cl(A[i+1]))
		{
			dem++;
			vt=i;
		}
	}
	if (dem==n-1)
		return -1;
	return vt;
}
void xuat(int kq)
{
	printf("%d", kq);
}
int cl(int n)
{
	if(n%2==0)
		return 0;
	return 1;
}