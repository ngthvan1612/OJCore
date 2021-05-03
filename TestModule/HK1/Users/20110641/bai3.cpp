#include <stdio.h>
void nhap (int &n, int A[]);
int kiemtra (int n, int A[]);
void xuat (int kq);
void main ()
{
	int n, A[101];
	nhap (n, A);
	int kq=kiemtra(n, A);
	xuat (kq);
}
void nhap (int &n, int A[])
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
int kiemtra (int n, int A[])
{
	int t=-1;
	if (A[0]%2==0)
		for (int i=0; i<n; i+=2)
		{
			if (A[i]%2!=0)
			{
				t=i;
				break;
			}
			if (A[i+1]%2==0)
			{
				t=i;
				break;
			}
		}
	if (t==-1)
		if (A[0]%2!=0)
			for (int i=0; i<n; i+=2)
			{
				if (A[i]%2==0)
				{
					t=i;
					break;
				}
				if (A[i+1]%2!=0)
				{
					t=i;
					break;
				}
			}
	return t;
}
void xuat (int kq)
{
	printf ("%d", kq);
}