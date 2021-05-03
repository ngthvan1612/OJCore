#include <stdio.h>
int kiemTra (int A[], int n);
void main ()
{
	int A[100], n;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &A[i]);
	int kq = kiemTra (A, n);
	printf ("%d", kq );
}
int kiemTra (int A[], int n)
{
	int kq;
	for (int i = 0; i+2 < n; i++)
		if ((A[i]%2==0 && A[i+1]%2==1 && A[i+2]%2==0)|| (A[i]%2==1 && A[i+1]%2==0 && A[i+2]%2==1))
			kq = -1;
	for (i = 0; i+1 < n; i++)
		if ((A[i]%2==0 && A[i+1]%2==0) ||(A[i]%2==1 && A[i+1]%2==1))
				kq = i+1;
	return kq;			
}