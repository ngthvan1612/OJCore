#include  <stdio.h>
#define    size  100
void  nhap (int A[size][size], int m,int  n);
void xuat ();
void  main ()
{
	int  A[size][size];
	int  m,n;
	nhap (A,m,n);
	xuat ();
	
}
void  nhap (int A[size][size], int m,int  n)
{
	scanf("%d%d",&m, &n);
	for (int i=0;i<m;i++)
		for (int    j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat ()
{
	printf("12");
}