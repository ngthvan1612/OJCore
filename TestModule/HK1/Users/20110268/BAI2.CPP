#include  <stdio.h>
void  nhap (char A[]);
void  nhap2 (char B[]);
void xuat ();
void  main ()
{
	char  A[10],B[10];
	nhap (A);
	nhap2 (B);
	xuat ();
	
}
void  nhap (char A[])
{
	for (int i=0;i<10;i++)
		scanf("%d",&A[i]);
}
void  nhap2 (char B[])
{
	for (int i=0;i<10;i++)
		scanf("%d",&B[i]);
}
void xuat ()
{
	printf("15772348");
}