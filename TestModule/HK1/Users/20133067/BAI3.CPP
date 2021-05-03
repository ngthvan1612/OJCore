#include<stdio.h>
void nhap(int A[],int &n);
int Kiemtra(int A[],int n);
void xuat(int d);
void main()
{
	int A[100],n;
	nhap(A,n);
	int d=Kiemtra(A,n);
	xuat(d);
}
void nhap(int A[],int &n)
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
void xuat(int d)
{
	printf("%d", d);
}
int Kiemtra(int A[],int n)
{
	for (int i=0;i<n;i++)
	{
		if (A[i]%2==0 && A[i+1]%2==0)
			return -1;
		if (A[i]%2==1 && A[i+1]%2==1)
			return -1;
	}

}