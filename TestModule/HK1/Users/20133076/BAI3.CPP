#include <stdio.h>
void nhapmang(int A[],int &n);
void xuat(int kq);
int kiemtra(int A[],int n);
void  main()
{
	int A[100],n;
	nhapmang(A,n);
	int kq=kiemtra(A,n);
	xuat(kq);

}
void nhapmang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int kiemtra(int A[],int n)
{
	int kq=-1;
	for (int i=0;i<n;i++)
	{
		if (A[i]%2==0 && A[i+1]%2==0) kq=i+1;break;
		if (A[i]%2==1 && A[i+1]%2==1) kq=i+1;break;
	}
	return kq;
}