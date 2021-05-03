#include<stdio.h>

void main()
{
	int A[6];
	nhap(A);
	int k=tinh(A);
	xuat(k);
}
void nhap( int A[])
{
	for(int i=0;i<6;i++)
		scanf("%d",&A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}