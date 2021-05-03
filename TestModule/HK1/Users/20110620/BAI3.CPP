#include <stdio.h>
void nhap (int &n, int A[]);
int chan(int x);
int bai_lam (int n, int A[]);
void xuat (int x);
void main ()

{
	int n, A[100];
	nhap (n, A);
	
	int kq = bai_lam(n, A);
	xuat (kq);
}
void nhap (int &n, int A[])
{
	scanf ("%d", &n);
	int i;
	for (i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
int chan(int x)
{
	if (x%2==0)
		return 1;
	return 0;
}
int bai_lam (int n, int A[])
{
	int i;
	for (i=0; i<n-1;i++)
	{
		if (chan(A[i])==1)
			if (chan(A[i+1])==1)
				return i+1;

		else if (chan(A[i])==0)
			{
				if (chan(A[i])==0)
					return i+1;
			}
	}
	return -1;
}
void xuat (int x)
{
	printf ("%d", x);
}