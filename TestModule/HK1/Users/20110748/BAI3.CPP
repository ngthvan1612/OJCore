# include <stdio.h>
void nhap (int A[], int&n);
void xuat (int kq);
int kiemtra (int a);
int chanle (int A[], int n);
void main ()
{
	int A[99], n;
	nhap (A, n);
	int kq= chanle(A,n);
	xuat (kq);
}
void nhap (int A[], int&n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf ("%d", &A[i]);
	}
}
void xuat (int kq)
{
	if (kq==0) printf ("-1");
	else printf ("%d", kq);
}
int kiemtra(int a)
{
	if (a%2==0) return 1;
	return 0;
}
int chanle (int A[], int n)
{
		int vtri=0;
		for (int i=0; i<n-1; i++)
		{
			if ( kiemtra (A[i]) == kiemtra(A[i+1])) return i+1;
		}
		return vtri;
}