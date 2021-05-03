#include<stdio.h>
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int tinh(int A[],int n)
{
	if(n>0)
	return 1;
}
void xuat(int kq)
{
	if(kq==1)
	printf("-1");
}
int main ()
{
	int A[200];
	int n;
	nhap(A,n);
	int kq=tinh(A,n);
	xuat(kq);
	return 0;
}

