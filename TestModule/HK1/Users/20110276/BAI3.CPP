#include <stdio.h>
void nhapmang(int A[],int &n);
void xuat(int x);
int xuli(int A[],int n);
int lasochan(int x);
int main()
{
	int n;
	int A[1000];
	nhapmang(A,n);
	int kq=xuli(A,n);
	xuat(kq);
	return 0;
}
void nhapmang(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}
int xuli(int A[],int n)
{
	int t=-1;
	for (int i=0;i<n-1;i++)
	{
		if (lasochan(A[i])==1)
		{
			if (lasochan(A[i+1])==1)
				return (i+1);
		}
		if (lasochan(A[i])==0)
		{
			if (lasochan(A[i+1])==0)
				return (i+1);
		}
	}
	return t;
}
int lasochan(int x)
{
	if (x%2==0)
		return 1;
	else return 0;
}
