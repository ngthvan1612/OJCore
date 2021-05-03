#include<stdio.h>
int Ktra(int A[],int n);
void nhapMang(int A[],int &n);
void xuat(int kq);
void main()
{
	int A[50],n;
	nhapMang(A,n);
	int kq=Ktra(A,n);
	xuat(kq);
}
int Ktra(int A[],int n)
{
	for (int i=0;i<n-1;i++)
		if ((A[i]+A[i+1])%2==0)
			return i+1;
		return -1;
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}