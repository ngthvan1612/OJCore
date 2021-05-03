#include  <stdio.h>
void  nhap (int A[], int n);
void xuat ();
void  main ()
{
	int  A[100],n;
	nhap (A,n);
	xuat ();
	
}
void  nhap (int A[], int n)
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat ()
{
	printf("-1");
}